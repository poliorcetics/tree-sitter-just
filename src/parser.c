#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 128
#define LARGE_STATE_COUNT 60
#define SYMBOL_COUNT 162
#define ALIAS_COUNT 0
#define TOKEN_COUNT 127
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_alias = 2,
  anon_sym_COLON_EQ = 3,
  aux_sym_import_token1 = 4,
  aux_sym_mod_token1 = 5,
  anon_sym_SLASH = 6,
  anon_sym_PLUS = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  anon_sym_arch = 10,
  anon_sym_num_cpus = 11,
  anon_sym_os = 12,
  anon_sym_os_family = 13,
  anon_sym_shell = 14,
  anon_sym_env_var = 15,
  anon_sym_env_var_or_default = 16,
  anon_sym_env = 17,
  anon_sym_is_dependency = 18,
  anon_sym_invocation_dir = 19,
  anon_sym_invocation_dir_native = 20,
  anon_sym_invocation_directory = 21,
  anon_sym_invocation_directory_native = 22,
  anon_sym_justfile = 23,
  anon_sym_justfile_dir = 24,
  anon_sym_justfile_directory = 25,
  anon_sym_source_dir = 26,
  anon_sym_source_directory = 27,
  anon_sym_source_file = 28,
  anon_sym_just_executable = 29,
  anon_sym_just_pid = 30,
  anon_sym_append = 31,
  anon_sym_prepend = 32,
  anon_sym_encode_uri_component = 33,
  anon_sym_quote = 34,
  anon_sym_replace = 35,
  anon_sym_replace_regex = 36,
  anon_sym_trim = 37,
  anon_sym_trim_end = 38,
  anon_sym_trim_end_match = 39,
  anon_sym_trim_end_matches = 40,
  anon_sym_trim_start = 41,
  anon_sym_trim_start_match = 42,
  anon_sym_trim_start_matches = 43,
  anon_sym_capitalize = 44,
  anon_sym_kebabcase = 45,
  anon_sym_lowercamelcase = 46,
  anon_sym_lowercase = 47,
  anon_sym_shoutykebabcase = 48,
  anon_sym_shoutysnakecase = 49,
  anon_sym_snakecase = 50,
  anon_sym_titlecase = 51,
  anon_sym_uppercamelcase = 52,
  anon_sym_uppercase = 53,
  anon_sym_absolute_path = 54,
  anon_sym_canonicalize = 55,
  anon_sym_extension = 56,
  anon_sym_file_name = 57,
  anon_sym_file_stem = 58,
  anon_sym_parent_dir = 59,
  anon_sym_parent_directory = 60,
  anon_sym_without_extension = 61,
  anon_sym_clean = 62,
  anon_sym_join = 63,
  anon_sym_path_exists = 64,
  anon_sym_error = 65,
  anon_sym_blake3 = 66,
  anon_sym_blake3_file = 67,
  anon_sym_sha256 = 68,
  anon_sym_sha256_file = 69,
  anon_sym_uuid = 70,
  anon_sym_choose = 71,
  anon_sym_datetime = 72,
  anon_sym_datetime_utc = 73,
  anon_sym_semver_matches = 74,
  anon_sym_cache_dir = 75,
  anon_sym_cache_directory = 76,
  anon_sym_config_dir = 77,
  anon_sym_config_directory = 78,
  anon_sym_config_local_dir = 79,
  anon_sym_config_local_directory = 80,
  anon_sym_data_dir = 81,
  anon_sym_data_directory = 82,
  anon_sym_data_local_dir = 83,
  anon_sym_data_local_directory = 84,
  anon_sym_executable_dir = 85,
  anon_sym_executable_directory = 86,
  anon_sym_home_dir = 87,
  anon_sym_home_directory = 88,
  anon_sym_COMMA = 89,
  anon_sym_set = 90,
  anon_sym_allow_DASHduplicate_DASHrecipes = 91,
  anon_sym_allow_DASHduplicate_DASHvariables = 92,
  anon_sym_dotenv_DASHfilename = 93,
  anon_sym_dotenv_DASHload = 94,
  anon_sym_dotenv_DASHpath = 95,
  anon_sym_dotenv_DASHrequired = 96,
  anon_sym_export = 97,
  anon_sym_fallback = 98,
  anon_sym_ignore_DASHcomments = 99,
  anon_sym_positional_DASHarguments = 100,
  anon_sym_tempdir = 101,
  anon_sym_unstable = 102,
  anon_sym_windows_DASHpowershell = 103,
  anon_sym_windows_DASHshell = 104,
  anon_sym_LBRACK = 105,
  anon_sym_RBRACK = 106,
  anon_sym_BQUOTE = 107,
  aux_sym_backtick_token1 = 108,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 109,
  aux_sym_indented_backtick_token1 = 110,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 111,
  aux_sym_indented_normal_string_token1 = 112,
  anon_sym_DQUOTE = 113,
  aux_sym_normal_string_token1 = 114,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 115,
  aux_sym_indented_raw_string_token1 = 116,
  anon_sym_SQUOTE = 117,
  aux_sym_raw_string_token1 = 118,
  anon_sym_BSLASHn = 119,
  anon_sym_BSLASHr = 120,
  anon_sym_BSLASHt = 121,
  anon_sym_BSLASH_DQUOTE = 122,
  anon_sym_BSLASH_BSLASH = 123,
  anon_sym_true = 124,
  anon_sym_false = 125,
  aux_sym_comment_token1 = 126,
  sym_file = 127,
  sym_alias = 128,
  sym_import = 129,
  sym_mod = 130,
  sym_expression = 131,
  sym_value = 132,
  sym_builtin_function_call = 133,
  sym__p0 = 134,
  sym__p1 = 135,
  sym__p2 = 136,
  sym__p3 = 137,
  sym__pN = 138,
  sym_function_call = 139,
  sym_function_parameters = 140,
  sym_setting = 141,
  sym__setting_boolean = 142,
  sym__setting_string = 143,
  sym__setting_list = 144,
  sym_backtick = 145,
  sym_indented_backtick = 146,
  sym_string = 147,
  sym_indented_normal_string = 148,
  sym_normal_string = 149,
  sym_indented_raw_string = 150,
  sym_raw_string = 151,
  sym_escape_sequence = 152,
  sym_boolean = 153,
  sym_comment = 154,
  aux_sym_file_repeat1 = 155,
  aux_sym_function_parameters_repeat1 = 156,
  aux_sym__setting_list_repeat1 = 157,
  aux_sym_indented_backtick_repeat1 = 158,
  aux_sym_indented_normal_string_repeat1 = 159,
  aux_sym_normal_string_repeat1 = 160,
  aux_sym_indented_raw_string_repeat1 = 161,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_alias] = "alias",
  [anon_sym_COLON_EQ] = ":=",
  [aux_sym_import_token1] = "import_token1",
  [aux_sym_mod_token1] = "mod_token1",
  [anon_sym_SLASH] = "/",
  [anon_sym_PLUS] = "+",
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
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
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
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
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
  field_setting_name = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_function_name] = "function_name",
  [field_setting_name] = "setting_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_function_name, 0},
  [1] =
    {field_setting_name, 1},
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
  [77] = 75,
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
  [126] = 126,
  [127] = 127,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      ADVANCE_MAP(
        '"', 48,
        '#', 79,
        '\'', 62,
        '(', 20,
        ')', 21,
        '+', 19,
        ',', 22,
        '/', 18,
        ':', 10,
        '[', 23,
        '\\', 5,
        ']', 24,
        '`', 26,
        'i', 72,
        'm', 73,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '#') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '\'') ADVANCE(58);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(56);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == '#') ADVANCE(32);
      if (lookahead == '`') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(48);
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '\'') ADVANCE(62);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == '[') ADVANCE(23);
      if (lookahead == '`') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(38);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(50);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '\'') ADVANCE(61);
      if (lookahead == '`') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(53);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == '`') ADVANCE(30);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '`') ADVANCE(11);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_backtick_token1);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '`') ADVANCE(79);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_backtick_token1);
      if (lookahead == '#') ADVANCE(27);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_backtick_token1);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == '`') ADVANCE(79);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '#') ADVANCE(32);
      if (lookahead == '`') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead == '#') ADVANCE(32);
      if (lookahead == '`') ADVANCE(35);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(37);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead == '`') ADVANCE(11);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(79);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_indented_backtick_token1);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(31);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '#') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == 't') ADVANCE(68);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '#') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(46);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(79);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_indented_normal_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(39);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(6);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_normal_string_token1);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_normal_string_token1);
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_normal_string_token1);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(50);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(49);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_normal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(79);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == '\'') ADVANCE(79);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '\'') ADVANCE(58);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(56);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '\'') ADVANCE(58);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(56);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(60);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(79);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_indented_raw_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(54);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(9);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_raw_string_token1);
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '\'') ADVANCE(79);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_raw_string_token1);
      if (lookahead == '#') ADVANCE(63);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_raw_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(17);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(75);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(71);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(76);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(79);
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
      END_STATE();
    case 2:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'h') ADVANCE(27);
      if (lookahead == 'l') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 5:
      if (lookahead == 'n') ADVANCE(32);
      if (lookahead == 'r') ADVANCE(33);
      if (lookahead == 'x') ADVANCE(34);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 7:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 8:
      if (lookahead == 'g') ADVANCE(38);
      if (lookahead == 'n') ADVANCE(39);
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(41);
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 11:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 12:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 13:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 15:
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == 'h') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(56);
      if (lookahead == 'i') ADVANCE(57);
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(59);
      if (lookahead == 'p') ADVANCE(60);
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(64);
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 23:
      if (lookahead == 'p') ADVANCE(66);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(69);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 'p') ADVANCE(71);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(77);
      if (lookahead == 'v') ADVANCE(78);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead == 'p') ADVANCE(81);
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 37:
      if (lookahead == 'm') ADVANCE(85);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 39:
      if (lookahead == 'v') ADVANCE(87);
      END_STATE();
    case 40:
      if (lookahead == '_') ADVANCE(88);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 42:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 43:
      if (lookahead == 'b') ADVANCE(91);
      END_STATE();
    case 44:
      if (lookahead == 'w') ADVANCE(92);
      END_STATE();
    case 45:
      if (lookahead == 'm') ADVANCE(93);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_os);
      if (lookahead == '_') ADVANCE(94);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(97);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 51:
      if (lookahead == 'p') ADVANCE(100);
      END_STATE();
    case 52:
      if (lookahead == 'm') ADVANCE(101);
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(103);
      if (lookahead == 'e') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 55:
      if (lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 56:
      if (lookahead == 'm') ADVANCE(108);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(110);
      if (lookahead == 'u') ADVANCE(111);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(112);
      END_STATE();
    case 60:
      if (lookahead == 'p') ADVANCE(113);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(115);
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 63:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 67:
      if (lookahead == 'h') ADVANCE(121);
      END_STATE();
    case 68:
      if (lookahead == 'k') ADVANCE(122);
      END_STATE();
    case 69:
      if (lookahead == 'h') ADVANCE(123);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 74:
      if (lookahead == 'f') ADVANCE(128);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(129);
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_env);
      if (lookahead == '_') ADVANCE(133);
      END_STATE();
    case 79:
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 80:
      if (lookahead == 'c') ADVANCE(135);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(138);
      if (lookahead == 's') ADVANCE(139);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 88:
      if (lookahead == 'd') ADVANCE(144);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 93:
      if (lookahead == '_') ADVANCE(149);
      END_STATE();
    case 94:
      if (lookahead == 'f') ADVANCE(150);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 96:
      if (lookahead == 'h') ADVANCE(152);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 98:
      if (lookahead == 'p') ADVANCE(154);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(156);
      END_STATE();
    case 101:
      if (lookahead == 'v') ADVANCE(157);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 103:
      if (lookahead == '2') ADVANCE(158);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(159);
      END_STATE();
    case 105:
      if (lookahead == 'u') ADVANCE(160);
      END_STATE();
    case 106:
      if (lookahead == 'k') ADVANCE(161);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 108:
      if (lookahead == 'p') ADVANCE(163);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(164);
      END_STATE();
    case 110:
      if (lookahead == 'm') ADVANCE(165);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 114:
      if (lookahead == 'd') ADVANCE(169);
      END_STATE();
    case 115:
      if (lookahead == 'd') ADVANCE(170);
      END_STATE();
    case 116:
      if (lookahead == 'h') ADVANCE(171);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(172);
      END_STATE();
    case 118:
      if (lookahead == 's') ADVANCE(173);
      END_STATE();
    case 119:
      if (lookahead == 'w') ADVANCE(174);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_arch);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(178);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 126:
      if (lookahead == 's') ADVANCE(180);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(181);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 129:
      if (lookahead == '_') ADVANCE(183);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(184);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 132:
      if (lookahead == 'd') ADVANCE(186);
      END_STATE();
    case 133:
      if (lookahead == 'v') ADVANCE(187);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 135:
      if (lookahead == 'u') ADVANCE(189);
      END_STATE();
    case 136:
      if (lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 138:
      if (lookahead == 'b') ADVANCE(192);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 140:
      if (lookahead == '_') ADVANCE(194);
      END_STATE();
    case 141:
      if (lookahead == '_') ADVANCE(195);
      END_STATE();
    case 142:
      if (lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 143:
      if (lookahead == 'c') ADVANCE(197);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_join);
      END_STATE();
    case 146:
      if (lookahead == '_') ADVANCE(199);
      if (lookahead == 'f') ADVANCE(200);
      END_STATE();
    case 147:
      if (lookahead == 'b') ADVANCE(201);
      END_STATE();
    case 148:
      if (lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 149:
      if (lookahead == 'c') ADVANCE(203);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(204);
      END_STATE();
    case 151:
      if (lookahead == 'n') ADVANCE(205);
      END_STATE();
    case 152:
      if (lookahead == '_') ADVANCE(206);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 156:
      if (lookahead == 'a') ADVANCE(210);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 158:
      if (lookahead == '5') ADVANCE(212);
      END_STATE();
    case 159:
      if (lookahead == 'l') ADVANCE(213);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(214);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 162:
      if (lookahead == 'c') ADVANCE(216);
      END_STATE();
    case 163:
      if (lookahead == 'd') ADVANCE(217);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_trim);
      if (lookahead == '_') ADVANCE(219);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 167:
      if (lookahead == 'a') ADVANCE(220);
      END_STATE();
    case 168:
      if (lookahead == 'r') ADVANCE(221);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_uuid);
      END_STATE();
    case 170:
      if (lookahead == 'o') ADVANCE(222);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(223);
      END_STATE();
    case 172:
      if (lookahead == 'u') ADVANCE(224);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 174:
      if (lookahead == '-') ADVANCE(225);
      END_STATE();
    case 175:
      if (lookahead == 'd') ADVANCE(226);
      END_STATE();
    case 176:
      if (lookahead == '3') ADVANCE(227);
      END_STATE();
    case 177:
      if (lookahead == '_') ADVANCE(228);
      END_STATE();
    case 178:
      if (lookahead == 'i') ADVANCE(229);
      END_STATE();
    case 179:
      if (lookahead == 'a') ADVANCE(230);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_clean);
      END_STATE();
    case 182:
      if (lookahead == 'g') ADVANCE(232);
      END_STATE();
    case 183:
      if (lookahead == 'd') ADVANCE(233);
      if (lookahead == 'l') ADVANCE(234);
      END_STATE();
    case 184:
      if (lookahead == 'i') ADVANCE(235);
      END_STATE();
    case 185:
      if (lookahead == 'v') ADVANCE(236);
      END_STATE();
    case 186:
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 187:
      if (lookahead == 'a') ADVANCE(238);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(239);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(240);
      END_STATE();
    case 191:
      if (lookahead == 's') ADVANCE(241);
      END_STATE();
    case 192:
      if (lookahead == 'a') ADVANCE(242);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(243);
      if (lookahead == 's') ADVANCE(244);
      END_STATE();
    case 195:
      if (lookahead == 'd') ADVANCE(245);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 197:
      if (lookahead == 'a') ADVANCE(247);
      END_STATE();
    case 198:
      if (lookahead == 'p') ADVANCE(248);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(249);
      if (lookahead == 'p') ADVANCE(250);
      END_STATE();
    case 200:
      if (lookahead == 'i') ADVANCE(251);
      END_STATE();
    case 201:
      if (lookahead == 'c') ADVANCE(252);
      END_STATE();
    case 202:
      if (lookahead == 'c') ADVANCE(253);
      END_STATE();
    case 203:
      if (lookahead == 'p') ADVANCE(254);
      END_STATE();
    case 204:
      if (lookahead == 'm') ADVANCE(255);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(256);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 207:
      if (lookahead == 'i') ADVANCE(258);
      END_STATE();
    case 208:
      if (lookahead == 'n') ADVANCE(259);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_quote);
      END_STATE();
    case 210:
      if (lookahead == 'c') ADVANCE(260);
      END_STATE();
    case 211:
      if (lookahead == 'r') ADVANCE(261);
      END_STATE();
    case 212:
      if (lookahead == '6') ADVANCE(262);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_shell);
      END_STATE();
    case 214:
      if (lookahead == 'y') ADVANCE(263);
      END_STATE();
    case 215:
      if (lookahead == 'c') ADVANCE(264);
      END_STATE();
    case 216:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 217:
      if (lookahead == 'i') ADVANCE(266);
      END_STATE();
    case 218:
      if (lookahead == 'c') ADVANCE(267);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(268);
      if (lookahead == 's') ADVANCE(269);
      END_STATE();
    case 220:
      if (lookahead == 'b') ADVANCE(270);
      END_STATE();
    case 221:
      if (lookahead == 'c') ADVANCE(271);
      END_STATE();
    case 222:
      if (lookahead == 'w') ADVANCE(272);
      END_STATE();
    case 223:
      if (lookahead == 'u') ADVANCE(273);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 225:
      if (lookahead == 'd') ADVANCE(275);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_append);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_blake3);
      if (lookahead == '_') ADVANCE(276);
      END_STATE();
    case 228:
      if (lookahead == 'd') ADVANCE(277);
      END_STATE();
    case 229:
      if (lookahead == 'c') ADVANCE(278);
      END_STATE();
    case 230:
      if (lookahead == 'l') ADVANCE(279);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_choose);
      END_STATE();
    case 232:
      if (lookahead == '_') ADVANCE(280);
      END_STATE();
    case 233:
      if (lookahead == 'i') ADVANCE(281);
      END_STATE();
    case 234:
      if (lookahead == 'o') ADVANCE(282);
      END_STATE();
    case 235:
      if (lookahead == 'm') ADVANCE(283);
      END_STATE();
    case 236:
      if (lookahead == '-') ADVANCE(284);
      END_STATE();
    case 237:
      if (lookahead == '_') ADVANCE(285);
      END_STATE();
    case 238:
      if (lookahead == 'r') ADVANCE(286);
      END_STATE();
    case 239:
      if (lookahead == 'a') ADVANCE(287);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 241:
      if (lookahead == 'i') ADVANCE(288);
      END_STATE();
    case 242:
      if (lookahead == 'c') ADVANCE(289);
      END_STATE();
    case 243:
      if (lookahead == 'a') ADVANCE(290);
      END_STATE();
    case 244:
      if (lookahead == 't') ADVANCE(291);
      END_STATE();
    case 245:
      if (lookahead == 'i') ADVANCE(292);
      END_STATE();
    case 246:
      if (lookahead == '-') ADVANCE(293);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(294);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 249:
      if (lookahead == 'x') ADVANCE(296);
      END_STATE();
    case 250:
      if (lookahead == 'i') ADVANCE(297);
      END_STATE();
    case 251:
      if (lookahead == 'l') ADVANCE(298);
      END_STATE();
    case 252:
      if (lookahead == 'a') ADVANCE(299);
      END_STATE();
    case 253:
      if (lookahead == 'a') ADVANCE(300);
      END_STATE();
    case 254:
      if (lookahead == 'u') ADVANCE(301);
      END_STATE();
    case 255:
      if (lookahead == 'i') ADVANCE(302);
      END_STATE();
    case 256:
      if (lookahead == '_') ADVANCE(303);
      END_STATE();
    case 257:
      if (lookahead == 'x') ADVANCE(304);
      END_STATE();
    case 258:
      if (lookahead == 'o') ADVANCE(305);
      END_STATE();
    case 259:
      if (lookahead == 'd') ADVANCE(306);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(307);
      END_STATE();
    case 261:
      if (lookahead == '_') ADVANCE(308);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_sha256);
      if (lookahead == '_') ADVANCE(309);
      END_STATE();
    case 263:
      if (lookahead == 'k') ADVANCE(310);
      if (lookahead == 's') ADVANCE(311);
      END_STATE();
    case 264:
      if (lookahead == 'a') ADVANCE(312);
      END_STATE();
    case 265:
      if (lookahead == '_') ADVANCE(313);
      END_STATE();
    case 266:
      if (lookahead == 'r') ADVANCE(314);
      END_STATE();
    case 267:
      if (lookahead == 'a') ADVANCE(315);
      END_STATE();
    case 268:
      if (lookahead == 'n') ADVANCE(316);
      END_STATE();
    case 269:
      if (lookahead == 't') ADVANCE(317);
      END_STATE();
    case 270:
      if (lookahead == 'l') ADVANCE(318);
      END_STATE();
    case 271:
      if (lookahead == 'a') ADVANCE(319);
      END_STATE();
    case 272:
      if (lookahead == 's') ADVANCE(320);
      END_STATE();
    case 273:
      if (lookahead == 't') ADVANCE(321);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(322);
      END_STATE();
    case 275:
      if (lookahead == 'u') ADVANCE(323);
      END_STATE();
    case 276:
      if (lookahead == 'f') ADVANCE(324);
      END_STATE();
    case 277:
      if (lookahead == 'i') ADVANCE(325);
      END_STATE();
    case 278:
      if (lookahead == 'a') ADVANCE(326);
      END_STATE();
    case 279:
      if (lookahead == 'i') ADVANCE(327);
      END_STATE();
    case 280:
      if (lookahead == 'd') ADVANCE(328);
      if (lookahead == 'l') ADVANCE(329);
      END_STATE();
    case 281:
      if (lookahead == 'r') ADVANCE(330);
      END_STATE();
    case 282:
      if (lookahead == 'c') ADVANCE(331);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(332);
      END_STATE();
    case 284:
      if (lookahead == 'f') ADVANCE(333);
      if (lookahead == 'l') ADVANCE(334);
      if (lookahead == 'p') ADVANCE(335);
      if (lookahead == 'r') ADVANCE(336);
      END_STATE();
    case 285:
      if (lookahead == 'u') ADVANCE(337);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_env_var);
      if (lookahead == '_') ADVANCE(338);
      END_STATE();
    case 287:
      if (lookahead == 'b') ADVANCE(339);
      END_STATE();
    case 288:
      if (lookahead == 'o') ADVANCE(340);
      END_STATE();
    case 289:
      if (lookahead == 'k') ADVANCE(341);
      END_STATE();
    case 290:
      if (lookahead == 'm') ADVANCE(342);
      END_STATE();
    case 291:
      if (lookahead == 'e') ADVANCE(343);
      END_STATE();
    case 292:
      if (lookahead == 'r') ADVANCE(344);
      END_STATE();
    case 293:
      if (lookahead == 'c') ADVANCE(345);
      END_STATE();
    case 294:
      if (lookahead == 'i') ADVANCE(346);
      END_STATE();
    case 295:
      if (lookahead == 'n') ADVANCE(347);
      END_STATE();
    case 296:
      if (lookahead == 'e') ADVANCE(348);
      END_STATE();
    case 297:
      if (lookahead == 'd') ADVANCE(349);
      END_STATE();
    case 298:
      if (lookahead == 'e') ADVANCE(350);
      END_STATE();
    case 299:
      if (lookahead == 's') ADVANCE(351);
      END_STATE();
    case 300:
      if (lookahead == 'm') ADVANCE(352);
      if (lookahead == 's') ADVANCE(353);
      END_STATE();
    case 301:
      if (lookahead == 's') ADVANCE(354);
      END_STATE();
    case 302:
      if (lookahead == 'l') ADVANCE(355);
      END_STATE();
    case 303:
      if (lookahead == 'd') ADVANCE(356);
      END_STATE();
    case 304:
      if (lookahead == 'i') ADVANCE(357);
      END_STATE();
    case 305:
      if (lookahead == 'n') ADVANCE(358);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_prepend);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_replace);
      if (lookahead == '_') ADVANCE(359);
      END_STATE();
    case 308:
      if (lookahead == 'm') ADVANCE(360);
      END_STATE();
    case 309:
      if (lookahead == 'f') ADVANCE(361);
      END_STATE();
    case 310:
      if (lookahead == 'e') ADVANCE(362);
      END_STATE();
    case 311:
      if (lookahead == 'n') ADVANCE(363);
      END_STATE();
    case 312:
      if (lookahead == 's') ADVANCE(364);
      END_STATE();
    case 313:
      if (lookahead == 'd') ADVANCE(365);
      if (lookahead == 'f') ADVANCE(366);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_tempdir);
      END_STATE();
    case 315:
      if (lookahead == 's') ADVANCE(367);
      END_STATE();
    case 316:
      if (lookahead == 'd') ADVANCE(368);
      END_STATE();
    case 317:
      if (lookahead == 'a') ADVANCE(369);
      END_STATE();
    case 318:
      if (lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 319:
      if (lookahead == 'm') ADVANCE(371);
      if (lookahead == 's') ADVANCE(372);
      END_STATE();
    case 320:
      if (lookahead == '-') ADVANCE(373);
      END_STATE();
    case 321:
      if (lookahead == '_') ADVANCE(374);
      END_STATE();
    case 322:
      if (lookahead == '_') ADVANCE(375);
      END_STATE();
    case 323:
      if (lookahead == 'p') ADVANCE(376);
      END_STATE();
    case 324:
      if (lookahead == 'i') ADVANCE(377);
      END_STATE();
    case 325:
      if (lookahead == 'r') ADVANCE(378);
      END_STATE();
    case 326:
      if (lookahead == 'l') ADVANCE(379);
      END_STATE();
    case 327:
      if (lookahead == 'z') ADVANCE(380);
      END_STATE();
    case 328:
      if (lookahead == 'i') ADVANCE(381);
      END_STATE();
    case 329:
      if (lookahead == 'o') ADVANCE(382);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_data_dir);
      if (lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 331:
      if (lookahead == 'a') ADVANCE(384);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_datetime);
      if (lookahead == '_') ADVANCE(385);
      END_STATE();
    case 333:
      if (lookahead == 'i') ADVANCE(386);
      END_STATE();
    case 334:
      if (lookahead == 'o') ADVANCE(387);
      END_STATE();
    case 335:
      if (lookahead == 'a') ADVANCE(388);
      END_STATE();
    case 336:
      if (lookahead == 'e') ADVANCE(389);
      END_STATE();
    case 337:
      if (lookahead == 'r') ADVANCE(390);
      END_STATE();
    case 338:
      if (lookahead == 'o') ADVANCE(391);
      END_STATE();
    case 339:
      if (lookahead == 'l') ADVANCE(392);
      END_STATE();
    case 340:
      if (lookahead == 'n') ADVANCE(393);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_fallback);
      END_STATE();
    case 342:
      if (lookahead == 'e') ADVANCE(394);
      END_STATE();
    case 343:
      if (lookahead == 'm') ADVANCE(395);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_home_dir);
      if (lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 345:
      if (lookahead == 'o') ADVANCE(397);
      END_STATE();
    case 346:
      if (lookahead == 'o') ADVANCE(398);
      END_STATE();
    case 347:
      if (lookahead == 'd') ADVANCE(399);
      END_STATE();
    case 348:
      if (lookahead == 'c') ADVANCE(400);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_just_pid);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_justfile);
      if (lookahead == '_') ADVANCE(401);
      END_STATE();
    case 351:
      if (lookahead == 'e') ADVANCE(402);
      END_STATE();
    case 352:
      if (lookahead == 'e') ADVANCE(403);
      END_STATE();
    case 353:
      if (lookahead == 'e') ADVANCE(404);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_num_cpus);
      END_STATE();
    case 355:
      if (lookahead == 'y') ADVANCE(405);
      END_STATE();
    case 356:
      if (lookahead == 'i') ADVANCE(406);
      END_STATE();
    case 357:
      if (lookahead == 's') ADVANCE(407);
      END_STATE();
    case 358:
      if (lookahead == 'a') ADVANCE(408);
      END_STATE();
    case 359:
      if (lookahead == 'r') ADVANCE(409);
      END_STATE();
    case 360:
      if (lookahead == 'a') ADVANCE(410);
      END_STATE();
    case 361:
      if (lookahead == 'i') ADVANCE(411);
      END_STATE();
    case 362:
      if (lookahead == 'b') ADVANCE(412);
      END_STATE();
    case 363:
      if (lookahead == 'a') ADVANCE(413);
      END_STATE();
    case 364:
      if (lookahead == 'e') ADVANCE(414);
      END_STATE();
    case 365:
      if (lookahead == 'i') ADVANCE(415);
      END_STATE();
    case 366:
      if (lookahead == 'i') ADVANCE(416);
      END_STATE();
    case 367:
      if (lookahead == 'e') ADVANCE(417);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_trim_end);
      if (lookahead == '_') ADVANCE(418);
      END_STATE();
    case 369:
      if (lookahead == 'r') ADVANCE(419);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_unstable);
      END_STATE();
    case 371:
      if (lookahead == 'e') ADVANCE(420);
      END_STATE();
    case 372:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 373:
      if (lookahead == 'p') ADVANCE(422);
      if (lookahead == 's') ADVANCE(423);
      END_STATE();
    case 374:
      if (lookahead == 'e') ADVANCE(424);
      END_STATE();
    case 375:
      if (lookahead == 'p') ADVANCE(425);
      END_STATE();
    case 376:
      if (lookahead == 'l') ADVANCE(426);
      END_STATE();
    case 377:
      if (lookahead == 'l') ADVANCE(427);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_cache_dir);
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 379:
      if (lookahead == 'i') ADVANCE(429);
      END_STATE();
    case 380:
      if (lookahead == 'e') ADVANCE(430);
      END_STATE();
    case 381:
      if (lookahead == 'r') ADVANCE(431);
      END_STATE();
    case 382:
      if (lookahead == 'c') ADVANCE(432);
      END_STATE();
    case 383:
      if (lookahead == 'c') ADVANCE(433);
      END_STATE();
    case 384:
      if (lookahead == 'l') ADVANCE(434);
      END_STATE();
    case 385:
      if (lookahead == 'u') ADVANCE(435);
      END_STATE();
    case 386:
      if (lookahead == 'l') ADVANCE(436);
      END_STATE();
    case 387:
      if (lookahead == 'a') ADVANCE(437);
      END_STATE();
    case 388:
      if (lookahead == 't') ADVANCE(438);
      END_STATE();
    case 389:
      if (lookahead == 'q') ADVANCE(439);
      END_STATE();
    case 390:
      if (lookahead == 'i') ADVANCE(440);
      END_STATE();
    case 391:
      if (lookahead == 'r') ADVANCE(441);
      END_STATE();
    case 392:
      if (lookahead == 'e') ADVANCE(442);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_extension);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_file_name);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_file_stem);
      END_STATE();
    case 396:
      if (lookahead == 'c') ADVANCE(443);
      END_STATE();
    case 397:
      if (lookahead == 'm') ADVANCE(444);
      END_STATE();
    case 398:
      if (lookahead == 'n') ADVANCE(445);
      END_STATE();
    case 399:
      if (lookahead == 'e') ADVANCE(446);
      END_STATE();
    case 400:
      if (lookahead == 'u') ADVANCE(447);
      END_STATE();
    case 401:
      if (lookahead == 'd') ADVANCE(448);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_kebabcase);
      END_STATE();
    case 403:
      if (lookahead == 'l') ADVANCE(449);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_lowercase);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_os_family);
      END_STATE();
    case 406:
      if (lookahead == 'r') ADVANCE(450);
      END_STATE();
    case 407:
      if (lookahead == 't') ADVANCE(451);
      END_STATE();
    case 408:
      if (lookahead == 'l') ADVANCE(452);
      END_STATE();
    case 409:
      if (lookahead == 'e') ADVANCE(453);
      END_STATE();
    case 410:
      if (lookahead == 't') ADVANCE(454);
      END_STATE();
    case 411:
      if (lookahead == 'l') ADVANCE(455);
      END_STATE();
    case 412:
      if (lookahead == 'a') ADVANCE(456);
      END_STATE();
    case 413:
      if (lookahead == 'k') ADVANCE(457);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_snakecase);
      END_STATE();
    case 415:
      if (lookahead == 'r') ADVANCE(458);
      END_STATE();
    case 416:
      if (lookahead == 'l') ADVANCE(459);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_titlecase);
      END_STATE();
    case 418:
      if (lookahead == 'm') ADVANCE(460);
      END_STATE();
    case 419:
      if (lookahead == 't') ADVANCE(461);
      END_STATE();
    case 420:
      if (lookahead == 'l') ADVANCE(462);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_uppercase);
      END_STATE();
    case 422:
      if (lookahead == 'o') ADVANCE(463);
      END_STATE();
    case 423:
      if (lookahead == 'h') ADVANCE(464);
      END_STATE();
    case 424:
      if (lookahead == 'x') ADVANCE(465);
      END_STATE();
    case 425:
      if (lookahead == 'a') ADVANCE(466);
      END_STATE();
    case 426:
      if (lookahead == 'i') ADVANCE(467);
      END_STATE();
    case 427:
      if (lookahead == 'e') ADVANCE(468);
      END_STATE();
    case 428:
      if (lookahead == 'c') ADVANCE(469);
      END_STATE();
    case 429:
      if (lookahead == 'z') ADVANCE(470);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_capitalize);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_config_dir);
      if (lookahead == 'e') ADVANCE(471);
      END_STATE();
    case 432:
      if (lookahead == 'a') ADVANCE(472);
      END_STATE();
    case 433:
      if (lookahead == 't') ADVANCE(473);
      END_STATE();
    case 434:
      if (lookahead == '_') ADVANCE(474);
      END_STATE();
    case 435:
      if (lookahead == 't') ADVANCE(475);
      END_STATE();
    case 436:
      if (lookahead == 'e') ADVANCE(476);
      END_STATE();
    case 437:
      if (lookahead == 'd') ADVANCE(477);
      END_STATE();
    case 438:
      if (lookahead == 'h') ADVANCE(478);
      END_STATE();
    case 439:
      if (lookahead == 'u') ADVANCE(479);
      END_STATE();
    case 440:
      if (lookahead == '_') ADVANCE(480);
      END_STATE();
    case 441:
      if (lookahead == '_') ADVANCE(481);
      END_STATE();
    case 442:
      if (lookahead == '_') ADVANCE(482);
      END_STATE();
    case 443:
      if (lookahead == 't') ADVANCE(483);
      END_STATE();
    case 444:
      if (lookahead == 'm') ADVANCE(484);
      END_STATE();
    case 445:
      if (lookahead == '_') ADVANCE(485);
      END_STATE();
    case 446:
      if (lookahead == 'n') ADVANCE(486);
      END_STATE();
    case 447:
      if (lookahead == 't') ADVANCE(487);
      END_STATE();
    case 448:
      if (lookahead == 'i') ADVANCE(488);
      END_STATE();
    case 449:
      if (lookahead == 'c') ADVANCE(489);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_parent_dir);
      if (lookahead == 'e') ADVANCE(490);
      END_STATE();
    case 451:
      if (lookahead == 's') ADVANCE(491);
      END_STATE();
    case 452:
      if (lookahead == '-') ADVANCE(492);
      END_STATE();
    case 453:
      if (lookahead == 'g') ADVANCE(493);
      END_STATE();
    case 454:
      if (lookahead == 'c') ADVANCE(494);
      END_STATE();
    case 455:
      if (lookahead == 'e') ADVANCE(495);
      END_STATE();
    case 456:
      if (lookahead == 'b') ADVANCE(496);
      END_STATE();
    case 457:
      if (lookahead == 'e') ADVANCE(497);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_source_dir);
      if (lookahead == 'e') ADVANCE(498);
      END_STATE();
    case 459:
      if (lookahead == 'e') ADVANCE(499);
      END_STATE();
    case 460:
      if (lookahead == 'a') ADVANCE(500);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_trim_start);
      if (lookahead == '_') ADVANCE(501);
      END_STATE();
    case 462:
      if (lookahead == 'c') ADVANCE(502);
      END_STATE();
    case 463:
      if (lookahead == 'w') ADVANCE(503);
      END_STATE();
    case 464:
      if (lookahead == 'e') ADVANCE(504);
      END_STATE();
    case 465:
      if (lookahead == 't') ADVANCE(505);
      END_STATE();
    case 466:
      if (lookahead == 't') ADVANCE(506);
      END_STATE();
    case 467:
      if (lookahead == 'c') ADVANCE(507);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_blake3_file);
      END_STATE();
    case 469:
      if (lookahead == 't') ADVANCE(508);
      END_STATE();
    case 470:
      if (lookahead == 'e') ADVANCE(509);
      END_STATE();
    case 471:
      if (lookahead == 'c') ADVANCE(510);
      END_STATE();
    case 472:
      if (lookahead == 'l') ADVANCE(511);
      END_STATE();
    case 473:
      if (lookahead == 'o') ADVANCE(512);
      END_STATE();
    case 474:
      if (lookahead == 'd') ADVANCE(513);
      END_STATE();
    case 475:
      if (lookahead == 'c') ADVANCE(514);
      END_STATE();
    case 476:
      if (lookahead == 'n') ADVANCE(515);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHload);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHpath);
      END_STATE();
    case 479:
      if (lookahead == 'i') ADVANCE(516);
      END_STATE();
    case 480:
      if (lookahead == 'c') ADVANCE(517);
      END_STATE();
    case 481:
      if (lookahead == 'd') ADVANCE(518);
      END_STATE();
    case 482:
      if (lookahead == 'd') ADVANCE(519);
      END_STATE();
    case 483:
      if (lookahead == 'o') ADVANCE(520);
      END_STATE();
    case 484:
      if (lookahead == 'e') ADVANCE(521);
      END_STATE();
    case 485:
      if (lookahead == 'd') ADVANCE(522);
      END_STATE();
    case 486:
      if (lookahead == 'c') ADVANCE(523);
      END_STATE();
    case 487:
      if (lookahead == 'a') ADVANCE(524);
      END_STATE();
    case 488:
      if (lookahead == 'r') ADVANCE(525);
      END_STATE();
    case 489:
      if (lookahead == 'a') ADVANCE(526);
      END_STATE();
    case 490:
      if (lookahead == 'c') ADVANCE(527);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_path_exists);
      END_STATE();
    case 492:
      if (lookahead == 'a') ADVANCE(528);
      END_STATE();
    case 493:
      if (lookahead == 'e') ADVANCE(529);
      END_STATE();
    case 494:
      if (lookahead == 'h') ADVANCE(530);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_sha256_file);
      END_STATE();
    case 496:
      if (lookahead == 'c') ADVANCE(531);
      END_STATE();
    case 497:
      if (lookahead == 'c') ADVANCE(532);
      END_STATE();
    case 498:
      if (lookahead == 'c') ADVANCE(533);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_source_file);
      END_STATE();
    case 500:
      if (lookahead == 't') ADVANCE(534);
      END_STATE();
    case 501:
      if (lookahead == 'm') ADVANCE(535);
      END_STATE();
    case 502:
      if (lookahead == 'a') ADVANCE(536);
      END_STATE();
    case 503:
      if (lookahead == 'e') ADVANCE(537);
      END_STATE();
    case 504:
      if (lookahead == 'l') ADVANCE(538);
      END_STATE();
    case 505:
      if (lookahead == 'e') ADVANCE(539);
      END_STATE();
    case 506:
      if (lookahead == 'h') ADVANCE(540);
      END_STATE();
    case 507:
      if (lookahead == 'a') ADVANCE(541);
      END_STATE();
    case 508:
      if (lookahead == 'o') ADVANCE(542);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_canonicalize);
      END_STATE();
    case 510:
      if (lookahead == 't') ADVANCE(543);
      END_STATE();
    case 511:
      if (lookahead == '_') ADVANCE(544);
      END_STATE();
    case 512:
      if (lookahead == 'r') ADVANCE(545);
      END_STATE();
    case 513:
      if (lookahead == 'i') ADVANCE(546);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_datetime_utc);
      END_STATE();
    case 515:
      if (lookahead == 'a') ADVANCE(547);
      END_STATE();
    case 516:
      if (lookahead == 'r') ADVANCE(548);
      END_STATE();
    case 517:
      if (lookahead == 'o') ADVANCE(549);
      END_STATE();
    case 518:
      if (lookahead == 'e') ADVANCE(550);
      END_STATE();
    case 519:
      if (lookahead == 'i') ADVANCE(551);
      END_STATE();
    case 520:
      if (lookahead == 'r') ADVANCE(552);
      END_STATE();
    case 521:
      if (lookahead == 'n') ADVANCE(553);
      END_STATE();
    case 522:
      if (lookahead == 'i') ADVANCE(554);
      END_STATE();
    case 523:
      if (lookahead == 'y') ADVANCE(555);
      END_STATE();
    case 524:
      if (lookahead == 'b') ADVANCE(556);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_justfile_dir);
      if (lookahead == 'e') ADVANCE(557);
      END_STATE();
    case 526:
      if (lookahead == 's') ADVANCE(558);
      END_STATE();
    case 527:
      if (lookahead == 't') ADVANCE(559);
      END_STATE();
    case 528:
      if (lookahead == 'r') ADVANCE(560);
      END_STATE();
    case 529:
      if (lookahead == 'x') ADVANCE(561);
      END_STATE();
    case 530:
      if (lookahead == 'e') ADVANCE(562);
      END_STATE();
    case 531:
      if (lookahead == 'a') ADVANCE(563);
      END_STATE();
    case 532:
      if (lookahead == 'a') ADVANCE(564);
      END_STATE();
    case 533:
      if (lookahead == 't') ADVANCE(565);
      END_STATE();
    case 534:
      if (lookahead == 'c') ADVANCE(566);
      END_STATE();
    case 535:
      if (lookahead == 'a') ADVANCE(567);
      END_STATE();
    case 536:
      if (lookahead == 's') ADVANCE(568);
      END_STATE();
    case 537:
      if (lookahead == 'r') ADVANCE(569);
      END_STATE();
    case 538:
      if (lookahead == 'l') ADVANCE(570);
      END_STATE();
    case 539:
      if (lookahead == 'n') ADVANCE(571);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_absolute_path);
      END_STATE();
    case 541:
      if (lookahead == 't') ADVANCE(572);
      END_STATE();
    case 542:
      if (lookahead == 'r') ADVANCE(573);
      END_STATE();
    case 543:
      if (lookahead == 'o') ADVANCE(574);
      END_STATE();
    case 544:
      if (lookahead == 'd') ADVANCE(575);
      END_STATE();
    case 545:
      if (lookahead == 'y') ADVANCE(576);
      END_STATE();
    case 546:
      if (lookahead == 'r') ADVANCE(577);
      END_STATE();
    case 547:
      if (lookahead == 'm') ADVANCE(578);
      END_STATE();
    case 548:
      if (lookahead == 'e') ADVANCE(579);
      END_STATE();
    case 549:
      if (lookahead == 'm') ADVANCE(580);
      END_STATE();
    case 550:
      if (lookahead == 'f') ADVANCE(581);
      END_STATE();
    case 551:
      if (lookahead == 'r') ADVANCE(582);
      END_STATE();
    case 552:
      if (lookahead == 'y') ADVANCE(583);
      END_STATE();
    case 553:
      if (lookahead == 't') ADVANCE(584);
      END_STATE();
    case 554:
      if (lookahead == 'r') ADVANCE(585);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_is_dependency);
      END_STATE();
    case 556:
      if (lookahead == 'l') ADVANCE(586);
      END_STATE();
    case 557:
      if (lookahead == 'c') ADVANCE(587);
      END_STATE();
    case 558:
      if (lookahead == 'e') ADVANCE(588);
      END_STATE();
    case 559:
      if (lookahead == 'o') ADVANCE(589);
      END_STATE();
    case 560:
      if (lookahead == 'g') ADVANCE(590);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_replace_regex);
      END_STATE();
    case 562:
      if (lookahead == 's') ADVANCE(591);
      END_STATE();
    case 563:
      if (lookahead == 's') ADVANCE(592);
      END_STATE();
    case 564:
      if (lookahead == 's') ADVANCE(593);
      END_STATE();
    case 565:
      if (lookahead == 'o') ADVANCE(594);
      END_STATE();
    case 566:
      if (lookahead == 'h') ADVANCE(595);
      END_STATE();
    case 567:
      if (lookahead == 't') ADVANCE(596);
      END_STATE();
    case 568:
      if (lookahead == 'e') ADVANCE(597);
      END_STATE();
    case 569:
      if (lookahead == 's') ADVANCE(598);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_windows_DASHshell);
      END_STATE();
    case 571:
      if (lookahead == 's') ADVANCE(599);
      END_STATE();
    case 572:
      if (lookahead == 'e') ADVANCE(600);
      END_STATE();
    case 573:
      if (lookahead == 'y') ADVANCE(601);
      END_STATE();
    case 574:
      if (lookahead == 'r') ADVANCE(602);
      END_STATE();
    case 575:
      if (lookahead == 'i') ADVANCE(603);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_data_directory);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_data_local_dir);
      if (lookahead == 'e') ADVANCE(604);
      END_STATE();
    case 578:
      if (lookahead == 'e') ADVANCE(605);
      END_STATE();
    case 579:
      if (lookahead == 'd') ADVANCE(606);
      END_STATE();
    case 580:
      if (lookahead == 'p') ADVANCE(607);
      END_STATE();
    case 581:
      if (lookahead == 'a') ADVANCE(608);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_executable_dir);
      if (lookahead == 'e') ADVANCE(609);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_home_directory);
      END_STATE();
    case 584:
      if (lookahead == 's') ADVANCE(610);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_invocation_dir);
      if (lookahead == '_') ADVANCE(611);
      if (lookahead == 'e') ADVANCE(612);
      END_STATE();
    case 586:
      if (lookahead == 'e') ADVANCE(613);
      END_STATE();
    case 587:
      if (lookahead == 't') ADVANCE(614);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_lowercamelcase);
      END_STATE();
    case 589:
      if (lookahead == 'r') ADVANCE(615);
      END_STATE();
    case 590:
      if (lookahead == 'u') ADVANCE(616);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_semver_matches);
      END_STATE();
    case 592:
      if (lookahead == 'e') ADVANCE(617);
      END_STATE();
    case 593:
      if (lookahead == 'e') ADVANCE(618);
      END_STATE();
    case 594:
      if (lookahead == 'r') ADVANCE(619);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_trim_end_match);
      if (lookahead == 'e') ADVANCE(620);
      END_STATE();
    case 596:
      if (lookahead == 'c') ADVANCE(621);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_uppercamelcase);
      END_STATE();
    case 598:
      if (lookahead == 'h') ADVANCE(622);
      END_STATE();
    case 599:
      if (lookahead == 'i') ADVANCE(623);
      END_STATE();
    case 600:
      if (lookahead == '-') ADVANCE(624);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_cache_directory);
      END_STATE();
    case 602:
      if (lookahead == 'y') ADVANCE(625);
      END_STATE();
    case 603:
      if (lookahead == 'r') ADVANCE(626);
      END_STATE();
    case 604:
      if (lookahead == 'c') ADVANCE(627);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHfilename);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_dotenv_DASHrequired);
      END_STATE();
    case 607:
      if (lookahead == 'o') ADVANCE(628);
      END_STATE();
    case 608:
      if (lookahead == 'u') ADVANCE(629);
      END_STATE();
    case 609:
      if (lookahead == 'c') ADVANCE(630);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_ignore_DASHcomments);
      END_STATE();
    case 611:
      if (lookahead == 'n') ADVANCE(631);
      END_STATE();
    case 612:
      if (lookahead == 'c') ADVANCE(632);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_just_executable);
      END_STATE();
    case 614:
      if (lookahead == 'o') ADVANCE(633);
      END_STATE();
    case 615:
      if (lookahead == 'y') ADVANCE(634);
      END_STATE();
    case 616:
      if (lookahead == 'm') ADVANCE(635);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_shoutykebabcase);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_shoutysnakecase);
      END_STATE();
    case 619:
      if (lookahead == 'y') ADVANCE(636);
      END_STATE();
    case 620:
      if (lookahead == 's') ADVANCE(637);
      END_STATE();
    case 621:
      if (lookahead == 'h') ADVANCE(638);
      END_STATE();
    case 622:
      if (lookahead == 'e') ADVANCE(639);
      END_STATE();
    case 623:
      if (lookahead == 'o') ADVANCE(640);
      END_STATE();
    case 624:
      if (lookahead == 'r') ADVANCE(641);
      if (lookahead == 'v') ADVANCE(642);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_config_directory);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_config_local_dir);
      if (lookahead == 'e') ADVANCE(643);
      END_STATE();
    case 627:
      if (lookahead == 't') ADVANCE(644);
      END_STATE();
    case 628:
      if (lookahead == 'n') ADVANCE(645);
      END_STATE();
    case 629:
      if (lookahead == 'l') ADVANCE(646);
      END_STATE();
    case 630:
      if (lookahead == 't') ADVANCE(647);
      END_STATE();
    case 631:
      if (lookahead == 'a') ADVANCE(648);
      END_STATE();
    case 632:
      if (lookahead == 't') ADVANCE(649);
      END_STATE();
    case 633:
      if (lookahead == 'r') ADVANCE(650);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_parent_directory);
      END_STATE();
    case 635:
      if (lookahead == 'e') ADVANCE(651);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_source_directory);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_trim_end_matches);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_trim_start_match);
      if (lookahead == 'e') ADVANCE(652);
      END_STATE();
    case 639:
      if (lookahead == 'l') ADVANCE(653);
      END_STATE();
    case 640:
      if (lookahead == 'n') ADVANCE(654);
      END_STATE();
    case 641:
      if (lookahead == 'e') ADVANCE(655);
      END_STATE();
    case 642:
      if (lookahead == 'a') ADVANCE(656);
      END_STATE();
    case 643:
      if (lookahead == 'c') ADVANCE(657);
      END_STATE();
    case 644:
      if (lookahead == 'o') ADVANCE(658);
      END_STATE();
    case 645:
      if (lookahead == 'e') ADVANCE(659);
      END_STATE();
    case 646:
      if (lookahead == 't') ADVANCE(660);
      END_STATE();
    case 647:
      if (lookahead == 'o') ADVANCE(661);
      END_STATE();
    case 648:
      if (lookahead == 't') ADVANCE(662);
      END_STATE();
    case 649:
      if (lookahead == 'o') ADVANCE(663);
      END_STATE();
    case 650:
      if (lookahead == 'y') ADVANCE(664);
      END_STATE();
    case 651:
      if (lookahead == 'n') ADVANCE(665);
      END_STATE();
    case 652:
      if (lookahead == 's') ADVANCE(666);
      END_STATE();
    case 653:
      if (lookahead == 'l') ADVANCE(667);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_without_extension);
      END_STATE();
    case 655:
      if (lookahead == 'c') ADVANCE(668);
      END_STATE();
    case 656:
      if (lookahead == 'r') ADVANCE(669);
      END_STATE();
    case 657:
      if (lookahead == 't') ADVANCE(670);
      END_STATE();
    case 658:
      if (lookahead == 'r') ADVANCE(671);
      END_STATE();
    case 659:
      if (lookahead == 'n') ADVANCE(672);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_env_var_or_default);
      END_STATE();
    case 661:
      if (lookahead == 'r') ADVANCE(673);
      END_STATE();
    case 662:
      if (lookahead == 'i') ADVANCE(674);
      END_STATE();
    case 663:
      if (lookahead == 'r') ADVANCE(675);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_justfile_directory);
      END_STATE();
    case 665:
      if (lookahead == 't') ADVANCE(676);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_trim_start_matches);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_windows_DASHpowershell);
      END_STATE();
    case 668:
      if (lookahead == 'i') ADVANCE(677);
      END_STATE();
    case 669:
      if (lookahead == 'i') ADVANCE(678);
      END_STATE();
    case 670:
      if (lookahead == 'o') ADVANCE(679);
      END_STATE();
    case 671:
      if (lookahead == 'y') ADVANCE(680);
      END_STATE();
    case 672:
      if (lookahead == 't') ADVANCE(681);
      END_STATE();
    case 673:
      if (lookahead == 'y') ADVANCE(682);
      END_STATE();
    case 674:
      if (lookahead == 'v') ADVANCE(683);
      END_STATE();
    case 675:
      if (lookahead == 'y') ADVANCE(684);
      END_STATE();
    case 676:
      if (lookahead == 's') ADVANCE(685);
      END_STATE();
    case 677:
      if (lookahead == 'p') ADVANCE(686);
      END_STATE();
    case 678:
      if (lookahead == 'a') ADVANCE(687);
      END_STATE();
    case 679:
      if (lookahead == 'r') ADVANCE(688);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_data_local_directory);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_encode_uri_component);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_executable_directory);
      END_STATE();
    case 683:
      if (lookahead == 'e') ADVANCE(689);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_invocation_directory);
      if (lookahead == '_') ADVANCE(690);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_positional_DASHarguments);
      END_STATE();
    case 686:
      if (lookahead == 'e') ADVANCE(691);
      END_STATE();
    case 687:
      if (lookahead == 'b') ADVANCE(692);
      END_STATE();
    case 688:
      if (lookahead == 'y') ADVANCE(693);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_invocation_dir_native);
      END_STATE();
    case 690:
      if (lookahead == 'n') ADVANCE(694);
      END_STATE();
    case 691:
      if (lookahead == 's') ADVANCE(695);
      END_STATE();
    case 692:
      if (lookahead == 'l') ADVANCE(696);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_config_local_directory);
      END_STATE();
    case 694:
      if (lookahead == 'a') ADVANCE(697);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_allow_DASHduplicate_DASHrecipes);
      END_STATE();
    case 696:
      if (lookahead == 'e') ADVANCE(698);
      END_STATE();
    case 697:
      if (lookahead == 't') ADVANCE(699);
      END_STATE();
    case 698:
      if (lookahead == 's') ADVANCE(700);
      END_STATE();
    case 699:
      if (lookahead == 'i') ADVANCE(701);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_allow_DASHduplicate_DASHvariables);
      END_STATE();
    case 701:
      if (lookahead == 'v') ADVANCE(702);
      END_STATE();
    case 702:
      if (lookahead == 'e') ADVANCE(703);
      END_STATE();
    case 703:
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
  [18] = {.lex_state = 4},
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
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 8},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 28},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 8},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 64},
  [126] = {.lex_state = 0},
  [127] = {(TSStateId)(-1)},
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
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
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
    [sym_file] = STATE(124),
    [sym_alias] = STATE(53),
    [sym_import] = STATE(53),
    [sym_mod] = STATE(53),
    [sym_expression] = STATE(53),
    [sym_value] = STATE(35),
    [sym_builtin_function_call] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_setting] = STATE(53),
    [sym_backtick] = STATE(36),
    [sym_indented_backtick] = STATE(36),
    [sym_string] = STATE(36),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
    [sym_comment] = STATE(1),
    [aux_sym_file_repeat1] = STATE(3),
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
    [anon_sym_parent_dir] = ACTIONS(21),
    [anon_sym_parent_directory] = ACTIONS(21),
    [anon_sym_without_extension] = ACTIONS(21),
    [anon_sym_clean] = ACTIONS(21),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(21),
    [anon_sym_error] = ACTIONS(21),
    [anon_sym_blake3] = ACTIONS(21),
    [anon_sym_blake3_file] = ACTIONS(21),
    [anon_sym_sha256] = ACTIONS(21),
    [anon_sym_sha256_file] = ACTIONS(21),
    [anon_sym_uuid] = ACTIONS(17),
    [anon_sym_choose] = ACTIONS(23),
    [anon_sym_datetime] = ACTIONS(21),
    [anon_sym_datetime_utc] = ACTIONS(21),
    [anon_sym_semver_matches] = ACTIONS(23),
    [anon_sym_cache_dir] = ACTIONS(17),
    [anon_sym_cache_directory] = ACTIONS(17),
    [anon_sym_config_dir] = ACTIONS(17),
    [anon_sym_config_directory] = ACTIONS(17),
    [anon_sym_config_local_dir] = ACTIONS(17),
    [anon_sym_config_local_directory] = ACTIONS(17),
    [anon_sym_data_dir] = ACTIONS(17),
    [anon_sym_data_directory] = ACTIONS(17),
    [anon_sym_data_local_dir] = ACTIONS(17),
    [anon_sym_data_local_directory] = ACTIONS(17),
    [anon_sym_executable_dir] = ACTIONS(17),
    [anon_sym_executable_directory] = ACTIONS(17),
    [anon_sym_home_dir] = ACTIONS(17),
    [anon_sym_home_directory] = ACTIONS(17),
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
    [sym_alias] = STATE(53),
    [sym_import] = STATE(53),
    [sym_mod] = STATE(53),
    [sym_expression] = STATE(53),
    [sym_value] = STATE(35),
    [sym_builtin_function_call] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_setting] = STATE(53),
    [sym_backtick] = STATE(36),
    [sym_indented_backtick] = STATE(36),
    [sym_string] = STATE(36),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
    [sym_comment] = STATE(2),
    [aux_sym_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(43),
    [sym_identifier] = ACTIONS(45),
    [anon_sym_alias] = ACTIONS(48),
    [aux_sym_import_token1] = ACTIONS(51),
    [aux_sym_mod_token1] = ACTIONS(54),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_arch] = ACTIONS(60),
    [anon_sym_num_cpus] = ACTIONS(60),
    [anon_sym_os] = ACTIONS(60),
    [anon_sym_os_family] = ACTIONS(60),
    [anon_sym_shell] = ACTIONS(63),
    [anon_sym_env_var] = ACTIONS(66),
    [anon_sym_env_var_or_default] = ACTIONS(69),
    [anon_sym_env] = ACTIONS(72),
    [anon_sym_is_dependency] = ACTIONS(60),
    [anon_sym_invocation_dir] = ACTIONS(60),
    [anon_sym_invocation_dir_native] = ACTIONS(60),
    [anon_sym_invocation_directory] = ACTIONS(60),
    [anon_sym_invocation_directory_native] = ACTIONS(60),
    [anon_sym_justfile] = ACTIONS(60),
    [anon_sym_justfile_dir] = ACTIONS(60),
    [anon_sym_justfile_directory] = ACTIONS(60),
    [anon_sym_source_dir] = ACTIONS(60),
    [anon_sym_source_directory] = ACTIONS(60),
    [anon_sym_source_file] = ACTIONS(60),
    [anon_sym_just_executable] = ACTIONS(60),
    [anon_sym_just_pid] = ACTIONS(60),
    [anon_sym_append] = ACTIONS(69),
    [anon_sym_prepend] = ACTIONS(69),
    [anon_sym_encode_uri_component] = ACTIONS(66),
    [anon_sym_quote] = ACTIONS(66),
    [anon_sym_replace] = ACTIONS(75),
    [anon_sym_replace_regex] = ACTIONS(75),
    [anon_sym_trim] = ACTIONS(66),
    [anon_sym_trim_end] = ACTIONS(66),
    [anon_sym_trim_end_match] = ACTIONS(69),
    [anon_sym_trim_end_matches] = ACTIONS(69),
    [anon_sym_trim_start] = ACTIONS(66),
    [anon_sym_trim_start_match] = ACTIONS(69),
    [anon_sym_trim_start_matches] = ACTIONS(69),
    [anon_sym_capitalize] = ACTIONS(66),
    [anon_sym_kebabcase] = ACTIONS(66),
    [anon_sym_lowercamelcase] = ACTIONS(66),
    [anon_sym_lowercase] = ACTIONS(66),
    [anon_sym_shoutykebabcase] = ACTIONS(66),
    [anon_sym_shoutysnakecase] = ACTIONS(66),
    [anon_sym_snakecase] = ACTIONS(66),
    [anon_sym_titlecase] = ACTIONS(66),
    [anon_sym_uppercamelcase] = ACTIONS(66),
    [anon_sym_uppercase] = ACTIONS(66),
    [anon_sym_absolute_path] = ACTIONS(66),
    [anon_sym_canonicalize] = ACTIONS(66),
    [anon_sym_extension] = ACTIONS(66),
    [anon_sym_file_name] = ACTIONS(66),
    [anon_sym_file_stem] = ACTIONS(66),
    [anon_sym_parent_dir] = ACTIONS(66),
    [anon_sym_parent_directory] = ACTIONS(66),
    [anon_sym_without_extension] = ACTIONS(66),
    [anon_sym_clean] = ACTIONS(66),
    [anon_sym_join] = ACTIONS(63),
    [anon_sym_path_exists] = ACTIONS(66),
    [anon_sym_error] = ACTIONS(66),
    [anon_sym_blake3] = ACTIONS(66),
    [anon_sym_blake3_file] = ACTIONS(66),
    [anon_sym_sha256] = ACTIONS(66),
    [anon_sym_sha256_file] = ACTIONS(66),
    [anon_sym_uuid] = ACTIONS(60),
    [anon_sym_choose] = ACTIONS(69),
    [anon_sym_datetime] = ACTIONS(66),
    [anon_sym_datetime_utc] = ACTIONS(66),
    [anon_sym_semver_matches] = ACTIONS(69),
    [anon_sym_cache_dir] = ACTIONS(60),
    [anon_sym_cache_directory] = ACTIONS(60),
    [anon_sym_config_dir] = ACTIONS(60),
    [anon_sym_config_directory] = ACTIONS(60),
    [anon_sym_config_local_dir] = ACTIONS(60),
    [anon_sym_config_local_directory] = ACTIONS(60),
    [anon_sym_data_dir] = ACTIONS(60),
    [anon_sym_data_directory] = ACTIONS(60),
    [anon_sym_data_local_dir] = ACTIONS(60),
    [anon_sym_data_local_directory] = ACTIONS(60),
    [anon_sym_executable_dir] = ACTIONS(60),
    [anon_sym_executable_directory] = ACTIONS(60),
    [anon_sym_home_dir] = ACTIONS(60),
    [anon_sym_home_directory] = ACTIONS(60),
    [anon_sym_set] = ACTIONS(78),
    [anon_sym_BQUOTE] = ACTIONS(81),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(84),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(96),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [3] = {
    [sym_alias] = STATE(53),
    [sym_import] = STATE(53),
    [sym_mod] = STATE(53),
    [sym_expression] = STATE(53),
    [sym_value] = STATE(35),
    [sym_builtin_function_call] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_setting] = STATE(53),
    [sym_backtick] = STATE(36),
    [sym_indented_backtick] = STATE(36),
    [sym_string] = STATE(36),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
    [sym_comment] = STATE(3),
    [aux_sym_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(99),
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
    [anon_sym_parent_dir] = ACTIONS(21),
    [anon_sym_parent_directory] = ACTIONS(21),
    [anon_sym_without_extension] = ACTIONS(21),
    [anon_sym_clean] = ACTIONS(21),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(21),
    [anon_sym_error] = ACTIONS(21),
    [anon_sym_blake3] = ACTIONS(21),
    [anon_sym_blake3_file] = ACTIONS(21),
    [anon_sym_sha256] = ACTIONS(21),
    [anon_sym_sha256_file] = ACTIONS(21),
    [anon_sym_uuid] = ACTIONS(17),
    [anon_sym_choose] = ACTIONS(23),
    [anon_sym_datetime] = ACTIONS(21),
    [anon_sym_datetime_utc] = ACTIONS(21),
    [anon_sym_semver_matches] = ACTIONS(23),
    [anon_sym_cache_dir] = ACTIONS(17),
    [anon_sym_cache_directory] = ACTIONS(17),
    [anon_sym_config_dir] = ACTIONS(17),
    [anon_sym_config_directory] = ACTIONS(17),
    [anon_sym_config_local_dir] = ACTIONS(17),
    [anon_sym_config_local_directory] = ACTIONS(17),
    [anon_sym_data_dir] = ACTIONS(17),
    [anon_sym_data_directory] = ACTIONS(17),
    [anon_sym_data_local_dir] = ACTIONS(17),
    [anon_sym_data_local_directory] = ACTIONS(17),
    [anon_sym_executable_dir] = ACTIONS(17),
    [anon_sym_executable_directory] = ACTIONS(17),
    [anon_sym_home_dir] = ACTIONS(17),
    [anon_sym_home_directory] = ACTIONS(17),
    [anon_sym_set] = ACTIONS(29),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [4] = {
    [sym_expression] = STATE(91),
    [sym_value] = STATE(35),
    [sym_builtin_function_call] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_function_parameters] = STATE(109),
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
    [anon_sym_parent_dir] = ACTIONS(21),
    [anon_sym_parent_directory] = ACTIONS(21),
    [anon_sym_without_extension] = ACTIONS(21),
    [anon_sym_clean] = ACTIONS(21),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(21),
    [anon_sym_error] = ACTIONS(21),
    [anon_sym_blake3] = ACTIONS(21),
    [anon_sym_blake3_file] = ACTIONS(21),
    [anon_sym_sha256] = ACTIONS(21),
    [anon_sym_sha256_file] = ACTIONS(21),
    [anon_sym_uuid] = ACTIONS(17),
    [anon_sym_choose] = ACTIONS(23),
    [anon_sym_datetime] = ACTIONS(21),
    [anon_sym_datetime_utc] = ACTIONS(21),
    [anon_sym_semver_matches] = ACTIONS(23),
    [anon_sym_cache_dir] = ACTIONS(17),
    [anon_sym_cache_directory] = ACTIONS(17),
    [anon_sym_config_dir] = ACTIONS(17),
    [anon_sym_config_directory] = ACTIONS(17),
    [anon_sym_config_local_dir] = ACTIONS(17),
    [anon_sym_config_local_directory] = ACTIONS(17),
    [anon_sym_data_dir] = ACTIONS(17),
    [anon_sym_data_directory] = ACTIONS(17),
    [anon_sym_data_local_dir] = ACTIONS(17),
    [anon_sym_data_local_directory] = ACTIONS(17),
    [anon_sym_executable_dir] = ACTIONS(17),
    [anon_sym_executable_directory] = ACTIONS(17),
    [anon_sym_home_dir] = ACTIONS(17),
    [anon_sym_home_directory] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [5] = {
    [sym_expression] = STATE(106),
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
    [anon_sym_parent_dir] = ACTIONS(21),
    [anon_sym_parent_directory] = ACTIONS(21),
    [anon_sym_without_extension] = ACTIONS(21),
    [anon_sym_clean] = ACTIONS(21),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(21),
    [anon_sym_error] = ACTIONS(21),
    [anon_sym_blake3] = ACTIONS(21),
    [anon_sym_blake3_file] = ACTIONS(21),
    [anon_sym_sha256] = ACTIONS(21),
    [anon_sym_sha256_file] = ACTIONS(21),
    [anon_sym_uuid] = ACTIONS(17),
    [anon_sym_choose] = ACTIONS(23),
    [anon_sym_datetime] = ACTIONS(21),
    [anon_sym_datetime_utc] = ACTIONS(21),
    [anon_sym_semver_matches] = ACTIONS(23),
    [anon_sym_cache_dir] = ACTIONS(17),
    [anon_sym_cache_directory] = ACTIONS(17),
    [anon_sym_config_dir] = ACTIONS(17),
    [anon_sym_config_directory] = ACTIONS(17),
    [anon_sym_config_local_dir] = ACTIONS(17),
    [anon_sym_config_local_directory] = ACTIONS(17),
    [anon_sym_data_dir] = ACTIONS(17),
    [anon_sym_data_directory] = ACTIONS(17),
    [anon_sym_data_local_dir] = ACTIONS(17),
    [anon_sym_data_local_directory] = ACTIONS(17),
    [anon_sym_executable_dir] = ACTIONS(17),
    [anon_sym_executable_directory] = ACTIONS(17),
    [anon_sym_home_dir] = ACTIONS(17),
    [anon_sym_home_directory] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [6] = {
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
    [sym_comment] = STATE(6),
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
    [anon_sym_parent_dir] = ACTIONS(21),
    [anon_sym_parent_directory] = ACTIONS(21),
    [anon_sym_without_extension] = ACTIONS(21),
    [anon_sym_clean] = ACTIONS(21),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(21),
    [anon_sym_error] = ACTIONS(21),
    [anon_sym_blake3] = ACTIONS(21),
    [anon_sym_blake3_file] = ACTIONS(21),
    [anon_sym_sha256] = ACTIONS(21),
    [anon_sym_sha256_file] = ACTIONS(21),
    [anon_sym_uuid] = ACTIONS(17),
    [anon_sym_choose] = ACTIONS(23),
    [anon_sym_datetime] = ACTIONS(21),
    [anon_sym_datetime_utc] = ACTIONS(21),
    [anon_sym_semver_matches] = ACTIONS(23),
    [anon_sym_cache_dir] = ACTIONS(17),
    [anon_sym_cache_directory] = ACTIONS(17),
    [anon_sym_config_dir] = ACTIONS(17),
    [anon_sym_config_directory] = ACTIONS(17),
    [anon_sym_config_local_dir] = ACTIONS(17),
    [anon_sym_config_local_directory] = ACTIONS(17),
    [anon_sym_data_dir] = ACTIONS(17),
    [anon_sym_data_directory] = ACTIONS(17),
    [anon_sym_data_local_dir] = ACTIONS(17),
    [anon_sym_data_local_directory] = ACTIONS(17),
    [anon_sym_executable_dir] = ACTIONS(17),
    [anon_sym_executable_directory] = ACTIONS(17),
    [anon_sym_home_dir] = ACTIONS(17),
    [anon_sym_home_directory] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [7] = {
    [sym_expression] = STATE(91),
    [sym_value] = STATE(35),
    [sym_builtin_function_call] = STATE(36),
    [sym_function_call] = STATE(36),
    [sym_function_parameters] = STATE(115),
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
    [anon_sym_parent_dir] = ACTIONS(21),
    [anon_sym_parent_directory] = ACTIONS(21),
    [anon_sym_without_extension] = ACTIONS(21),
    [anon_sym_clean] = ACTIONS(21),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(21),
    [anon_sym_error] = ACTIONS(21),
    [anon_sym_blake3] = ACTIONS(21),
    [anon_sym_blake3_file] = ACTIONS(21),
    [anon_sym_sha256] = ACTIONS(21),
    [anon_sym_sha256_file] = ACTIONS(21),
    [anon_sym_uuid] = ACTIONS(17),
    [anon_sym_choose] = ACTIONS(23),
    [anon_sym_datetime] = ACTIONS(21),
    [anon_sym_datetime_utc] = ACTIONS(21),
    [anon_sym_semver_matches] = ACTIONS(23),
    [anon_sym_cache_dir] = ACTIONS(17),
    [anon_sym_cache_directory] = ACTIONS(17),
    [anon_sym_config_dir] = ACTIONS(17),
    [anon_sym_config_directory] = ACTIONS(17),
    [anon_sym_config_local_dir] = ACTIONS(17),
    [anon_sym_config_local_directory] = ACTIONS(17),
    [anon_sym_data_dir] = ACTIONS(17),
    [anon_sym_data_directory] = ACTIONS(17),
    [anon_sym_data_local_dir] = ACTIONS(17),
    [anon_sym_data_local_directory] = ACTIONS(17),
    [anon_sym_executable_dir] = ACTIONS(17),
    [anon_sym_executable_directory] = ACTIONS(17),
    [anon_sym_home_dir] = ACTIONS(17),
    [anon_sym_home_directory] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [8] = {
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
    [anon_sym_parent_dir] = ACTIONS(21),
    [anon_sym_parent_directory] = ACTIONS(21),
    [anon_sym_without_extension] = ACTIONS(21),
    [anon_sym_clean] = ACTIONS(21),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(21),
    [anon_sym_error] = ACTIONS(21),
    [anon_sym_blake3] = ACTIONS(21),
    [anon_sym_blake3_file] = ACTIONS(21),
    [anon_sym_sha256] = ACTIONS(21),
    [anon_sym_sha256_file] = ACTIONS(21),
    [anon_sym_uuid] = ACTIONS(17),
    [anon_sym_choose] = ACTIONS(23),
    [anon_sym_datetime] = ACTIONS(21),
    [anon_sym_datetime_utc] = ACTIONS(21),
    [anon_sym_semver_matches] = ACTIONS(23),
    [anon_sym_cache_dir] = ACTIONS(17),
    [anon_sym_cache_directory] = ACTIONS(17),
    [anon_sym_config_dir] = ACTIONS(17),
    [anon_sym_config_directory] = ACTIONS(17),
    [anon_sym_config_local_dir] = ACTIONS(17),
    [anon_sym_config_local_directory] = ACTIONS(17),
    [anon_sym_data_dir] = ACTIONS(17),
    [anon_sym_data_directory] = ACTIONS(17),
    [anon_sym_data_local_dir] = ACTIONS(17),
    [anon_sym_data_local_directory] = ACTIONS(17),
    [anon_sym_executable_dir] = ACTIONS(17),
    [anon_sym_executable_directory] = ACTIONS(17),
    [anon_sym_home_dir] = ACTIONS(17),
    [anon_sym_home_directory] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [9] = {
    [sym_expression] = STATE(113),
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
    [anon_sym_parent_dir] = ACTIONS(21),
    [anon_sym_parent_directory] = ACTIONS(21),
    [anon_sym_without_extension] = ACTIONS(21),
    [anon_sym_clean] = ACTIONS(21),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(21),
    [anon_sym_error] = ACTIONS(21),
    [anon_sym_blake3] = ACTIONS(21),
    [anon_sym_blake3_file] = ACTIONS(21),
    [anon_sym_sha256] = ACTIONS(21),
    [anon_sym_sha256_file] = ACTIONS(21),
    [anon_sym_uuid] = ACTIONS(17),
    [anon_sym_choose] = ACTIONS(23),
    [anon_sym_datetime] = ACTIONS(21),
    [anon_sym_datetime_utc] = ACTIONS(21),
    [anon_sym_semver_matches] = ACTIONS(23),
    [anon_sym_cache_dir] = ACTIONS(17),
    [anon_sym_cache_directory] = ACTIONS(17),
    [anon_sym_config_dir] = ACTIONS(17),
    [anon_sym_config_directory] = ACTIONS(17),
    [anon_sym_config_local_dir] = ACTIONS(17),
    [anon_sym_config_local_directory] = ACTIONS(17),
    [anon_sym_data_dir] = ACTIONS(17),
    [anon_sym_data_directory] = ACTIONS(17),
    [anon_sym_data_local_dir] = ACTIONS(17),
    [anon_sym_data_local_directory] = ACTIONS(17),
    [anon_sym_executable_dir] = ACTIONS(17),
    [anon_sym_executable_directory] = ACTIONS(17),
    [anon_sym_home_dir] = ACTIONS(17),
    [anon_sym_home_directory] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [10] = {
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
    [anon_sym_parent_dir] = ACTIONS(21),
    [anon_sym_parent_directory] = ACTIONS(21),
    [anon_sym_without_extension] = ACTIONS(21),
    [anon_sym_clean] = ACTIONS(21),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(21),
    [anon_sym_error] = ACTIONS(21),
    [anon_sym_blake3] = ACTIONS(21),
    [anon_sym_blake3_file] = ACTIONS(21),
    [anon_sym_sha256] = ACTIONS(21),
    [anon_sym_sha256_file] = ACTIONS(21),
    [anon_sym_uuid] = ACTIONS(17),
    [anon_sym_choose] = ACTIONS(23),
    [anon_sym_datetime] = ACTIONS(21),
    [anon_sym_datetime_utc] = ACTIONS(21),
    [anon_sym_semver_matches] = ACTIONS(23),
    [anon_sym_cache_dir] = ACTIONS(17),
    [anon_sym_cache_directory] = ACTIONS(17),
    [anon_sym_config_dir] = ACTIONS(17),
    [anon_sym_config_directory] = ACTIONS(17),
    [anon_sym_config_local_dir] = ACTIONS(17),
    [anon_sym_config_local_directory] = ACTIONS(17),
    [anon_sym_data_dir] = ACTIONS(17),
    [anon_sym_data_directory] = ACTIONS(17),
    [anon_sym_data_local_dir] = ACTIONS(17),
    [anon_sym_data_local_directory] = ACTIONS(17),
    [anon_sym_executable_dir] = ACTIONS(17),
    [anon_sym_executable_directory] = ACTIONS(17),
    [anon_sym_home_dir] = ACTIONS(17),
    [anon_sym_home_directory] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [11] = {
    [sym_expression] = STATE(47),
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
    [anon_sym_parent_dir] = ACTIONS(21),
    [anon_sym_parent_directory] = ACTIONS(21),
    [anon_sym_without_extension] = ACTIONS(21),
    [anon_sym_clean] = ACTIONS(21),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(21),
    [anon_sym_error] = ACTIONS(21),
    [anon_sym_blake3] = ACTIONS(21),
    [anon_sym_blake3_file] = ACTIONS(21),
    [anon_sym_sha256] = ACTIONS(21),
    [anon_sym_sha256_file] = ACTIONS(21),
    [anon_sym_uuid] = ACTIONS(17),
    [anon_sym_choose] = ACTIONS(23),
    [anon_sym_datetime] = ACTIONS(21),
    [anon_sym_datetime_utc] = ACTIONS(21),
    [anon_sym_semver_matches] = ACTIONS(23),
    [anon_sym_cache_dir] = ACTIONS(17),
    [anon_sym_cache_directory] = ACTIONS(17),
    [anon_sym_config_dir] = ACTIONS(17),
    [anon_sym_config_directory] = ACTIONS(17),
    [anon_sym_config_local_dir] = ACTIONS(17),
    [anon_sym_config_local_directory] = ACTIONS(17),
    [anon_sym_data_dir] = ACTIONS(17),
    [anon_sym_data_directory] = ACTIONS(17),
    [anon_sym_data_local_dir] = ACTIONS(17),
    [anon_sym_data_local_directory] = ACTIONS(17),
    [anon_sym_executable_dir] = ACTIONS(17),
    [anon_sym_executable_directory] = ACTIONS(17),
    [anon_sym_home_dir] = ACTIONS(17),
    [anon_sym_home_directory] = ACTIONS(17),
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
    [anon_sym_parent_dir] = ACTIONS(21),
    [anon_sym_parent_directory] = ACTIONS(21),
    [anon_sym_without_extension] = ACTIONS(21),
    [anon_sym_clean] = ACTIONS(21),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(21),
    [anon_sym_error] = ACTIONS(21),
    [anon_sym_blake3] = ACTIONS(21),
    [anon_sym_blake3_file] = ACTIONS(21),
    [anon_sym_sha256] = ACTIONS(21),
    [anon_sym_sha256_file] = ACTIONS(21),
    [anon_sym_uuid] = ACTIONS(17),
    [anon_sym_choose] = ACTIONS(23),
    [anon_sym_datetime] = ACTIONS(21),
    [anon_sym_datetime_utc] = ACTIONS(21),
    [anon_sym_semver_matches] = ACTIONS(23),
    [anon_sym_cache_dir] = ACTIONS(17),
    [anon_sym_cache_directory] = ACTIONS(17),
    [anon_sym_config_dir] = ACTIONS(17),
    [anon_sym_config_directory] = ACTIONS(17),
    [anon_sym_config_local_dir] = ACTIONS(17),
    [anon_sym_config_local_directory] = ACTIONS(17),
    [anon_sym_data_dir] = ACTIONS(17),
    [anon_sym_data_directory] = ACTIONS(17),
    [anon_sym_data_local_dir] = ACTIONS(17),
    [anon_sym_data_local_directory] = ACTIONS(17),
    [anon_sym_executable_dir] = ACTIONS(17),
    [anon_sym_executable_directory] = ACTIONS(17),
    [anon_sym_home_dir] = ACTIONS(17),
    [anon_sym_home_directory] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [13] = {
    [sym_expression] = STATE(106),
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
    [anon_sym_parent_dir] = ACTIONS(21),
    [anon_sym_parent_directory] = ACTIONS(21),
    [anon_sym_without_extension] = ACTIONS(21),
    [anon_sym_clean] = ACTIONS(21),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(21),
    [anon_sym_error] = ACTIONS(21),
    [anon_sym_blake3] = ACTIONS(21),
    [anon_sym_blake3_file] = ACTIONS(21),
    [anon_sym_sha256] = ACTIONS(21),
    [anon_sym_sha256_file] = ACTIONS(21),
    [anon_sym_uuid] = ACTIONS(17),
    [anon_sym_choose] = ACTIONS(23),
    [anon_sym_datetime] = ACTIONS(21),
    [anon_sym_datetime_utc] = ACTIONS(21),
    [anon_sym_semver_matches] = ACTIONS(23),
    [anon_sym_cache_dir] = ACTIONS(17),
    [anon_sym_cache_directory] = ACTIONS(17),
    [anon_sym_config_dir] = ACTIONS(17),
    [anon_sym_config_directory] = ACTIONS(17),
    [anon_sym_config_local_dir] = ACTIONS(17),
    [anon_sym_config_local_directory] = ACTIONS(17),
    [anon_sym_data_dir] = ACTIONS(17),
    [anon_sym_data_directory] = ACTIONS(17),
    [anon_sym_data_local_dir] = ACTIONS(17),
    [anon_sym_data_local_directory] = ACTIONS(17),
    [anon_sym_executable_dir] = ACTIONS(17),
    [anon_sym_executable_directory] = ACTIONS(17),
    [anon_sym_home_dir] = ACTIONS(17),
    [anon_sym_home_directory] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [14] = {
    [sym_expression] = STATE(93),
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
    [anon_sym_parent_dir] = ACTIONS(21),
    [anon_sym_parent_directory] = ACTIONS(21),
    [anon_sym_without_extension] = ACTIONS(21),
    [anon_sym_clean] = ACTIONS(21),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(21),
    [anon_sym_error] = ACTIONS(21),
    [anon_sym_blake3] = ACTIONS(21),
    [anon_sym_blake3_file] = ACTIONS(21),
    [anon_sym_sha256] = ACTIONS(21),
    [anon_sym_sha256_file] = ACTIONS(21),
    [anon_sym_uuid] = ACTIONS(17),
    [anon_sym_choose] = ACTIONS(23),
    [anon_sym_datetime] = ACTIONS(21),
    [anon_sym_datetime_utc] = ACTIONS(21),
    [anon_sym_semver_matches] = ACTIONS(23),
    [anon_sym_cache_dir] = ACTIONS(17),
    [anon_sym_cache_directory] = ACTIONS(17),
    [anon_sym_config_dir] = ACTIONS(17),
    [anon_sym_config_directory] = ACTIONS(17),
    [anon_sym_config_local_dir] = ACTIONS(17),
    [anon_sym_config_local_directory] = ACTIONS(17),
    [anon_sym_data_dir] = ACTIONS(17),
    [anon_sym_data_directory] = ACTIONS(17),
    [anon_sym_data_local_dir] = ACTIONS(17),
    [anon_sym_data_local_directory] = ACTIONS(17),
    [anon_sym_executable_dir] = ACTIONS(17),
    [anon_sym_executable_directory] = ACTIONS(17),
    [anon_sym_home_dir] = ACTIONS(17),
    [anon_sym_home_directory] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [15] = {
    [sym_expression] = STATE(110),
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
    [anon_sym_parent_dir] = ACTIONS(21),
    [anon_sym_parent_directory] = ACTIONS(21),
    [anon_sym_without_extension] = ACTIONS(21),
    [anon_sym_clean] = ACTIONS(21),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(21),
    [anon_sym_error] = ACTIONS(21),
    [anon_sym_blake3] = ACTIONS(21),
    [anon_sym_blake3_file] = ACTIONS(21),
    [anon_sym_sha256] = ACTIONS(21),
    [anon_sym_sha256_file] = ACTIONS(21),
    [anon_sym_uuid] = ACTIONS(17),
    [anon_sym_choose] = ACTIONS(23),
    [anon_sym_datetime] = ACTIONS(21),
    [anon_sym_datetime_utc] = ACTIONS(21),
    [anon_sym_semver_matches] = ACTIONS(23),
    [anon_sym_cache_dir] = ACTIONS(17),
    [anon_sym_cache_directory] = ACTIONS(17),
    [anon_sym_config_dir] = ACTIONS(17),
    [anon_sym_config_directory] = ACTIONS(17),
    [anon_sym_config_local_dir] = ACTIONS(17),
    [anon_sym_config_local_directory] = ACTIONS(17),
    [anon_sym_data_dir] = ACTIONS(17),
    [anon_sym_data_directory] = ACTIONS(17),
    [anon_sym_data_local_dir] = ACTIONS(17),
    [anon_sym_data_local_directory] = ACTIONS(17),
    [anon_sym_executable_dir] = ACTIONS(17),
    [anon_sym_executable_directory] = ACTIONS(17),
    [anon_sym_home_dir] = ACTIONS(17),
    [anon_sym_home_directory] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [16] = {
    [sym_expression] = STATE(94),
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
    [anon_sym_parent_dir] = ACTIONS(21),
    [anon_sym_parent_directory] = ACTIONS(21),
    [anon_sym_without_extension] = ACTIONS(21),
    [anon_sym_clean] = ACTIONS(21),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(21),
    [anon_sym_error] = ACTIONS(21),
    [anon_sym_blake3] = ACTIONS(21),
    [anon_sym_blake3_file] = ACTIONS(21),
    [anon_sym_sha256] = ACTIONS(21),
    [anon_sym_sha256_file] = ACTIONS(21),
    [anon_sym_uuid] = ACTIONS(17),
    [anon_sym_choose] = ACTIONS(23),
    [anon_sym_datetime] = ACTIONS(21),
    [anon_sym_datetime_utc] = ACTIONS(21),
    [anon_sym_semver_matches] = ACTIONS(23),
    [anon_sym_cache_dir] = ACTIONS(17),
    [anon_sym_cache_directory] = ACTIONS(17),
    [anon_sym_config_dir] = ACTIONS(17),
    [anon_sym_config_directory] = ACTIONS(17),
    [anon_sym_config_local_dir] = ACTIONS(17),
    [anon_sym_config_local_directory] = ACTIONS(17),
    [anon_sym_data_dir] = ACTIONS(17),
    [anon_sym_data_directory] = ACTIONS(17),
    [anon_sym_data_local_dir] = ACTIONS(17),
    [anon_sym_data_local_directory] = ACTIONS(17),
    [anon_sym_executable_dir] = ACTIONS(17),
    [anon_sym_executable_directory] = ACTIONS(17),
    [anon_sym_home_dir] = ACTIONS(17),
    [anon_sym_home_directory] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [17] = {
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
    [anon_sym_parent_dir] = ACTIONS(21),
    [anon_sym_parent_directory] = ACTIONS(21),
    [anon_sym_without_extension] = ACTIONS(21),
    [anon_sym_clean] = ACTIONS(21),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(21),
    [anon_sym_error] = ACTIONS(21),
    [anon_sym_blake3] = ACTIONS(21),
    [anon_sym_blake3_file] = ACTIONS(21),
    [anon_sym_sha256] = ACTIONS(21),
    [anon_sym_sha256_file] = ACTIONS(21),
    [anon_sym_uuid] = ACTIONS(17),
    [anon_sym_choose] = ACTIONS(23),
    [anon_sym_datetime] = ACTIONS(21),
    [anon_sym_datetime_utc] = ACTIONS(21),
    [anon_sym_semver_matches] = ACTIONS(23),
    [anon_sym_cache_dir] = ACTIONS(17),
    [anon_sym_cache_directory] = ACTIONS(17),
    [anon_sym_config_dir] = ACTIONS(17),
    [anon_sym_config_directory] = ACTIONS(17),
    [anon_sym_config_local_dir] = ACTIONS(17),
    [anon_sym_config_local_directory] = ACTIONS(17),
    [anon_sym_data_dir] = ACTIONS(17),
    [anon_sym_data_directory] = ACTIONS(17),
    [anon_sym_data_local_dir] = ACTIONS(17),
    [anon_sym_data_local_directory] = ACTIONS(17),
    [anon_sym_executable_dir] = ACTIONS(17),
    [anon_sym_executable_directory] = ACTIONS(17),
    [anon_sym_home_dir] = ACTIONS(17),
    [anon_sym_home_directory] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [18] = {
    [sym_expression] = STATE(126),
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
    [sym_comment] = STATE(18),
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
    [anon_sym_parent_dir] = ACTIONS(21),
    [anon_sym_parent_directory] = ACTIONS(21),
    [anon_sym_without_extension] = ACTIONS(21),
    [anon_sym_clean] = ACTIONS(21),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_path_exists] = ACTIONS(21),
    [anon_sym_error] = ACTIONS(21),
    [anon_sym_blake3] = ACTIONS(21),
    [anon_sym_blake3_file] = ACTIONS(21),
    [anon_sym_sha256] = ACTIONS(21),
    [anon_sym_sha256_file] = ACTIONS(21),
    [anon_sym_uuid] = ACTIONS(17),
    [anon_sym_choose] = ACTIONS(23),
    [anon_sym_datetime] = ACTIONS(21),
    [anon_sym_datetime_utc] = ACTIONS(21),
    [anon_sym_semver_matches] = ACTIONS(23),
    [anon_sym_cache_dir] = ACTIONS(17),
    [anon_sym_cache_directory] = ACTIONS(17),
    [anon_sym_config_dir] = ACTIONS(17),
    [anon_sym_config_directory] = ACTIONS(17),
    [anon_sym_config_local_dir] = ACTIONS(17),
    [anon_sym_config_local_directory] = ACTIONS(17),
    [anon_sym_data_dir] = ACTIONS(17),
    [anon_sym_data_directory] = ACTIONS(17),
    [anon_sym_data_local_dir] = ACTIONS(17),
    [anon_sym_data_local_directory] = ACTIONS(17),
    [anon_sym_executable_dir] = ACTIONS(17),
    [anon_sym_executable_directory] = ACTIONS(17),
    [anon_sym_home_dir] = ACTIONS(17),
    [anon_sym_home_directory] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [19] = {
    [sym_comment] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(109),
    [sym_identifier] = ACTIONS(111),
    [anon_sym_alias] = ACTIONS(111),
    [aux_sym_import_token1] = ACTIONS(111),
    [aux_sym_mod_token1] = ACTIONS(111),
    [anon_sym_SLASH] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym_RPAREN] = ACTIONS(109),
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
    [anon_sym_parent_dir] = ACTIONS(111),
    [anon_sym_parent_directory] = ACTIONS(111),
    [anon_sym_without_extension] = ACTIONS(111),
    [anon_sym_clean] = ACTIONS(111),
    [anon_sym_join] = ACTIONS(111),
    [anon_sym_path_exists] = ACTIONS(111),
    [anon_sym_error] = ACTIONS(111),
    [anon_sym_blake3] = ACTIONS(111),
    [anon_sym_blake3_file] = ACTIONS(111),
    [anon_sym_sha256] = ACTIONS(111),
    [anon_sym_sha256_file] = ACTIONS(111),
    [anon_sym_uuid] = ACTIONS(111),
    [anon_sym_choose] = ACTIONS(111),
    [anon_sym_datetime] = ACTIONS(111),
    [anon_sym_datetime_utc] = ACTIONS(111),
    [anon_sym_semver_matches] = ACTIONS(111),
    [anon_sym_cache_dir] = ACTIONS(111),
    [anon_sym_cache_directory] = ACTIONS(111),
    [anon_sym_config_dir] = ACTIONS(111),
    [anon_sym_config_directory] = ACTIONS(111),
    [anon_sym_config_local_dir] = ACTIONS(111),
    [anon_sym_config_local_directory] = ACTIONS(111),
    [anon_sym_data_dir] = ACTIONS(111),
    [anon_sym_data_directory] = ACTIONS(111),
    [anon_sym_data_local_dir] = ACTIONS(111),
    [anon_sym_data_local_directory] = ACTIONS(111),
    [anon_sym_executable_dir] = ACTIONS(111),
    [anon_sym_executable_directory] = ACTIONS(111),
    [anon_sym_home_dir] = ACTIONS(111),
    [anon_sym_home_directory] = ACTIONS(111),
    [anon_sym_COMMA] = ACTIONS(109),
    [anon_sym_set] = ACTIONS(111),
    [anon_sym_RBRACK] = ACTIONS(109),
    [anon_sym_BQUOTE] = ACTIONS(111),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(109),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(109),
    [anon_sym_DQUOTE] = ACTIONS(111),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(109),
    [anon_sym_SQUOTE] = ACTIONS(111),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [20] = {
    [sym_comment] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(113),
    [sym_identifier] = ACTIONS(115),
    [anon_sym_alias] = ACTIONS(115),
    [aux_sym_import_token1] = ACTIONS(115),
    [aux_sym_mod_token1] = ACTIONS(115),
    [anon_sym_SLASH] = ACTIONS(113),
    [anon_sym_PLUS] = ACTIONS(113),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_RPAREN] = ACTIONS(113),
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
    [anon_sym_parent_dir] = ACTIONS(115),
    [anon_sym_parent_directory] = ACTIONS(115),
    [anon_sym_without_extension] = ACTIONS(115),
    [anon_sym_clean] = ACTIONS(115),
    [anon_sym_join] = ACTIONS(115),
    [anon_sym_path_exists] = ACTIONS(115),
    [anon_sym_error] = ACTIONS(115),
    [anon_sym_blake3] = ACTIONS(115),
    [anon_sym_blake3_file] = ACTIONS(115),
    [anon_sym_sha256] = ACTIONS(115),
    [anon_sym_sha256_file] = ACTIONS(115),
    [anon_sym_uuid] = ACTIONS(115),
    [anon_sym_choose] = ACTIONS(115),
    [anon_sym_datetime] = ACTIONS(115),
    [anon_sym_datetime_utc] = ACTIONS(115),
    [anon_sym_semver_matches] = ACTIONS(115),
    [anon_sym_cache_dir] = ACTIONS(115),
    [anon_sym_cache_directory] = ACTIONS(115),
    [anon_sym_config_dir] = ACTIONS(115),
    [anon_sym_config_directory] = ACTIONS(115),
    [anon_sym_config_local_dir] = ACTIONS(115),
    [anon_sym_config_local_directory] = ACTIONS(115),
    [anon_sym_data_dir] = ACTIONS(115),
    [anon_sym_data_directory] = ACTIONS(115),
    [anon_sym_data_local_dir] = ACTIONS(115),
    [anon_sym_data_local_directory] = ACTIONS(115),
    [anon_sym_executable_dir] = ACTIONS(115),
    [anon_sym_executable_directory] = ACTIONS(115),
    [anon_sym_home_dir] = ACTIONS(115),
    [anon_sym_home_directory] = ACTIONS(115),
    [anon_sym_COMMA] = ACTIONS(113),
    [anon_sym_set] = ACTIONS(115),
    [anon_sym_RBRACK] = ACTIONS(113),
    [anon_sym_BQUOTE] = ACTIONS(115),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(113),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(113),
    [anon_sym_SQUOTE] = ACTIONS(115),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [21] = {
    [sym_comment] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(117),
    [sym_identifier] = ACTIONS(119),
    [anon_sym_alias] = ACTIONS(119),
    [aux_sym_import_token1] = ACTIONS(119),
    [aux_sym_mod_token1] = ACTIONS(119),
    [anon_sym_SLASH] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(117),
    [anon_sym_LPAREN] = ACTIONS(117),
    [anon_sym_RPAREN] = ACTIONS(117),
    [anon_sym_arch] = ACTIONS(119),
    [anon_sym_num_cpus] = ACTIONS(119),
    [anon_sym_os] = ACTIONS(119),
    [anon_sym_os_family] = ACTIONS(119),
    [anon_sym_shell] = ACTIONS(119),
    [anon_sym_env_var] = ACTIONS(119),
    [anon_sym_env_var_or_default] = ACTIONS(119),
    [anon_sym_env] = ACTIONS(119),
    [anon_sym_is_dependency] = ACTIONS(119),
    [anon_sym_invocation_dir] = ACTIONS(119),
    [anon_sym_invocation_dir_native] = ACTIONS(119),
    [anon_sym_invocation_directory] = ACTIONS(119),
    [anon_sym_invocation_directory_native] = ACTIONS(119),
    [anon_sym_justfile] = ACTIONS(119),
    [anon_sym_justfile_dir] = ACTIONS(119),
    [anon_sym_justfile_directory] = ACTIONS(119),
    [anon_sym_source_dir] = ACTIONS(119),
    [anon_sym_source_directory] = ACTIONS(119),
    [anon_sym_source_file] = ACTIONS(119),
    [anon_sym_just_executable] = ACTIONS(119),
    [anon_sym_just_pid] = ACTIONS(119),
    [anon_sym_append] = ACTIONS(119),
    [anon_sym_prepend] = ACTIONS(119),
    [anon_sym_encode_uri_component] = ACTIONS(119),
    [anon_sym_quote] = ACTIONS(119),
    [anon_sym_replace] = ACTIONS(119),
    [anon_sym_replace_regex] = ACTIONS(119),
    [anon_sym_trim] = ACTIONS(119),
    [anon_sym_trim_end] = ACTIONS(119),
    [anon_sym_trim_end_match] = ACTIONS(119),
    [anon_sym_trim_end_matches] = ACTIONS(119),
    [anon_sym_trim_start] = ACTIONS(119),
    [anon_sym_trim_start_match] = ACTIONS(119),
    [anon_sym_trim_start_matches] = ACTIONS(119),
    [anon_sym_capitalize] = ACTIONS(119),
    [anon_sym_kebabcase] = ACTIONS(119),
    [anon_sym_lowercamelcase] = ACTIONS(119),
    [anon_sym_lowercase] = ACTIONS(119),
    [anon_sym_shoutykebabcase] = ACTIONS(119),
    [anon_sym_shoutysnakecase] = ACTIONS(119),
    [anon_sym_snakecase] = ACTIONS(119),
    [anon_sym_titlecase] = ACTIONS(119),
    [anon_sym_uppercamelcase] = ACTIONS(119),
    [anon_sym_uppercase] = ACTIONS(119),
    [anon_sym_absolute_path] = ACTIONS(119),
    [anon_sym_canonicalize] = ACTIONS(119),
    [anon_sym_extension] = ACTIONS(119),
    [anon_sym_file_name] = ACTIONS(119),
    [anon_sym_file_stem] = ACTIONS(119),
    [anon_sym_parent_dir] = ACTIONS(119),
    [anon_sym_parent_directory] = ACTIONS(119),
    [anon_sym_without_extension] = ACTIONS(119),
    [anon_sym_clean] = ACTIONS(119),
    [anon_sym_join] = ACTIONS(119),
    [anon_sym_path_exists] = ACTIONS(119),
    [anon_sym_error] = ACTIONS(119),
    [anon_sym_blake3] = ACTIONS(119),
    [anon_sym_blake3_file] = ACTIONS(119),
    [anon_sym_sha256] = ACTIONS(119),
    [anon_sym_sha256_file] = ACTIONS(119),
    [anon_sym_uuid] = ACTIONS(119),
    [anon_sym_choose] = ACTIONS(119),
    [anon_sym_datetime] = ACTIONS(119),
    [anon_sym_datetime_utc] = ACTIONS(119),
    [anon_sym_semver_matches] = ACTIONS(119),
    [anon_sym_cache_dir] = ACTIONS(119),
    [anon_sym_cache_directory] = ACTIONS(119),
    [anon_sym_config_dir] = ACTIONS(119),
    [anon_sym_config_directory] = ACTIONS(119),
    [anon_sym_config_local_dir] = ACTIONS(119),
    [anon_sym_config_local_directory] = ACTIONS(119),
    [anon_sym_data_dir] = ACTIONS(119),
    [anon_sym_data_directory] = ACTIONS(119),
    [anon_sym_data_local_dir] = ACTIONS(119),
    [anon_sym_data_local_directory] = ACTIONS(119),
    [anon_sym_executable_dir] = ACTIONS(119),
    [anon_sym_executable_directory] = ACTIONS(119),
    [anon_sym_home_dir] = ACTIONS(119),
    [anon_sym_home_directory] = ACTIONS(119),
    [anon_sym_COMMA] = ACTIONS(117),
    [anon_sym_set] = ACTIONS(119),
    [anon_sym_RBRACK] = ACTIONS(117),
    [anon_sym_BQUOTE] = ACTIONS(119),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(117),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(117),
    [anon_sym_SQUOTE] = ACTIONS(119),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [22] = {
    [sym_comment] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(121),
    [sym_identifier] = ACTIONS(123),
    [anon_sym_alias] = ACTIONS(123),
    [aux_sym_import_token1] = ACTIONS(123),
    [aux_sym_mod_token1] = ACTIONS(123),
    [anon_sym_SLASH] = ACTIONS(121),
    [anon_sym_PLUS] = ACTIONS(121),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_RPAREN] = ACTIONS(121),
    [anon_sym_arch] = ACTIONS(123),
    [anon_sym_num_cpus] = ACTIONS(123),
    [anon_sym_os] = ACTIONS(123),
    [anon_sym_os_family] = ACTIONS(123),
    [anon_sym_shell] = ACTIONS(123),
    [anon_sym_env_var] = ACTIONS(123),
    [anon_sym_env_var_or_default] = ACTIONS(123),
    [anon_sym_env] = ACTIONS(123),
    [anon_sym_is_dependency] = ACTIONS(123),
    [anon_sym_invocation_dir] = ACTIONS(123),
    [anon_sym_invocation_dir_native] = ACTIONS(123),
    [anon_sym_invocation_directory] = ACTIONS(123),
    [anon_sym_invocation_directory_native] = ACTIONS(123),
    [anon_sym_justfile] = ACTIONS(123),
    [anon_sym_justfile_dir] = ACTIONS(123),
    [anon_sym_justfile_directory] = ACTIONS(123),
    [anon_sym_source_dir] = ACTIONS(123),
    [anon_sym_source_directory] = ACTIONS(123),
    [anon_sym_source_file] = ACTIONS(123),
    [anon_sym_just_executable] = ACTIONS(123),
    [anon_sym_just_pid] = ACTIONS(123),
    [anon_sym_append] = ACTIONS(123),
    [anon_sym_prepend] = ACTIONS(123),
    [anon_sym_encode_uri_component] = ACTIONS(123),
    [anon_sym_quote] = ACTIONS(123),
    [anon_sym_replace] = ACTIONS(123),
    [anon_sym_replace_regex] = ACTIONS(123),
    [anon_sym_trim] = ACTIONS(123),
    [anon_sym_trim_end] = ACTIONS(123),
    [anon_sym_trim_end_match] = ACTIONS(123),
    [anon_sym_trim_end_matches] = ACTIONS(123),
    [anon_sym_trim_start] = ACTIONS(123),
    [anon_sym_trim_start_match] = ACTIONS(123),
    [anon_sym_trim_start_matches] = ACTIONS(123),
    [anon_sym_capitalize] = ACTIONS(123),
    [anon_sym_kebabcase] = ACTIONS(123),
    [anon_sym_lowercamelcase] = ACTIONS(123),
    [anon_sym_lowercase] = ACTIONS(123),
    [anon_sym_shoutykebabcase] = ACTIONS(123),
    [anon_sym_shoutysnakecase] = ACTIONS(123),
    [anon_sym_snakecase] = ACTIONS(123),
    [anon_sym_titlecase] = ACTIONS(123),
    [anon_sym_uppercamelcase] = ACTIONS(123),
    [anon_sym_uppercase] = ACTIONS(123),
    [anon_sym_absolute_path] = ACTIONS(123),
    [anon_sym_canonicalize] = ACTIONS(123),
    [anon_sym_extension] = ACTIONS(123),
    [anon_sym_file_name] = ACTIONS(123),
    [anon_sym_file_stem] = ACTIONS(123),
    [anon_sym_parent_dir] = ACTIONS(123),
    [anon_sym_parent_directory] = ACTIONS(123),
    [anon_sym_without_extension] = ACTIONS(123),
    [anon_sym_clean] = ACTIONS(123),
    [anon_sym_join] = ACTIONS(123),
    [anon_sym_path_exists] = ACTIONS(123),
    [anon_sym_error] = ACTIONS(123),
    [anon_sym_blake3] = ACTIONS(123),
    [anon_sym_blake3_file] = ACTIONS(123),
    [anon_sym_sha256] = ACTIONS(123),
    [anon_sym_sha256_file] = ACTIONS(123),
    [anon_sym_uuid] = ACTIONS(123),
    [anon_sym_choose] = ACTIONS(123),
    [anon_sym_datetime] = ACTIONS(123),
    [anon_sym_datetime_utc] = ACTIONS(123),
    [anon_sym_semver_matches] = ACTIONS(123),
    [anon_sym_cache_dir] = ACTIONS(123),
    [anon_sym_cache_directory] = ACTIONS(123),
    [anon_sym_config_dir] = ACTIONS(123),
    [anon_sym_config_directory] = ACTIONS(123),
    [anon_sym_config_local_dir] = ACTIONS(123),
    [anon_sym_config_local_directory] = ACTIONS(123),
    [anon_sym_data_dir] = ACTIONS(123),
    [anon_sym_data_directory] = ACTIONS(123),
    [anon_sym_data_local_dir] = ACTIONS(123),
    [anon_sym_data_local_directory] = ACTIONS(123),
    [anon_sym_executable_dir] = ACTIONS(123),
    [anon_sym_executable_directory] = ACTIONS(123),
    [anon_sym_home_dir] = ACTIONS(123),
    [anon_sym_home_directory] = ACTIONS(123),
    [anon_sym_COMMA] = ACTIONS(121),
    [anon_sym_set] = ACTIONS(123),
    [anon_sym_RBRACK] = ACTIONS(121),
    [anon_sym_BQUOTE] = ACTIONS(123),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(121),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(121),
    [anon_sym_DQUOTE] = ACTIONS(123),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(121),
    [anon_sym_SQUOTE] = ACTIONS(123),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [23] = {
    [sym_string] = STATE(59),
    [sym_indented_normal_string] = STATE(27),
    [sym_normal_string] = STATE(27),
    [sym_indented_raw_string] = STATE(27),
    [sym_raw_string] = STATE(27),
    [sym_comment] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(125),
    [sym_identifier] = ACTIONS(127),
    [anon_sym_alias] = ACTIONS(127),
    [aux_sym_import_token1] = ACTIONS(127),
    [aux_sym_mod_token1] = ACTIONS(127),
    [anon_sym_LPAREN] = ACTIONS(125),
    [anon_sym_arch] = ACTIONS(127),
    [anon_sym_num_cpus] = ACTIONS(127),
    [anon_sym_os] = ACTIONS(127),
    [anon_sym_os_family] = ACTIONS(127),
    [anon_sym_shell] = ACTIONS(127),
    [anon_sym_env_var] = ACTIONS(127),
    [anon_sym_env_var_or_default] = ACTIONS(127),
    [anon_sym_env] = ACTIONS(127),
    [anon_sym_is_dependency] = ACTIONS(127),
    [anon_sym_invocation_dir] = ACTIONS(127),
    [anon_sym_invocation_dir_native] = ACTIONS(127),
    [anon_sym_invocation_directory] = ACTIONS(127),
    [anon_sym_invocation_directory_native] = ACTIONS(127),
    [anon_sym_justfile] = ACTIONS(127),
    [anon_sym_justfile_dir] = ACTIONS(127),
    [anon_sym_justfile_directory] = ACTIONS(127),
    [anon_sym_source_dir] = ACTIONS(127),
    [anon_sym_source_directory] = ACTIONS(127),
    [anon_sym_source_file] = ACTIONS(127),
    [anon_sym_just_executable] = ACTIONS(127),
    [anon_sym_just_pid] = ACTIONS(127),
    [anon_sym_append] = ACTIONS(127),
    [anon_sym_prepend] = ACTIONS(127),
    [anon_sym_encode_uri_component] = ACTIONS(127),
    [anon_sym_quote] = ACTIONS(127),
    [anon_sym_replace] = ACTIONS(127),
    [anon_sym_replace_regex] = ACTIONS(127),
    [anon_sym_trim] = ACTIONS(127),
    [anon_sym_trim_end] = ACTIONS(127),
    [anon_sym_trim_end_match] = ACTIONS(127),
    [anon_sym_trim_end_matches] = ACTIONS(127),
    [anon_sym_trim_start] = ACTIONS(127),
    [anon_sym_trim_start_match] = ACTIONS(127),
    [anon_sym_trim_start_matches] = ACTIONS(127),
    [anon_sym_capitalize] = ACTIONS(127),
    [anon_sym_kebabcase] = ACTIONS(127),
    [anon_sym_lowercamelcase] = ACTIONS(127),
    [anon_sym_lowercase] = ACTIONS(127),
    [anon_sym_shoutykebabcase] = ACTIONS(127),
    [anon_sym_shoutysnakecase] = ACTIONS(127),
    [anon_sym_snakecase] = ACTIONS(127),
    [anon_sym_titlecase] = ACTIONS(127),
    [anon_sym_uppercamelcase] = ACTIONS(127),
    [anon_sym_uppercase] = ACTIONS(127),
    [anon_sym_absolute_path] = ACTIONS(127),
    [anon_sym_canonicalize] = ACTIONS(127),
    [anon_sym_extension] = ACTIONS(127),
    [anon_sym_file_name] = ACTIONS(127),
    [anon_sym_file_stem] = ACTIONS(127),
    [anon_sym_parent_dir] = ACTIONS(127),
    [anon_sym_parent_directory] = ACTIONS(127),
    [anon_sym_without_extension] = ACTIONS(127),
    [anon_sym_clean] = ACTIONS(127),
    [anon_sym_join] = ACTIONS(127),
    [anon_sym_path_exists] = ACTIONS(127),
    [anon_sym_error] = ACTIONS(127),
    [anon_sym_blake3] = ACTIONS(127),
    [anon_sym_blake3_file] = ACTIONS(127),
    [anon_sym_sha256] = ACTIONS(127),
    [anon_sym_sha256_file] = ACTIONS(127),
    [anon_sym_uuid] = ACTIONS(127),
    [anon_sym_choose] = ACTIONS(127),
    [anon_sym_datetime] = ACTIONS(127),
    [anon_sym_datetime_utc] = ACTIONS(127),
    [anon_sym_semver_matches] = ACTIONS(127),
    [anon_sym_cache_dir] = ACTIONS(127),
    [anon_sym_cache_directory] = ACTIONS(127),
    [anon_sym_config_dir] = ACTIONS(127),
    [anon_sym_config_directory] = ACTIONS(127),
    [anon_sym_config_local_dir] = ACTIONS(127),
    [anon_sym_config_local_directory] = ACTIONS(127),
    [anon_sym_data_dir] = ACTIONS(127),
    [anon_sym_data_directory] = ACTIONS(127),
    [anon_sym_data_local_dir] = ACTIONS(127),
    [anon_sym_data_local_directory] = ACTIONS(127),
    [anon_sym_executable_dir] = ACTIONS(127),
    [anon_sym_executable_directory] = ACTIONS(127),
    [anon_sym_home_dir] = ACTIONS(127),
    [anon_sym_home_directory] = ACTIONS(127),
    [anon_sym_set] = ACTIONS(127),
    [anon_sym_BQUOTE] = ACTIONS(127),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(125),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [24] = {
    [sym_comment] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(129),
    [sym_identifier] = ACTIONS(131),
    [anon_sym_alias] = ACTIONS(131),
    [aux_sym_import_token1] = ACTIONS(131),
    [aux_sym_mod_token1] = ACTIONS(131),
    [anon_sym_SLASH] = ACTIONS(129),
    [anon_sym_PLUS] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(129),
    [anon_sym_RPAREN] = ACTIONS(129),
    [anon_sym_arch] = ACTIONS(131),
    [anon_sym_num_cpus] = ACTIONS(131),
    [anon_sym_os] = ACTIONS(131),
    [anon_sym_os_family] = ACTIONS(131),
    [anon_sym_shell] = ACTIONS(131),
    [anon_sym_env_var] = ACTIONS(131),
    [anon_sym_env_var_or_default] = ACTIONS(131),
    [anon_sym_env] = ACTIONS(131),
    [anon_sym_is_dependency] = ACTIONS(131),
    [anon_sym_invocation_dir] = ACTIONS(131),
    [anon_sym_invocation_dir_native] = ACTIONS(131),
    [anon_sym_invocation_directory] = ACTIONS(131),
    [anon_sym_invocation_directory_native] = ACTIONS(131),
    [anon_sym_justfile] = ACTIONS(131),
    [anon_sym_justfile_dir] = ACTIONS(131),
    [anon_sym_justfile_directory] = ACTIONS(131),
    [anon_sym_source_dir] = ACTIONS(131),
    [anon_sym_source_directory] = ACTIONS(131),
    [anon_sym_source_file] = ACTIONS(131),
    [anon_sym_just_executable] = ACTIONS(131),
    [anon_sym_just_pid] = ACTIONS(131),
    [anon_sym_append] = ACTIONS(131),
    [anon_sym_prepend] = ACTIONS(131),
    [anon_sym_encode_uri_component] = ACTIONS(131),
    [anon_sym_quote] = ACTIONS(131),
    [anon_sym_replace] = ACTIONS(131),
    [anon_sym_replace_regex] = ACTIONS(131),
    [anon_sym_trim] = ACTIONS(131),
    [anon_sym_trim_end] = ACTIONS(131),
    [anon_sym_trim_end_match] = ACTIONS(131),
    [anon_sym_trim_end_matches] = ACTIONS(131),
    [anon_sym_trim_start] = ACTIONS(131),
    [anon_sym_trim_start_match] = ACTIONS(131),
    [anon_sym_trim_start_matches] = ACTIONS(131),
    [anon_sym_capitalize] = ACTIONS(131),
    [anon_sym_kebabcase] = ACTIONS(131),
    [anon_sym_lowercamelcase] = ACTIONS(131),
    [anon_sym_lowercase] = ACTIONS(131),
    [anon_sym_shoutykebabcase] = ACTIONS(131),
    [anon_sym_shoutysnakecase] = ACTIONS(131),
    [anon_sym_snakecase] = ACTIONS(131),
    [anon_sym_titlecase] = ACTIONS(131),
    [anon_sym_uppercamelcase] = ACTIONS(131),
    [anon_sym_uppercase] = ACTIONS(131),
    [anon_sym_absolute_path] = ACTIONS(131),
    [anon_sym_canonicalize] = ACTIONS(131),
    [anon_sym_extension] = ACTIONS(131),
    [anon_sym_file_name] = ACTIONS(131),
    [anon_sym_file_stem] = ACTIONS(131),
    [anon_sym_parent_dir] = ACTIONS(131),
    [anon_sym_parent_directory] = ACTIONS(131),
    [anon_sym_without_extension] = ACTIONS(131),
    [anon_sym_clean] = ACTIONS(131),
    [anon_sym_join] = ACTIONS(131),
    [anon_sym_path_exists] = ACTIONS(131),
    [anon_sym_error] = ACTIONS(131),
    [anon_sym_blake3] = ACTIONS(131),
    [anon_sym_blake3_file] = ACTIONS(131),
    [anon_sym_sha256] = ACTIONS(131),
    [anon_sym_sha256_file] = ACTIONS(131),
    [anon_sym_uuid] = ACTIONS(131),
    [anon_sym_choose] = ACTIONS(131),
    [anon_sym_datetime] = ACTIONS(131),
    [anon_sym_datetime_utc] = ACTIONS(131),
    [anon_sym_semver_matches] = ACTIONS(131),
    [anon_sym_cache_dir] = ACTIONS(131),
    [anon_sym_cache_directory] = ACTIONS(131),
    [anon_sym_config_dir] = ACTIONS(131),
    [anon_sym_config_directory] = ACTIONS(131),
    [anon_sym_config_local_dir] = ACTIONS(131),
    [anon_sym_config_local_directory] = ACTIONS(131),
    [anon_sym_data_dir] = ACTIONS(131),
    [anon_sym_data_directory] = ACTIONS(131),
    [anon_sym_data_local_dir] = ACTIONS(131),
    [anon_sym_data_local_directory] = ACTIONS(131),
    [anon_sym_executable_dir] = ACTIONS(131),
    [anon_sym_executable_directory] = ACTIONS(131),
    [anon_sym_home_dir] = ACTIONS(131),
    [anon_sym_home_directory] = ACTIONS(131),
    [anon_sym_COMMA] = ACTIONS(129),
    [anon_sym_set] = ACTIONS(131),
    [anon_sym_RBRACK] = ACTIONS(129),
    [anon_sym_BQUOTE] = ACTIONS(131),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(129),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(129),
    [anon_sym_DQUOTE] = ACTIONS(131),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(129),
    [anon_sym_SQUOTE] = ACTIONS(131),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [25] = {
    [sym_comment] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(133),
    [sym_identifier] = ACTIONS(135),
    [anon_sym_alias] = ACTIONS(135),
    [aux_sym_import_token1] = ACTIONS(135),
    [aux_sym_mod_token1] = ACTIONS(135),
    [anon_sym_SLASH] = ACTIONS(133),
    [anon_sym_PLUS] = ACTIONS(133),
    [anon_sym_LPAREN] = ACTIONS(133),
    [anon_sym_RPAREN] = ACTIONS(133),
    [anon_sym_arch] = ACTIONS(135),
    [anon_sym_num_cpus] = ACTIONS(135),
    [anon_sym_os] = ACTIONS(135),
    [anon_sym_os_family] = ACTIONS(135),
    [anon_sym_shell] = ACTIONS(135),
    [anon_sym_env_var] = ACTIONS(135),
    [anon_sym_env_var_or_default] = ACTIONS(135),
    [anon_sym_env] = ACTIONS(135),
    [anon_sym_is_dependency] = ACTIONS(135),
    [anon_sym_invocation_dir] = ACTIONS(135),
    [anon_sym_invocation_dir_native] = ACTIONS(135),
    [anon_sym_invocation_directory] = ACTIONS(135),
    [anon_sym_invocation_directory_native] = ACTIONS(135),
    [anon_sym_justfile] = ACTIONS(135),
    [anon_sym_justfile_dir] = ACTIONS(135),
    [anon_sym_justfile_directory] = ACTIONS(135),
    [anon_sym_source_dir] = ACTIONS(135),
    [anon_sym_source_directory] = ACTIONS(135),
    [anon_sym_source_file] = ACTIONS(135),
    [anon_sym_just_executable] = ACTIONS(135),
    [anon_sym_just_pid] = ACTIONS(135),
    [anon_sym_append] = ACTIONS(135),
    [anon_sym_prepend] = ACTIONS(135),
    [anon_sym_encode_uri_component] = ACTIONS(135),
    [anon_sym_quote] = ACTIONS(135),
    [anon_sym_replace] = ACTIONS(135),
    [anon_sym_replace_regex] = ACTIONS(135),
    [anon_sym_trim] = ACTIONS(135),
    [anon_sym_trim_end] = ACTIONS(135),
    [anon_sym_trim_end_match] = ACTIONS(135),
    [anon_sym_trim_end_matches] = ACTIONS(135),
    [anon_sym_trim_start] = ACTIONS(135),
    [anon_sym_trim_start_match] = ACTIONS(135),
    [anon_sym_trim_start_matches] = ACTIONS(135),
    [anon_sym_capitalize] = ACTIONS(135),
    [anon_sym_kebabcase] = ACTIONS(135),
    [anon_sym_lowercamelcase] = ACTIONS(135),
    [anon_sym_lowercase] = ACTIONS(135),
    [anon_sym_shoutykebabcase] = ACTIONS(135),
    [anon_sym_shoutysnakecase] = ACTIONS(135),
    [anon_sym_snakecase] = ACTIONS(135),
    [anon_sym_titlecase] = ACTIONS(135),
    [anon_sym_uppercamelcase] = ACTIONS(135),
    [anon_sym_uppercase] = ACTIONS(135),
    [anon_sym_absolute_path] = ACTIONS(135),
    [anon_sym_canonicalize] = ACTIONS(135),
    [anon_sym_extension] = ACTIONS(135),
    [anon_sym_file_name] = ACTIONS(135),
    [anon_sym_file_stem] = ACTIONS(135),
    [anon_sym_parent_dir] = ACTIONS(135),
    [anon_sym_parent_directory] = ACTIONS(135),
    [anon_sym_without_extension] = ACTIONS(135),
    [anon_sym_clean] = ACTIONS(135),
    [anon_sym_join] = ACTIONS(135),
    [anon_sym_path_exists] = ACTIONS(135),
    [anon_sym_error] = ACTIONS(135),
    [anon_sym_blake3] = ACTIONS(135),
    [anon_sym_blake3_file] = ACTIONS(135),
    [anon_sym_sha256] = ACTIONS(135),
    [anon_sym_sha256_file] = ACTIONS(135),
    [anon_sym_uuid] = ACTIONS(135),
    [anon_sym_choose] = ACTIONS(135),
    [anon_sym_datetime] = ACTIONS(135),
    [anon_sym_datetime_utc] = ACTIONS(135),
    [anon_sym_semver_matches] = ACTIONS(135),
    [anon_sym_cache_dir] = ACTIONS(135),
    [anon_sym_cache_directory] = ACTIONS(135),
    [anon_sym_config_dir] = ACTIONS(135),
    [anon_sym_config_directory] = ACTIONS(135),
    [anon_sym_config_local_dir] = ACTIONS(135),
    [anon_sym_config_local_directory] = ACTIONS(135),
    [anon_sym_data_dir] = ACTIONS(135),
    [anon_sym_data_directory] = ACTIONS(135),
    [anon_sym_data_local_dir] = ACTIONS(135),
    [anon_sym_data_local_directory] = ACTIONS(135),
    [anon_sym_executable_dir] = ACTIONS(135),
    [anon_sym_executable_directory] = ACTIONS(135),
    [anon_sym_home_dir] = ACTIONS(135),
    [anon_sym_home_directory] = ACTIONS(135),
    [anon_sym_COMMA] = ACTIONS(133),
    [anon_sym_set] = ACTIONS(135),
    [anon_sym_RBRACK] = ACTIONS(133),
    [anon_sym_BQUOTE] = ACTIONS(135),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(133),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(133),
    [anon_sym_DQUOTE] = ACTIONS(135),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(133),
    [anon_sym_SQUOTE] = ACTIONS(135),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [26] = {
    [sym_comment] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(137),
    [sym_identifier] = ACTIONS(139),
    [anon_sym_alias] = ACTIONS(139),
    [aux_sym_import_token1] = ACTIONS(139),
    [aux_sym_mod_token1] = ACTIONS(139),
    [anon_sym_SLASH] = ACTIONS(137),
    [anon_sym_PLUS] = ACTIONS(137),
    [anon_sym_LPAREN] = ACTIONS(137),
    [anon_sym_RPAREN] = ACTIONS(137),
    [anon_sym_arch] = ACTIONS(139),
    [anon_sym_num_cpus] = ACTIONS(139),
    [anon_sym_os] = ACTIONS(139),
    [anon_sym_os_family] = ACTIONS(139),
    [anon_sym_shell] = ACTIONS(139),
    [anon_sym_env_var] = ACTIONS(139),
    [anon_sym_env_var_or_default] = ACTIONS(139),
    [anon_sym_env] = ACTIONS(139),
    [anon_sym_is_dependency] = ACTIONS(139),
    [anon_sym_invocation_dir] = ACTIONS(139),
    [anon_sym_invocation_dir_native] = ACTIONS(139),
    [anon_sym_invocation_directory] = ACTIONS(139),
    [anon_sym_invocation_directory_native] = ACTIONS(139),
    [anon_sym_justfile] = ACTIONS(139),
    [anon_sym_justfile_dir] = ACTIONS(139),
    [anon_sym_justfile_directory] = ACTIONS(139),
    [anon_sym_source_dir] = ACTIONS(139),
    [anon_sym_source_directory] = ACTIONS(139),
    [anon_sym_source_file] = ACTIONS(139),
    [anon_sym_just_executable] = ACTIONS(139),
    [anon_sym_just_pid] = ACTIONS(139),
    [anon_sym_append] = ACTIONS(139),
    [anon_sym_prepend] = ACTIONS(139),
    [anon_sym_encode_uri_component] = ACTIONS(139),
    [anon_sym_quote] = ACTIONS(139),
    [anon_sym_replace] = ACTIONS(139),
    [anon_sym_replace_regex] = ACTIONS(139),
    [anon_sym_trim] = ACTIONS(139),
    [anon_sym_trim_end] = ACTIONS(139),
    [anon_sym_trim_end_match] = ACTIONS(139),
    [anon_sym_trim_end_matches] = ACTIONS(139),
    [anon_sym_trim_start] = ACTIONS(139),
    [anon_sym_trim_start_match] = ACTIONS(139),
    [anon_sym_trim_start_matches] = ACTIONS(139),
    [anon_sym_capitalize] = ACTIONS(139),
    [anon_sym_kebabcase] = ACTIONS(139),
    [anon_sym_lowercamelcase] = ACTIONS(139),
    [anon_sym_lowercase] = ACTIONS(139),
    [anon_sym_shoutykebabcase] = ACTIONS(139),
    [anon_sym_shoutysnakecase] = ACTIONS(139),
    [anon_sym_snakecase] = ACTIONS(139),
    [anon_sym_titlecase] = ACTIONS(139),
    [anon_sym_uppercamelcase] = ACTIONS(139),
    [anon_sym_uppercase] = ACTIONS(139),
    [anon_sym_absolute_path] = ACTIONS(139),
    [anon_sym_canonicalize] = ACTIONS(139),
    [anon_sym_extension] = ACTIONS(139),
    [anon_sym_file_name] = ACTIONS(139),
    [anon_sym_file_stem] = ACTIONS(139),
    [anon_sym_parent_dir] = ACTIONS(139),
    [anon_sym_parent_directory] = ACTIONS(139),
    [anon_sym_without_extension] = ACTIONS(139),
    [anon_sym_clean] = ACTIONS(139),
    [anon_sym_join] = ACTIONS(139),
    [anon_sym_path_exists] = ACTIONS(139),
    [anon_sym_error] = ACTIONS(139),
    [anon_sym_blake3] = ACTIONS(139),
    [anon_sym_blake3_file] = ACTIONS(139),
    [anon_sym_sha256] = ACTIONS(139),
    [anon_sym_sha256_file] = ACTIONS(139),
    [anon_sym_uuid] = ACTIONS(139),
    [anon_sym_choose] = ACTIONS(139),
    [anon_sym_datetime] = ACTIONS(139),
    [anon_sym_datetime_utc] = ACTIONS(139),
    [anon_sym_semver_matches] = ACTIONS(139),
    [anon_sym_cache_dir] = ACTIONS(139),
    [anon_sym_cache_directory] = ACTIONS(139),
    [anon_sym_config_dir] = ACTIONS(139),
    [anon_sym_config_directory] = ACTIONS(139),
    [anon_sym_config_local_dir] = ACTIONS(139),
    [anon_sym_config_local_directory] = ACTIONS(139),
    [anon_sym_data_dir] = ACTIONS(139),
    [anon_sym_data_directory] = ACTIONS(139),
    [anon_sym_data_local_dir] = ACTIONS(139),
    [anon_sym_data_local_directory] = ACTIONS(139),
    [anon_sym_executable_dir] = ACTIONS(139),
    [anon_sym_executable_directory] = ACTIONS(139),
    [anon_sym_home_dir] = ACTIONS(139),
    [anon_sym_home_directory] = ACTIONS(139),
    [anon_sym_COMMA] = ACTIONS(137),
    [anon_sym_set] = ACTIONS(139),
    [anon_sym_RBRACK] = ACTIONS(137),
    [anon_sym_BQUOTE] = ACTIONS(139),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(137),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(137),
    [anon_sym_DQUOTE] = ACTIONS(139),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(137),
    [anon_sym_SQUOTE] = ACTIONS(139),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [27] = {
    [sym_comment] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(141),
    [sym_identifier] = ACTIONS(143),
    [anon_sym_alias] = ACTIONS(143),
    [aux_sym_import_token1] = ACTIONS(143),
    [aux_sym_mod_token1] = ACTIONS(143),
    [anon_sym_SLASH] = ACTIONS(141),
    [anon_sym_PLUS] = ACTIONS(141),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_RPAREN] = ACTIONS(141),
    [anon_sym_arch] = ACTIONS(143),
    [anon_sym_num_cpus] = ACTIONS(143),
    [anon_sym_os] = ACTIONS(143),
    [anon_sym_os_family] = ACTIONS(143),
    [anon_sym_shell] = ACTIONS(143),
    [anon_sym_env_var] = ACTIONS(143),
    [anon_sym_env_var_or_default] = ACTIONS(143),
    [anon_sym_env] = ACTIONS(143),
    [anon_sym_is_dependency] = ACTIONS(143),
    [anon_sym_invocation_dir] = ACTIONS(143),
    [anon_sym_invocation_dir_native] = ACTIONS(143),
    [anon_sym_invocation_directory] = ACTIONS(143),
    [anon_sym_invocation_directory_native] = ACTIONS(143),
    [anon_sym_justfile] = ACTIONS(143),
    [anon_sym_justfile_dir] = ACTIONS(143),
    [anon_sym_justfile_directory] = ACTIONS(143),
    [anon_sym_source_dir] = ACTIONS(143),
    [anon_sym_source_directory] = ACTIONS(143),
    [anon_sym_source_file] = ACTIONS(143),
    [anon_sym_just_executable] = ACTIONS(143),
    [anon_sym_just_pid] = ACTIONS(143),
    [anon_sym_append] = ACTIONS(143),
    [anon_sym_prepend] = ACTIONS(143),
    [anon_sym_encode_uri_component] = ACTIONS(143),
    [anon_sym_quote] = ACTIONS(143),
    [anon_sym_replace] = ACTIONS(143),
    [anon_sym_replace_regex] = ACTIONS(143),
    [anon_sym_trim] = ACTIONS(143),
    [anon_sym_trim_end] = ACTIONS(143),
    [anon_sym_trim_end_match] = ACTIONS(143),
    [anon_sym_trim_end_matches] = ACTIONS(143),
    [anon_sym_trim_start] = ACTIONS(143),
    [anon_sym_trim_start_match] = ACTIONS(143),
    [anon_sym_trim_start_matches] = ACTIONS(143),
    [anon_sym_capitalize] = ACTIONS(143),
    [anon_sym_kebabcase] = ACTIONS(143),
    [anon_sym_lowercamelcase] = ACTIONS(143),
    [anon_sym_lowercase] = ACTIONS(143),
    [anon_sym_shoutykebabcase] = ACTIONS(143),
    [anon_sym_shoutysnakecase] = ACTIONS(143),
    [anon_sym_snakecase] = ACTIONS(143),
    [anon_sym_titlecase] = ACTIONS(143),
    [anon_sym_uppercamelcase] = ACTIONS(143),
    [anon_sym_uppercase] = ACTIONS(143),
    [anon_sym_absolute_path] = ACTIONS(143),
    [anon_sym_canonicalize] = ACTIONS(143),
    [anon_sym_extension] = ACTIONS(143),
    [anon_sym_file_name] = ACTIONS(143),
    [anon_sym_file_stem] = ACTIONS(143),
    [anon_sym_parent_dir] = ACTIONS(143),
    [anon_sym_parent_directory] = ACTIONS(143),
    [anon_sym_without_extension] = ACTIONS(143),
    [anon_sym_clean] = ACTIONS(143),
    [anon_sym_join] = ACTIONS(143),
    [anon_sym_path_exists] = ACTIONS(143),
    [anon_sym_error] = ACTIONS(143),
    [anon_sym_blake3] = ACTIONS(143),
    [anon_sym_blake3_file] = ACTIONS(143),
    [anon_sym_sha256] = ACTIONS(143),
    [anon_sym_sha256_file] = ACTIONS(143),
    [anon_sym_uuid] = ACTIONS(143),
    [anon_sym_choose] = ACTIONS(143),
    [anon_sym_datetime] = ACTIONS(143),
    [anon_sym_datetime_utc] = ACTIONS(143),
    [anon_sym_semver_matches] = ACTIONS(143),
    [anon_sym_cache_dir] = ACTIONS(143),
    [anon_sym_cache_directory] = ACTIONS(143),
    [anon_sym_config_dir] = ACTIONS(143),
    [anon_sym_config_directory] = ACTIONS(143),
    [anon_sym_config_local_dir] = ACTIONS(143),
    [anon_sym_config_local_directory] = ACTIONS(143),
    [anon_sym_data_dir] = ACTIONS(143),
    [anon_sym_data_directory] = ACTIONS(143),
    [anon_sym_data_local_dir] = ACTIONS(143),
    [anon_sym_data_local_directory] = ACTIONS(143),
    [anon_sym_executable_dir] = ACTIONS(143),
    [anon_sym_executable_directory] = ACTIONS(143),
    [anon_sym_home_dir] = ACTIONS(143),
    [anon_sym_home_directory] = ACTIONS(143),
    [anon_sym_COMMA] = ACTIONS(141),
    [anon_sym_set] = ACTIONS(143),
    [anon_sym_RBRACK] = ACTIONS(141),
    [anon_sym_BQUOTE] = ACTIONS(143),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(141),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(141),
    [anon_sym_SQUOTE] = ACTIONS(143),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [28] = {
    [sym_comment] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(145),
    [sym_identifier] = ACTIONS(147),
    [anon_sym_alias] = ACTIONS(147),
    [aux_sym_import_token1] = ACTIONS(147),
    [aux_sym_mod_token1] = ACTIONS(147),
    [anon_sym_SLASH] = ACTIONS(145),
    [anon_sym_PLUS] = ACTIONS(145),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_RPAREN] = ACTIONS(145),
    [anon_sym_arch] = ACTIONS(147),
    [anon_sym_num_cpus] = ACTIONS(147),
    [anon_sym_os] = ACTIONS(147),
    [anon_sym_os_family] = ACTIONS(147),
    [anon_sym_shell] = ACTIONS(147),
    [anon_sym_env_var] = ACTIONS(147),
    [anon_sym_env_var_or_default] = ACTIONS(147),
    [anon_sym_env] = ACTIONS(147),
    [anon_sym_is_dependency] = ACTIONS(147),
    [anon_sym_invocation_dir] = ACTIONS(147),
    [anon_sym_invocation_dir_native] = ACTIONS(147),
    [anon_sym_invocation_directory] = ACTIONS(147),
    [anon_sym_invocation_directory_native] = ACTIONS(147),
    [anon_sym_justfile] = ACTIONS(147),
    [anon_sym_justfile_dir] = ACTIONS(147),
    [anon_sym_justfile_directory] = ACTIONS(147),
    [anon_sym_source_dir] = ACTIONS(147),
    [anon_sym_source_directory] = ACTIONS(147),
    [anon_sym_source_file] = ACTIONS(147),
    [anon_sym_just_executable] = ACTIONS(147),
    [anon_sym_just_pid] = ACTIONS(147),
    [anon_sym_append] = ACTIONS(147),
    [anon_sym_prepend] = ACTIONS(147),
    [anon_sym_encode_uri_component] = ACTIONS(147),
    [anon_sym_quote] = ACTIONS(147),
    [anon_sym_replace] = ACTIONS(147),
    [anon_sym_replace_regex] = ACTIONS(147),
    [anon_sym_trim] = ACTIONS(147),
    [anon_sym_trim_end] = ACTIONS(147),
    [anon_sym_trim_end_match] = ACTIONS(147),
    [anon_sym_trim_end_matches] = ACTIONS(147),
    [anon_sym_trim_start] = ACTIONS(147),
    [anon_sym_trim_start_match] = ACTIONS(147),
    [anon_sym_trim_start_matches] = ACTIONS(147),
    [anon_sym_capitalize] = ACTIONS(147),
    [anon_sym_kebabcase] = ACTIONS(147),
    [anon_sym_lowercamelcase] = ACTIONS(147),
    [anon_sym_lowercase] = ACTIONS(147),
    [anon_sym_shoutykebabcase] = ACTIONS(147),
    [anon_sym_shoutysnakecase] = ACTIONS(147),
    [anon_sym_snakecase] = ACTIONS(147),
    [anon_sym_titlecase] = ACTIONS(147),
    [anon_sym_uppercamelcase] = ACTIONS(147),
    [anon_sym_uppercase] = ACTIONS(147),
    [anon_sym_absolute_path] = ACTIONS(147),
    [anon_sym_canonicalize] = ACTIONS(147),
    [anon_sym_extension] = ACTIONS(147),
    [anon_sym_file_name] = ACTIONS(147),
    [anon_sym_file_stem] = ACTIONS(147),
    [anon_sym_parent_dir] = ACTIONS(147),
    [anon_sym_parent_directory] = ACTIONS(147),
    [anon_sym_without_extension] = ACTIONS(147),
    [anon_sym_clean] = ACTIONS(147),
    [anon_sym_join] = ACTIONS(147),
    [anon_sym_path_exists] = ACTIONS(147),
    [anon_sym_error] = ACTIONS(147),
    [anon_sym_blake3] = ACTIONS(147),
    [anon_sym_blake3_file] = ACTIONS(147),
    [anon_sym_sha256] = ACTIONS(147),
    [anon_sym_sha256_file] = ACTIONS(147),
    [anon_sym_uuid] = ACTIONS(147),
    [anon_sym_choose] = ACTIONS(147),
    [anon_sym_datetime] = ACTIONS(147),
    [anon_sym_datetime_utc] = ACTIONS(147),
    [anon_sym_semver_matches] = ACTIONS(147),
    [anon_sym_cache_dir] = ACTIONS(147),
    [anon_sym_cache_directory] = ACTIONS(147),
    [anon_sym_config_dir] = ACTIONS(147),
    [anon_sym_config_directory] = ACTIONS(147),
    [anon_sym_config_local_dir] = ACTIONS(147),
    [anon_sym_config_local_directory] = ACTIONS(147),
    [anon_sym_data_dir] = ACTIONS(147),
    [anon_sym_data_directory] = ACTIONS(147),
    [anon_sym_data_local_dir] = ACTIONS(147),
    [anon_sym_data_local_directory] = ACTIONS(147),
    [anon_sym_executable_dir] = ACTIONS(147),
    [anon_sym_executable_directory] = ACTIONS(147),
    [anon_sym_home_dir] = ACTIONS(147),
    [anon_sym_home_directory] = ACTIONS(147),
    [anon_sym_COMMA] = ACTIONS(145),
    [anon_sym_set] = ACTIONS(147),
    [anon_sym_BQUOTE] = ACTIONS(147),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(145),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(145),
    [anon_sym_DQUOTE] = ACTIONS(147),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(145),
    [anon_sym_SQUOTE] = ACTIONS(147),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [29] = {
    [sym_comment] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(149),
    [sym_identifier] = ACTIONS(151),
    [anon_sym_alias] = ACTIONS(151),
    [aux_sym_import_token1] = ACTIONS(151),
    [aux_sym_mod_token1] = ACTIONS(151),
    [anon_sym_SLASH] = ACTIONS(149),
    [anon_sym_PLUS] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_RPAREN] = ACTIONS(149),
    [anon_sym_arch] = ACTIONS(151),
    [anon_sym_num_cpus] = ACTIONS(151),
    [anon_sym_os] = ACTIONS(151),
    [anon_sym_os_family] = ACTIONS(151),
    [anon_sym_shell] = ACTIONS(151),
    [anon_sym_env_var] = ACTIONS(151),
    [anon_sym_env_var_or_default] = ACTIONS(151),
    [anon_sym_env] = ACTIONS(151),
    [anon_sym_is_dependency] = ACTIONS(151),
    [anon_sym_invocation_dir] = ACTIONS(151),
    [anon_sym_invocation_dir_native] = ACTIONS(151),
    [anon_sym_invocation_directory] = ACTIONS(151),
    [anon_sym_invocation_directory_native] = ACTIONS(151),
    [anon_sym_justfile] = ACTIONS(151),
    [anon_sym_justfile_dir] = ACTIONS(151),
    [anon_sym_justfile_directory] = ACTIONS(151),
    [anon_sym_source_dir] = ACTIONS(151),
    [anon_sym_source_directory] = ACTIONS(151),
    [anon_sym_source_file] = ACTIONS(151),
    [anon_sym_just_executable] = ACTIONS(151),
    [anon_sym_just_pid] = ACTIONS(151),
    [anon_sym_append] = ACTIONS(151),
    [anon_sym_prepend] = ACTIONS(151),
    [anon_sym_encode_uri_component] = ACTIONS(151),
    [anon_sym_quote] = ACTIONS(151),
    [anon_sym_replace] = ACTIONS(151),
    [anon_sym_replace_regex] = ACTIONS(151),
    [anon_sym_trim] = ACTIONS(151),
    [anon_sym_trim_end] = ACTIONS(151),
    [anon_sym_trim_end_match] = ACTIONS(151),
    [anon_sym_trim_end_matches] = ACTIONS(151),
    [anon_sym_trim_start] = ACTIONS(151),
    [anon_sym_trim_start_match] = ACTIONS(151),
    [anon_sym_trim_start_matches] = ACTIONS(151),
    [anon_sym_capitalize] = ACTIONS(151),
    [anon_sym_kebabcase] = ACTIONS(151),
    [anon_sym_lowercamelcase] = ACTIONS(151),
    [anon_sym_lowercase] = ACTIONS(151),
    [anon_sym_shoutykebabcase] = ACTIONS(151),
    [anon_sym_shoutysnakecase] = ACTIONS(151),
    [anon_sym_snakecase] = ACTIONS(151),
    [anon_sym_titlecase] = ACTIONS(151),
    [anon_sym_uppercamelcase] = ACTIONS(151),
    [anon_sym_uppercase] = ACTIONS(151),
    [anon_sym_absolute_path] = ACTIONS(151),
    [anon_sym_canonicalize] = ACTIONS(151),
    [anon_sym_extension] = ACTIONS(151),
    [anon_sym_file_name] = ACTIONS(151),
    [anon_sym_file_stem] = ACTIONS(151),
    [anon_sym_parent_dir] = ACTIONS(151),
    [anon_sym_parent_directory] = ACTIONS(151),
    [anon_sym_without_extension] = ACTIONS(151),
    [anon_sym_clean] = ACTIONS(151),
    [anon_sym_join] = ACTIONS(151),
    [anon_sym_path_exists] = ACTIONS(151),
    [anon_sym_error] = ACTIONS(151),
    [anon_sym_blake3] = ACTIONS(151),
    [anon_sym_blake3_file] = ACTIONS(151),
    [anon_sym_sha256] = ACTIONS(151),
    [anon_sym_sha256_file] = ACTIONS(151),
    [anon_sym_uuid] = ACTIONS(151),
    [anon_sym_choose] = ACTIONS(151),
    [anon_sym_datetime] = ACTIONS(151),
    [anon_sym_datetime_utc] = ACTIONS(151),
    [anon_sym_semver_matches] = ACTIONS(151),
    [anon_sym_cache_dir] = ACTIONS(151),
    [anon_sym_cache_directory] = ACTIONS(151),
    [anon_sym_config_dir] = ACTIONS(151),
    [anon_sym_config_directory] = ACTIONS(151),
    [anon_sym_config_local_dir] = ACTIONS(151),
    [anon_sym_config_local_directory] = ACTIONS(151),
    [anon_sym_data_dir] = ACTIONS(151),
    [anon_sym_data_directory] = ACTIONS(151),
    [anon_sym_data_local_dir] = ACTIONS(151),
    [anon_sym_data_local_directory] = ACTIONS(151),
    [anon_sym_executable_dir] = ACTIONS(151),
    [anon_sym_executable_directory] = ACTIONS(151),
    [anon_sym_home_dir] = ACTIONS(151),
    [anon_sym_home_directory] = ACTIONS(151),
    [anon_sym_COMMA] = ACTIONS(149),
    [anon_sym_set] = ACTIONS(151),
    [anon_sym_BQUOTE] = ACTIONS(151),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(149),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(149),
    [anon_sym_DQUOTE] = ACTIONS(151),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(149),
    [anon_sym_SQUOTE] = ACTIONS(151),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [30] = {
    [sym_comment] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(153),
    [sym_identifier] = ACTIONS(155),
    [anon_sym_alias] = ACTIONS(155),
    [aux_sym_import_token1] = ACTIONS(155),
    [aux_sym_mod_token1] = ACTIONS(155),
    [anon_sym_SLASH] = ACTIONS(153),
    [anon_sym_PLUS] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(153),
    [anon_sym_RPAREN] = ACTIONS(153),
    [anon_sym_arch] = ACTIONS(155),
    [anon_sym_num_cpus] = ACTIONS(155),
    [anon_sym_os] = ACTIONS(155),
    [anon_sym_os_family] = ACTIONS(155),
    [anon_sym_shell] = ACTIONS(155),
    [anon_sym_env_var] = ACTIONS(155),
    [anon_sym_env_var_or_default] = ACTIONS(155),
    [anon_sym_env] = ACTIONS(155),
    [anon_sym_is_dependency] = ACTIONS(155),
    [anon_sym_invocation_dir] = ACTIONS(155),
    [anon_sym_invocation_dir_native] = ACTIONS(155),
    [anon_sym_invocation_directory] = ACTIONS(155),
    [anon_sym_invocation_directory_native] = ACTIONS(155),
    [anon_sym_justfile] = ACTIONS(155),
    [anon_sym_justfile_dir] = ACTIONS(155),
    [anon_sym_justfile_directory] = ACTIONS(155),
    [anon_sym_source_dir] = ACTIONS(155),
    [anon_sym_source_directory] = ACTIONS(155),
    [anon_sym_source_file] = ACTIONS(155),
    [anon_sym_just_executable] = ACTIONS(155),
    [anon_sym_just_pid] = ACTIONS(155),
    [anon_sym_append] = ACTIONS(155),
    [anon_sym_prepend] = ACTIONS(155),
    [anon_sym_encode_uri_component] = ACTIONS(155),
    [anon_sym_quote] = ACTIONS(155),
    [anon_sym_replace] = ACTIONS(155),
    [anon_sym_replace_regex] = ACTIONS(155),
    [anon_sym_trim] = ACTIONS(155),
    [anon_sym_trim_end] = ACTIONS(155),
    [anon_sym_trim_end_match] = ACTIONS(155),
    [anon_sym_trim_end_matches] = ACTIONS(155),
    [anon_sym_trim_start] = ACTIONS(155),
    [anon_sym_trim_start_match] = ACTIONS(155),
    [anon_sym_trim_start_matches] = ACTIONS(155),
    [anon_sym_capitalize] = ACTIONS(155),
    [anon_sym_kebabcase] = ACTIONS(155),
    [anon_sym_lowercamelcase] = ACTIONS(155),
    [anon_sym_lowercase] = ACTIONS(155),
    [anon_sym_shoutykebabcase] = ACTIONS(155),
    [anon_sym_shoutysnakecase] = ACTIONS(155),
    [anon_sym_snakecase] = ACTIONS(155),
    [anon_sym_titlecase] = ACTIONS(155),
    [anon_sym_uppercamelcase] = ACTIONS(155),
    [anon_sym_uppercase] = ACTIONS(155),
    [anon_sym_absolute_path] = ACTIONS(155),
    [anon_sym_canonicalize] = ACTIONS(155),
    [anon_sym_extension] = ACTIONS(155),
    [anon_sym_file_name] = ACTIONS(155),
    [anon_sym_file_stem] = ACTIONS(155),
    [anon_sym_parent_dir] = ACTIONS(155),
    [anon_sym_parent_directory] = ACTIONS(155),
    [anon_sym_without_extension] = ACTIONS(155),
    [anon_sym_clean] = ACTIONS(155),
    [anon_sym_join] = ACTIONS(155),
    [anon_sym_path_exists] = ACTIONS(155),
    [anon_sym_error] = ACTIONS(155),
    [anon_sym_blake3] = ACTIONS(155),
    [anon_sym_blake3_file] = ACTIONS(155),
    [anon_sym_sha256] = ACTIONS(155),
    [anon_sym_sha256_file] = ACTIONS(155),
    [anon_sym_uuid] = ACTIONS(155),
    [anon_sym_choose] = ACTIONS(155),
    [anon_sym_datetime] = ACTIONS(155),
    [anon_sym_datetime_utc] = ACTIONS(155),
    [anon_sym_semver_matches] = ACTIONS(155),
    [anon_sym_cache_dir] = ACTIONS(155),
    [anon_sym_cache_directory] = ACTIONS(155),
    [anon_sym_config_dir] = ACTIONS(155),
    [anon_sym_config_directory] = ACTIONS(155),
    [anon_sym_config_local_dir] = ACTIONS(155),
    [anon_sym_config_local_directory] = ACTIONS(155),
    [anon_sym_data_dir] = ACTIONS(155),
    [anon_sym_data_directory] = ACTIONS(155),
    [anon_sym_data_local_dir] = ACTIONS(155),
    [anon_sym_data_local_directory] = ACTIONS(155),
    [anon_sym_executable_dir] = ACTIONS(155),
    [anon_sym_executable_directory] = ACTIONS(155),
    [anon_sym_home_dir] = ACTIONS(155),
    [anon_sym_home_directory] = ACTIONS(155),
    [anon_sym_COMMA] = ACTIONS(153),
    [anon_sym_set] = ACTIONS(155),
    [anon_sym_BQUOTE] = ACTIONS(155),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(153),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(153),
    [anon_sym_DQUOTE] = ACTIONS(155),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(153),
    [anon_sym_SQUOTE] = ACTIONS(155),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [31] = {
    [sym_comment] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(157),
    [sym_identifier] = ACTIONS(159),
    [anon_sym_alias] = ACTIONS(159),
    [aux_sym_import_token1] = ACTIONS(159),
    [aux_sym_mod_token1] = ACTIONS(159),
    [anon_sym_SLASH] = ACTIONS(157),
    [anon_sym_PLUS] = ACTIONS(157),
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
    [anon_sym_parent_dir] = ACTIONS(159),
    [anon_sym_parent_directory] = ACTIONS(159),
    [anon_sym_without_extension] = ACTIONS(159),
    [anon_sym_clean] = ACTIONS(159),
    [anon_sym_join] = ACTIONS(159),
    [anon_sym_path_exists] = ACTIONS(159),
    [anon_sym_error] = ACTIONS(159),
    [anon_sym_blake3] = ACTIONS(159),
    [anon_sym_blake3_file] = ACTIONS(159),
    [anon_sym_sha256] = ACTIONS(159),
    [anon_sym_sha256_file] = ACTIONS(159),
    [anon_sym_uuid] = ACTIONS(159),
    [anon_sym_choose] = ACTIONS(159),
    [anon_sym_datetime] = ACTIONS(159),
    [anon_sym_datetime_utc] = ACTIONS(159),
    [anon_sym_semver_matches] = ACTIONS(159),
    [anon_sym_cache_dir] = ACTIONS(159),
    [anon_sym_cache_directory] = ACTIONS(159),
    [anon_sym_config_dir] = ACTIONS(159),
    [anon_sym_config_directory] = ACTIONS(159),
    [anon_sym_config_local_dir] = ACTIONS(159),
    [anon_sym_config_local_directory] = ACTIONS(159),
    [anon_sym_data_dir] = ACTIONS(159),
    [anon_sym_data_directory] = ACTIONS(159),
    [anon_sym_data_local_dir] = ACTIONS(159),
    [anon_sym_data_local_directory] = ACTIONS(159),
    [anon_sym_executable_dir] = ACTIONS(159),
    [anon_sym_executable_directory] = ACTIONS(159),
    [anon_sym_home_dir] = ACTIONS(159),
    [anon_sym_home_directory] = ACTIONS(159),
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
  [32] = {
    [sym_comment] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(161),
    [sym_identifier] = ACTIONS(163),
    [anon_sym_alias] = ACTIONS(163),
    [aux_sym_import_token1] = ACTIONS(163),
    [aux_sym_mod_token1] = ACTIONS(163),
    [anon_sym_SLASH] = ACTIONS(161),
    [anon_sym_PLUS] = ACTIONS(161),
    [anon_sym_LPAREN] = ACTIONS(165),
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
    [anon_sym_parent_dir] = ACTIONS(163),
    [anon_sym_parent_directory] = ACTIONS(163),
    [anon_sym_without_extension] = ACTIONS(163),
    [anon_sym_clean] = ACTIONS(163),
    [anon_sym_join] = ACTIONS(163),
    [anon_sym_path_exists] = ACTIONS(163),
    [anon_sym_error] = ACTIONS(163),
    [anon_sym_blake3] = ACTIONS(163),
    [anon_sym_blake3_file] = ACTIONS(163),
    [anon_sym_sha256] = ACTIONS(163),
    [anon_sym_sha256_file] = ACTIONS(163),
    [anon_sym_uuid] = ACTIONS(163),
    [anon_sym_choose] = ACTIONS(163),
    [anon_sym_datetime] = ACTIONS(163),
    [anon_sym_datetime_utc] = ACTIONS(163),
    [anon_sym_semver_matches] = ACTIONS(163),
    [anon_sym_cache_dir] = ACTIONS(163),
    [anon_sym_cache_directory] = ACTIONS(163),
    [anon_sym_config_dir] = ACTIONS(163),
    [anon_sym_config_directory] = ACTIONS(163),
    [anon_sym_config_local_dir] = ACTIONS(163),
    [anon_sym_config_local_directory] = ACTIONS(163),
    [anon_sym_data_dir] = ACTIONS(163),
    [anon_sym_data_directory] = ACTIONS(163),
    [anon_sym_data_local_dir] = ACTIONS(163),
    [anon_sym_data_local_directory] = ACTIONS(163),
    [anon_sym_executable_dir] = ACTIONS(163),
    [anon_sym_executable_directory] = ACTIONS(163),
    [anon_sym_home_dir] = ACTIONS(163),
    [anon_sym_home_directory] = ACTIONS(163),
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
  [33] = {
    [sym_comment] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(167),
    [sym_identifier] = ACTIONS(169),
    [anon_sym_alias] = ACTIONS(169),
    [aux_sym_import_token1] = ACTIONS(169),
    [aux_sym_mod_token1] = ACTIONS(169),
    [anon_sym_SLASH] = ACTIONS(167),
    [anon_sym_PLUS] = ACTIONS(167),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_RPAREN] = ACTIONS(167),
    [anon_sym_arch] = ACTIONS(169),
    [anon_sym_num_cpus] = ACTIONS(169),
    [anon_sym_os] = ACTIONS(169),
    [anon_sym_os_family] = ACTIONS(169),
    [anon_sym_shell] = ACTIONS(169),
    [anon_sym_env_var] = ACTIONS(169),
    [anon_sym_env_var_or_default] = ACTIONS(169),
    [anon_sym_env] = ACTIONS(169),
    [anon_sym_is_dependency] = ACTIONS(169),
    [anon_sym_invocation_dir] = ACTIONS(169),
    [anon_sym_invocation_dir_native] = ACTIONS(169),
    [anon_sym_invocation_directory] = ACTIONS(169),
    [anon_sym_invocation_directory_native] = ACTIONS(169),
    [anon_sym_justfile] = ACTIONS(169),
    [anon_sym_justfile_dir] = ACTIONS(169),
    [anon_sym_justfile_directory] = ACTIONS(169),
    [anon_sym_source_dir] = ACTIONS(169),
    [anon_sym_source_directory] = ACTIONS(169),
    [anon_sym_source_file] = ACTIONS(169),
    [anon_sym_just_executable] = ACTIONS(169),
    [anon_sym_just_pid] = ACTIONS(169),
    [anon_sym_append] = ACTIONS(169),
    [anon_sym_prepend] = ACTIONS(169),
    [anon_sym_encode_uri_component] = ACTIONS(169),
    [anon_sym_quote] = ACTIONS(169),
    [anon_sym_replace] = ACTIONS(169),
    [anon_sym_replace_regex] = ACTIONS(169),
    [anon_sym_trim] = ACTIONS(169),
    [anon_sym_trim_end] = ACTIONS(169),
    [anon_sym_trim_end_match] = ACTIONS(169),
    [anon_sym_trim_end_matches] = ACTIONS(169),
    [anon_sym_trim_start] = ACTIONS(169),
    [anon_sym_trim_start_match] = ACTIONS(169),
    [anon_sym_trim_start_matches] = ACTIONS(169),
    [anon_sym_capitalize] = ACTIONS(169),
    [anon_sym_kebabcase] = ACTIONS(169),
    [anon_sym_lowercamelcase] = ACTIONS(169),
    [anon_sym_lowercase] = ACTIONS(169),
    [anon_sym_shoutykebabcase] = ACTIONS(169),
    [anon_sym_shoutysnakecase] = ACTIONS(169),
    [anon_sym_snakecase] = ACTIONS(169),
    [anon_sym_titlecase] = ACTIONS(169),
    [anon_sym_uppercamelcase] = ACTIONS(169),
    [anon_sym_uppercase] = ACTIONS(169),
    [anon_sym_absolute_path] = ACTIONS(169),
    [anon_sym_canonicalize] = ACTIONS(169),
    [anon_sym_extension] = ACTIONS(169),
    [anon_sym_file_name] = ACTIONS(169),
    [anon_sym_file_stem] = ACTIONS(169),
    [anon_sym_parent_dir] = ACTIONS(169),
    [anon_sym_parent_directory] = ACTIONS(169),
    [anon_sym_without_extension] = ACTIONS(169),
    [anon_sym_clean] = ACTIONS(169),
    [anon_sym_join] = ACTIONS(169),
    [anon_sym_path_exists] = ACTIONS(169),
    [anon_sym_error] = ACTIONS(169),
    [anon_sym_blake3] = ACTIONS(169),
    [anon_sym_blake3_file] = ACTIONS(169),
    [anon_sym_sha256] = ACTIONS(169),
    [anon_sym_sha256_file] = ACTIONS(169),
    [anon_sym_uuid] = ACTIONS(169),
    [anon_sym_choose] = ACTIONS(169),
    [anon_sym_datetime] = ACTIONS(169),
    [anon_sym_datetime_utc] = ACTIONS(169),
    [anon_sym_semver_matches] = ACTIONS(169),
    [anon_sym_cache_dir] = ACTIONS(169),
    [anon_sym_cache_directory] = ACTIONS(169),
    [anon_sym_config_dir] = ACTIONS(169),
    [anon_sym_config_directory] = ACTIONS(169),
    [anon_sym_config_local_dir] = ACTIONS(169),
    [anon_sym_config_local_directory] = ACTIONS(169),
    [anon_sym_data_dir] = ACTIONS(169),
    [anon_sym_data_directory] = ACTIONS(169),
    [anon_sym_data_local_dir] = ACTIONS(169),
    [anon_sym_data_local_directory] = ACTIONS(169),
    [anon_sym_executable_dir] = ACTIONS(169),
    [anon_sym_executable_directory] = ACTIONS(169),
    [anon_sym_home_dir] = ACTIONS(169),
    [anon_sym_home_directory] = ACTIONS(169),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_set] = ACTIONS(169),
    [anon_sym_BQUOTE] = ACTIONS(169),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(167),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(167),
    [anon_sym_SQUOTE] = ACTIONS(169),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [34] = {
    [sym_comment] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(171),
    [sym_identifier] = ACTIONS(173),
    [anon_sym_alias] = ACTIONS(173),
    [aux_sym_import_token1] = ACTIONS(173),
    [aux_sym_mod_token1] = ACTIONS(173),
    [anon_sym_SLASH] = ACTIONS(171),
    [anon_sym_PLUS] = ACTIONS(171),
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
    [anon_sym_parent_dir] = ACTIONS(173),
    [anon_sym_parent_directory] = ACTIONS(173),
    [anon_sym_without_extension] = ACTIONS(173),
    [anon_sym_clean] = ACTIONS(173),
    [anon_sym_join] = ACTIONS(173),
    [anon_sym_path_exists] = ACTIONS(173),
    [anon_sym_error] = ACTIONS(173),
    [anon_sym_blake3] = ACTIONS(173),
    [anon_sym_blake3_file] = ACTIONS(173),
    [anon_sym_sha256] = ACTIONS(173),
    [anon_sym_sha256_file] = ACTIONS(173),
    [anon_sym_uuid] = ACTIONS(173),
    [anon_sym_choose] = ACTIONS(173),
    [anon_sym_datetime] = ACTIONS(173),
    [anon_sym_datetime_utc] = ACTIONS(173),
    [anon_sym_semver_matches] = ACTIONS(173),
    [anon_sym_cache_dir] = ACTIONS(173),
    [anon_sym_cache_directory] = ACTIONS(173),
    [anon_sym_config_dir] = ACTIONS(173),
    [anon_sym_config_directory] = ACTIONS(173),
    [anon_sym_config_local_dir] = ACTIONS(173),
    [anon_sym_config_local_directory] = ACTIONS(173),
    [anon_sym_data_dir] = ACTIONS(173),
    [anon_sym_data_directory] = ACTIONS(173),
    [anon_sym_data_local_dir] = ACTIONS(173),
    [anon_sym_data_local_directory] = ACTIONS(173),
    [anon_sym_executable_dir] = ACTIONS(173),
    [anon_sym_executable_directory] = ACTIONS(173),
    [anon_sym_home_dir] = ACTIONS(173),
    [anon_sym_home_directory] = ACTIONS(173),
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
  [35] = {
    [sym_comment] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(175),
    [sym_identifier] = ACTIONS(177),
    [anon_sym_alias] = ACTIONS(177),
    [aux_sym_import_token1] = ACTIONS(177),
    [aux_sym_mod_token1] = ACTIONS(177),
    [anon_sym_SLASH] = ACTIONS(179),
    [anon_sym_PLUS] = ACTIONS(179),
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
    [anon_sym_parent_dir] = ACTIONS(177),
    [anon_sym_parent_directory] = ACTIONS(177),
    [anon_sym_without_extension] = ACTIONS(177),
    [anon_sym_clean] = ACTIONS(177),
    [anon_sym_join] = ACTIONS(177),
    [anon_sym_path_exists] = ACTIONS(177),
    [anon_sym_error] = ACTIONS(177),
    [anon_sym_blake3] = ACTIONS(177),
    [anon_sym_blake3_file] = ACTIONS(177),
    [anon_sym_sha256] = ACTIONS(177),
    [anon_sym_sha256_file] = ACTIONS(177),
    [anon_sym_uuid] = ACTIONS(177),
    [anon_sym_choose] = ACTIONS(177),
    [anon_sym_datetime] = ACTIONS(177),
    [anon_sym_datetime_utc] = ACTIONS(177),
    [anon_sym_semver_matches] = ACTIONS(177),
    [anon_sym_cache_dir] = ACTIONS(177),
    [anon_sym_cache_directory] = ACTIONS(177),
    [anon_sym_config_dir] = ACTIONS(177),
    [anon_sym_config_directory] = ACTIONS(177),
    [anon_sym_config_local_dir] = ACTIONS(177),
    [anon_sym_config_local_directory] = ACTIONS(177),
    [anon_sym_data_dir] = ACTIONS(177),
    [anon_sym_data_directory] = ACTIONS(177),
    [anon_sym_data_local_dir] = ACTIONS(177),
    [anon_sym_data_local_directory] = ACTIONS(177),
    [anon_sym_executable_dir] = ACTIONS(177),
    [anon_sym_executable_directory] = ACTIONS(177),
    [anon_sym_home_dir] = ACTIONS(177),
    [anon_sym_home_directory] = ACTIONS(177),
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
  [36] = {
    [sym_comment] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(161),
    [sym_identifier] = ACTIONS(163),
    [anon_sym_alias] = ACTIONS(163),
    [aux_sym_import_token1] = ACTIONS(163),
    [aux_sym_mod_token1] = ACTIONS(163),
    [anon_sym_SLASH] = ACTIONS(161),
    [anon_sym_PLUS] = ACTIONS(161),
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
    [anon_sym_parent_dir] = ACTIONS(163),
    [anon_sym_parent_directory] = ACTIONS(163),
    [anon_sym_without_extension] = ACTIONS(163),
    [anon_sym_clean] = ACTIONS(163),
    [anon_sym_join] = ACTIONS(163),
    [anon_sym_path_exists] = ACTIONS(163),
    [anon_sym_error] = ACTIONS(163),
    [anon_sym_blake3] = ACTIONS(163),
    [anon_sym_blake3_file] = ACTIONS(163),
    [anon_sym_sha256] = ACTIONS(163),
    [anon_sym_sha256_file] = ACTIONS(163),
    [anon_sym_uuid] = ACTIONS(163),
    [anon_sym_choose] = ACTIONS(163),
    [anon_sym_datetime] = ACTIONS(163),
    [anon_sym_datetime_utc] = ACTIONS(163),
    [anon_sym_semver_matches] = ACTIONS(163),
    [anon_sym_cache_dir] = ACTIONS(163),
    [anon_sym_cache_directory] = ACTIONS(163),
    [anon_sym_config_dir] = ACTIONS(163),
    [anon_sym_config_directory] = ACTIONS(163),
    [anon_sym_config_local_dir] = ACTIONS(163),
    [anon_sym_config_local_directory] = ACTIONS(163),
    [anon_sym_data_dir] = ACTIONS(163),
    [anon_sym_data_directory] = ACTIONS(163),
    [anon_sym_data_local_dir] = ACTIONS(163),
    [anon_sym_data_local_directory] = ACTIONS(163),
    [anon_sym_executable_dir] = ACTIONS(163),
    [anon_sym_executable_directory] = ACTIONS(163),
    [anon_sym_home_dir] = ACTIONS(163),
    [anon_sym_home_directory] = ACTIONS(163),
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
  [37] = {
    [sym_comment] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(181),
    [sym_identifier] = ACTIONS(183),
    [anon_sym_alias] = ACTIONS(183),
    [aux_sym_import_token1] = ACTIONS(183),
    [aux_sym_mod_token1] = ACTIONS(183),
    [anon_sym_SLASH] = ACTIONS(181),
    [anon_sym_PLUS] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(181),
    [anon_sym_arch] = ACTIONS(183),
    [anon_sym_num_cpus] = ACTIONS(183),
    [anon_sym_os] = ACTIONS(183),
    [anon_sym_os_family] = ACTIONS(183),
    [anon_sym_shell] = ACTIONS(183),
    [anon_sym_env_var] = ACTIONS(183),
    [anon_sym_env_var_or_default] = ACTIONS(183),
    [anon_sym_env] = ACTIONS(183),
    [anon_sym_is_dependency] = ACTIONS(183),
    [anon_sym_invocation_dir] = ACTIONS(183),
    [anon_sym_invocation_dir_native] = ACTIONS(183),
    [anon_sym_invocation_directory] = ACTIONS(183),
    [anon_sym_invocation_directory_native] = ACTIONS(183),
    [anon_sym_justfile] = ACTIONS(183),
    [anon_sym_justfile_dir] = ACTIONS(183),
    [anon_sym_justfile_directory] = ACTIONS(183),
    [anon_sym_source_dir] = ACTIONS(183),
    [anon_sym_source_directory] = ACTIONS(183),
    [anon_sym_source_file] = ACTIONS(183),
    [anon_sym_just_executable] = ACTIONS(183),
    [anon_sym_just_pid] = ACTIONS(183),
    [anon_sym_append] = ACTIONS(183),
    [anon_sym_prepend] = ACTIONS(183),
    [anon_sym_encode_uri_component] = ACTIONS(183),
    [anon_sym_quote] = ACTIONS(183),
    [anon_sym_replace] = ACTIONS(183),
    [anon_sym_replace_regex] = ACTIONS(183),
    [anon_sym_trim] = ACTIONS(183),
    [anon_sym_trim_end] = ACTIONS(183),
    [anon_sym_trim_end_match] = ACTIONS(183),
    [anon_sym_trim_end_matches] = ACTIONS(183),
    [anon_sym_trim_start] = ACTIONS(183),
    [anon_sym_trim_start_match] = ACTIONS(183),
    [anon_sym_trim_start_matches] = ACTIONS(183),
    [anon_sym_capitalize] = ACTIONS(183),
    [anon_sym_kebabcase] = ACTIONS(183),
    [anon_sym_lowercamelcase] = ACTIONS(183),
    [anon_sym_lowercase] = ACTIONS(183),
    [anon_sym_shoutykebabcase] = ACTIONS(183),
    [anon_sym_shoutysnakecase] = ACTIONS(183),
    [anon_sym_snakecase] = ACTIONS(183),
    [anon_sym_titlecase] = ACTIONS(183),
    [anon_sym_uppercamelcase] = ACTIONS(183),
    [anon_sym_uppercase] = ACTIONS(183),
    [anon_sym_absolute_path] = ACTIONS(183),
    [anon_sym_canonicalize] = ACTIONS(183),
    [anon_sym_extension] = ACTIONS(183),
    [anon_sym_file_name] = ACTIONS(183),
    [anon_sym_file_stem] = ACTIONS(183),
    [anon_sym_parent_dir] = ACTIONS(183),
    [anon_sym_parent_directory] = ACTIONS(183),
    [anon_sym_without_extension] = ACTIONS(183),
    [anon_sym_clean] = ACTIONS(183),
    [anon_sym_join] = ACTIONS(183),
    [anon_sym_path_exists] = ACTIONS(183),
    [anon_sym_error] = ACTIONS(183),
    [anon_sym_blake3] = ACTIONS(183),
    [anon_sym_blake3_file] = ACTIONS(183),
    [anon_sym_sha256] = ACTIONS(183),
    [anon_sym_sha256_file] = ACTIONS(183),
    [anon_sym_uuid] = ACTIONS(183),
    [anon_sym_choose] = ACTIONS(183),
    [anon_sym_datetime] = ACTIONS(183),
    [anon_sym_datetime_utc] = ACTIONS(183),
    [anon_sym_semver_matches] = ACTIONS(183),
    [anon_sym_cache_dir] = ACTIONS(183),
    [anon_sym_cache_directory] = ACTIONS(183),
    [anon_sym_config_dir] = ACTIONS(183),
    [anon_sym_config_directory] = ACTIONS(183),
    [anon_sym_config_local_dir] = ACTIONS(183),
    [anon_sym_config_local_directory] = ACTIONS(183),
    [anon_sym_data_dir] = ACTIONS(183),
    [anon_sym_data_directory] = ACTIONS(183),
    [anon_sym_data_local_dir] = ACTIONS(183),
    [anon_sym_data_local_directory] = ACTIONS(183),
    [anon_sym_executable_dir] = ACTIONS(183),
    [anon_sym_executable_directory] = ACTIONS(183),
    [anon_sym_home_dir] = ACTIONS(183),
    [anon_sym_home_directory] = ACTIONS(183),
    [anon_sym_COMMA] = ACTIONS(181),
    [anon_sym_set] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(183),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(181),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(181),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [38] = {
    [sym_comment] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(185),
    [sym_identifier] = ACTIONS(187),
    [anon_sym_alias] = ACTIONS(187),
    [aux_sym_import_token1] = ACTIONS(187),
    [aux_sym_mod_token1] = ACTIONS(187),
    [anon_sym_SLASH] = ACTIONS(185),
    [anon_sym_PLUS] = ACTIONS(185),
    [anon_sym_LPAREN] = ACTIONS(185),
    [anon_sym_RPAREN] = ACTIONS(185),
    [anon_sym_arch] = ACTIONS(187),
    [anon_sym_num_cpus] = ACTIONS(187),
    [anon_sym_os] = ACTIONS(187),
    [anon_sym_os_family] = ACTIONS(187),
    [anon_sym_shell] = ACTIONS(187),
    [anon_sym_env_var] = ACTIONS(187),
    [anon_sym_env_var_or_default] = ACTIONS(187),
    [anon_sym_env] = ACTIONS(187),
    [anon_sym_is_dependency] = ACTIONS(187),
    [anon_sym_invocation_dir] = ACTIONS(187),
    [anon_sym_invocation_dir_native] = ACTIONS(187),
    [anon_sym_invocation_directory] = ACTIONS(187),
    [anon_sym_invocation_directory_native] = ACTIONS(187),
    [anon_sym_justfile] = ACTIONS(187),
    [anon_sym_justfile_dir] = ACTIONS(187),
    [anon_sym_justfile_directory] = ACTIONS(187),
    [anon_sym_source_dir] = ACTIONS(187),
    [anon_sym_source_directory] = ACTIONS(187),
    [anon_sym_source_file] = ACTIONS(187),
    [anon_sym_just_executable] = ACTIONS(187),
    [anon_sym_just_pid] = ACTIONS(187),
    [anon_sym_append] = ACTIONS(187),
    [anon_sym_prepend] = ACTIONS(187),
    [anon_sym_encode_uri_component] = ACTIONS(187),
    [anon_sym_quote] = ACTIONS(187),
    [anon_sym_replace] = ACTIONS(187),
    [anon_sym_replace_regex] = ACTIONS(187),
    [anon_sym_trim] = ACTIONS(187),
    [anon_sym_trim_end] = ACTIONS(187),
    [anon_sym_trim_end_match] = ACTIONS(187),
    [anon_sym_trim_end_matches] = ACTIONS(187),
    [anon_sym_trim_start] = ACTIONS(187),
    [anon_sym_trim_start_match] = ACTIONS(187),
    [anon_sym_trim_start_matches] = ACTIONS(187),
    [anon_sym_capitalize] = ACTIONS(187),
    [anon_sym_kebabcase] = ACTIONS(187),
    [anon_sym_lowercamelcase] = ACTIONS(187),
    [anon_sym_lowercase] = ACTIONS(187),
    [anon_sym_shoutykebabcase] = ACTIONS(187),
    [anon_sym_shoutysnakecase] = ACTIONS(187),
    [anon_sym_snakecase] = ACTIONS(187),
    [anon_sym_titlecase] = ACTIONS(187),
    [anon_sym_uppercamelcase] = ACTIONS(187),
    [anon_sym_uppercase] = ACTIONS(187),
    [anon_sym_absolute_path] = ACTIONS(187),
    [anon_sym_canonicalize] = ACTIONS(187),
    [anon_sym_extension] = ACTIONS(187),
    [anon_sym_file_name] = ACTIONS(187),
    [anon_sym_file_stem] = ACTIONS(187),
    [anon_sym_parent_dir] = ACTIONS(187),
    [anon_sym_parent_directory] = ACTIONS(187),
    [anon_sym_without_extension] = ACTIONS(187),
    [anon_sym_clean] = ACTIONS(187),
    [anon_sym_join] = ACTIONS(187),
    [anon_sym_path_exists] = ACTIONS(187),
    [anon_sym_error] = ACTIONS(187),
    [anon_sym_blake3] = ACTIONS(187),
    [anon_sym_blake3_file] = ACTIONS(187),
    [anon_sym_sha256] = ACTIONS(187),
    [anon_sym_sha256_file] = ACTIONS(187),
    [anon_sym_uuid] = ACTIONS(187),
    [anon_sym_choose] = ACTIONS(187),
    [anon_sym_datetime] = ACTIONS(187),
    [anon_sym_datetime_utc] = ACTIONS(187),
    [anon_sym_semver_matches] = ACTIONS(187),
    [anon_sym_cache_dir] = ACTIONS(187),
    [anon_sym_cache_directory] = ACTIONS(187),
    [anon_sym_config_dir] = ACTIONS(187),
    [anon_sym_config_directory] = ACTIONS(187),
    [anon_sym_config_local_dir] = ACTIONS(187),
    [anon_sym_config_local_directory] = ACTIONS(187),
    [anon_sym_data_dir] = ACTIONS(187),
    [anon_sym_data_directory] = ACTIONS(187),
    [anon_sym_data_local_dir] = ACTIONS(187),
    [anon_sym_data_local_directory] = ACTIONS(187),
    [anon_sym_executable_dir] = ACTIONS(187),
    [anon_sym_executable_directory] = ACTIONS(187),
    [anon_sym_home_dir] = ACTIONS(187),
    [anon_sym_home_directory] = ACTIONS(187),
    [anon_sym_COMMA] = ACTIONS(185),
    [anon_sym_set] = ACTIONS(187),
    [anon_sym_BQUOTE] = ACTIONS(187),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(185),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(185),
    [anon_sym_DQUOTE] = ACTIONS(187),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(185),
    [anon_sym_SQUOTE] = ACTIONS(187),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [39] = {
    [sym_comment] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(189),
    [sym_identifier] = ACTIONS(191),
    [anon_sym_alias] = ACTIONS(191),
    [aux_sym_import_token1] = ACTIONS(191),
    [aux_sym_mod_token1] = ACTIONS(191),
    [anon_sym_SLASH] = ACTIONS(189),
    [anon_sym_PLUS] = ACTIONS(189),
    [anon_sym_LPAREN] = ACTIONS(189),
    [anon_sym_RPAREN] = ACTIONS(189),
    [anon_sym_arch] = ACTIONS(191),
    [anon_sym_num_cpus] = ACTIONS(191),
    [anon_sym_os] = ACTIONS(191),
    [anon_sym_os_family] = ACTIONS(191),
    [anon_sym_shell] = ACTIONS(191),
    [anon_sym_env_var] = ACTIONS(191),
    [anon_sym_env_var_or_default] = ACTIONS(191),
    [anon_sym_env] = ACTIONS(191),
    [anon_sym_is_dependency] = ACTIONS(191),
    [anon_sym_invocation_dir] = ACTIONS(191),
    [anon_sym_invocation_dir_native] = ACTIONS(191),
    [anon_sym_invocation_directory] = ACTIONS(191),
    [anon_sym_invocation_directory_native] = ACTIONS(191),
    [anon_sym_justfile] = ACTIONS(191),
    [anon_sym_justfile_dir] = ACTIONS(191),
    [anon_sym_justfile_directory] = ACTIONS(191),
    [anon_sym_source_dir] = ACTIONS(191),
    [anon_sym_source_directory] = ACTIONS(191),
    [anon_sym_source_file] = ACTIONS(191),
    [anon_sym_just_executable] = ACTIONS(191),
    [anon_sym_just_pid] = ACTIONS(191),
    [anon_sym_append] = ACTIONS(191),
    [anon_sym_prepend] = ACTIONS(191),
    [anon_sym_encode_uri_component] = ACTIONS(191),
    [anon_sym_quote] = ACTIONS(191),
    [anon_sym_replace] = ACTIONS(191),
    [anon_sym_replace_regex] = ACTIONS(191),
    [anon_sym_trim] = ACTIONS(191),
    [anon_sym_trim_end] = ACTIONS(191),
    [anon_sym_trim_end_match] = ACTIONS(191),
    [anon_sym_trim_end_matches] = ACTIONS(191),
    [anon_sym_trim_start] = ACTIONS(191),
    [anon_sym_trim_start_match] = ACTIONS(191),
    [anon_sym_trim_start_matches] = ACTIONS(191),
    [anon_sym_capitalize] = ACTIONS(191),
    [anon_sym_kebabcase] = ACTIONS(191),
    [anon_sym_lowercamelcase] = ACTIONS(191),
    [anon_sym_lowercase] = ACTIONS(191),
    [anon_sym_shoutykebabcase] = ACTIONS(191),
    [anon_sym_shoutysnakecase] = ACTIONS(191),
    [anon_sym_snakecase] = ACTIONS(191),
    [anon_sym_titlecase] = ACTIONS(191),
    [anon_sym_uppercamelcase] = ACTIONS(191),
    [anon_sym_uppercase] = ACTIONS(191),
    [anon_sym_absolute_path] = ACTIONS(191),
    [anon_sym_canonicalize] = ACTIONS(191),
    [anon_sym_extension] = ACTIONS(191),
    [anon_sym_file_name] = ACTIONS(191),
    [anon_sym_file_stem] = ACTIONS(191),
    [anon_sym_parent_dir] = ACTIONS(191),
    [anon_sym_parent_directory] = ACTIONS(191),
    [anon_sym_without_extension] = ACTIONS(191),
    [anon_sym_clean] = ACTIONS(191),
    [anon_sym_join] = ACTIONS(191),
    [anon_sym_path_exists] = ACTIONS(191),
    [anon_sym_error] = ACTIONS(191),
    [anon_sym_blake3] = ACTIONS(191),
    [anon_sym_blake3_file] = ACTIONS(191),
    [anon_sym_sha256] = ACTIONS(191),
    [anon_sym_sha256_file] = ACTIONS(191),
    [anon_sym_uuid] = ACTIONS(191),
    [anon_sym_choose] = ACTIONS(191),
    [anon_sym_datetime] = ACTIONS(191),
    [anon_sym_datetime_utc] = ACTIONS(191),
    [anon_sym_semver_matches] = ACTIONS(191),
    [anon_sym_cache_dir] = ACTIONS(191),
    [anon_sym_cache_directory] = ACTIONS(191),
    [anon_sym_config_dir] = ACTIONS(191),
    [anon_sym_config_directory] = ACTIONS(191),
    [anon_sym_config_local_dir] = ACTIONS(191),
    [anon_sym_config_local_directory] = ACTIONS(191),
    [anon_sym_data_dir] = ACTIONS(191),
    [anon_sym_data_directory] = ACTIONS(191),
    [anon_sym_data_local_dir] = ACTIONS(191),
    [anon_sym_data_local_directory] = ACTIONS(191),
    [anon_sym_executable_dir] = ACTIONS(191),
    [anon_sym_executable_directory] = ACTIONS(191),
    [anon_sym_home_dir] = ACTIONS(191),
    [anon_sym_home_directory] = ACTIONS(191),
    [anon_sym_COMMA] = ACTIONS(189),
    [anon_sym_set] = ACTIONS(191),
    [anon_sym_BQUOTE] = ACTIONS(191),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(189),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(189),
    [anon_sym_DQUOTE] = ACTIONS(191),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(189),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [40] = {
    [sym_comment] = STATE(40),
    [ts_builtin_sym_end] = ACTIONS(193),
    [sym_identifier] = ACTIONS(195),
    [anon_sym_alias] = ACTIONS(195),
    [aux_sym_import_token1] = ACTIONS(195),
    [aux_sym_mod_token1] = ACTIONS(195),
    [anon_sym_SLASH] = ACTIONS(193),
    [anon_sym_PLUS] = ACTIONS(193),
    [anon_sym_LPAREN] = ACTIONS(193),
    [anon_sym_RPAREN] = ACTIONS(193),
    [anon_sym_arch] = ACTIONS(195),
    [anon_sym_num_cpus] = ACTIONS(195),
    [anon_sym_os] = ACTIONS(195),
    [anon_sym_os_family] = ACTIONS(195),
    [anon_sym_shell] = ACTIONS(195),
    [anon_sym_env_var] = ACTIONS(195),
    [anon_sym_env_var_or_default] = ACTIONS(195),
    [anon_sym_env] = ACTIONS(195),
    [anon_sym_is_dependency] = ACTIONS(195),
    [anon_sym_invocation_dir] = ACTIONS(195),
    [anon_sym_invocation_dir_native] = ACTIONS(195),
    [anon_sym_invocation_directory] = ACTIONS(195),
    [anon_sym_invocation_directory_native] = ACTIONS(195),
    [anon_sym_justfile] = ACTIONS(195),
    [anon_sym_justfile_dir] = ACTIONS(195),
    [anon_sym_justfile_directory] = ACTIONS(195),
    [anon_sym_source_dir] = ACTIONS(195),
    [anon_sym_source_directory] = ACTIONS(195),
    [anon_sym_source_file] = ACTIONS(195),
    [anon_sym_just_executable] = ACTIONS(195),
    [anon_sym_just_pid] = ACTIONS(195),
    [anon_sym_append] = ACTIONS(195),
    [anon_sym_prepend] = ACTIONS(195),
    [anon_sym_encode_uri_component] = ACTIONS(195),
    [anon_sym_quote] = ACTIONS(195),
    [anon_sym_replace] = ACTIONS(195),
    [anon_sym_replace_regex] = ACTIONS(195),
    [anon_sym_trim] = ACTIONS(195),
    [anon_sym_trim_end] = ACTIONS(195),
    [anon_sym_trim_end_match] = ACTIONS(195),
    [anon_sym_trim_end_matches] = ACTIONS(195),
    [anon_sym_trim_start] = ACTIONS(195),
    [anon_sym_trim_start_match] = ACTIONS(195),
    [anon_sym_trim_start_matches] = ACTIONS(195),
    [anon_sym_capitalize] = ACTIONS(195),
    [anon_sym_kebabcase] = ACTIONS(195),
    [anon_sym_lowercamelcase] = ACTIONS(195),
    [anon_sym_lowercase] = ACTIONS(195),
    [anon_sym_shoutykebabcase] = ACTIONS(195),
    [anon_sym_shoutysnakecase] = ACTIONS(195),
    [anon_sym_snakecase] = ACTIONS(195),
    [anon_sym_titlecase] = ACTIONS(195),
    [anon_sym_uppercamelcase] = ACTIONS(195),
    [anon_sym_uppercase] = ACTIONS(195),
    [anon_sym_absolute_path] = ACTIONS(195),
    [anon_sym_canonicalize] = ACTIONS(195),
    [anon_sym_extension] = ACTIONS(195),
    [anon_sym_file_name] = ACTIONS(195),
    [anon_sym_file_stem] = ACTIONS(195),
    [anon_sym_parent_dir] = ACTIONS(195),
    [anon_sym_parent_directory] = ACTIONS(195),
    [anon_sym_without_extension] = ACTIONS(195),
    [anon_sym_clean] = ACTIONS(195),
    [anon_sym_join] = ACTIONS(195),
    [anon_sym_path_exists] = ACTIONS(195),
    [anon_sym_error] = ACTIONS(195),
    [anon_sym_blake3] = ACTIONS(195),
    [anon_sym_blake3_file] = ACTIONS(195),
    [anon_sym_sha256] = ACTIONS(195),
    [anon_sym_sha256_file] = ACTIONS(195),
    [anon_sym_uuid] = ACTIONS(195),
    [anon_sym_choose] = ACTIONS(195),
    [anon_sym_datetime] = ACTIONS(195),
    [anon_sym_datetime_utc] = ACTIONS(195),
    [anon_sym_semver_matches] = ACTIONS(195),
    [anon_sym_cache_dir] = ACTIONS(195),
    [anon_sym_cache_directory] = ACTIONS(195),
    [anon_sym_config_dir] = ACTIONS(195),
    [anon_sym_config_directory] = ACTIONS(195),
    [anon_sym_config_local_dir] = ACTIONS(195),
    [anon_sym_config_local_directory] = ACTIONS(195),
    [anon_sym_data_dir] = ACTIONS(195),
    [anon_sym_data_directory] = ACTIONS(195),
    [anon_sym_data_local_dir] = ACTIONS(195),
    [anon_sym_data_local_directory] = ACTIONS(195),
    [anon_sym_executable_dir] = ACTIONS(195),
    [anon_sym_executable_directory] = ACTIONS(195),
    [anon_sym_home_dir] = ACTIONS(195),
    [anon_sym_home_directory] = ACTIONS(195),
    [anon_sym_COMMA] = ACTIONS(193),
    [anon_sym_set] = ACTIONS(195),
    [anon_sym_BQUOTE] = ACTIONS(195),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(193),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(193),
    [anon_sym_DQUOTE] = ACTIONS(195),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(193),
    [anon_sym_SQUOTE] = ACTIONS(195),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [41] = {
    [sym_comment] = STATE(41),
    [ts_builtin_sym_end] = ACTIONS(197),
    [sym_identifier] = ACTIONS(199),
    [anon_sym_alias] = ACTIONS(199),
    [aux_sym_import_token1] = ACTIONS(199),
    [aux_sym_mod_token1] = ACTIONS(199),
    [anon_sym_SLASH] = ACTIONS(197),
    [anon_sym_PLUS] = ACTIONS(197),
    [anon_sym_LPAREN] = ACTIONS(197),
    [anon_sym_RPAREN] = ACTIONS(197),
    [anon_sym_arch] = ACTIONS(199),
    [anon_sym_num_cpus] = ACTIONS(199),
    [anon_sym_os] = ACTIONS(199),
    [anon_sym_os_family] = ACTIONS(199),
    [anon_sym_shell] = ACTIONS(199),
    [anon_sym_env_var] = ACTIONS(199),
    [anon_sym_env_var_or_default] = ACTIONS(199),
    [anon_sym_env] = ACTIONS(199),
    [anon_sym_is_dependency] = ACTIONS(199),
    [anon_sym_invocation_dir] = ACTIONS(199),
    [anon_sym_invocation_dir_native] = ACTIONS(199),
    [anon_sym_invocation_directory] = ACTIONS(199),
    [anon_sym_invocation_directory_native] = ACTIONS(199),
    [anon_sym_justfile] = ACTIONS(199),
    [anon_sym_justfile_dir] = ACTIONS(199),
    [anon_sym_justfile_directory] = ACTIONS(199),
    [anon_sym_source_dir] = ACTIONS(199),
    [anon_sym_source_directory] = ACTIONS(199),
    [anon_sym_source_file] = ACTIONS(199),
    [anon_sym_just_executable] = ACTIONS(199),
    [anon_sym_just_pid] = ACTIONS(199),
    [anon_sym_append] = ACTIONS(199),
    [anon_sym_prepend] = ACTIONS(199),
    [anon_sym_encode_uri_component] = ACTIONS(199),
    [anon_sym_quote] = ACTIONS(199),
    [anon_sym_replace] = ACTIONS(199),
    [anon_sym_replace_regex] = ACTIONS(199),
    [anon_sym_trim] = ACTIONS(199),
    [anon_sym_trim_end] = ACTIONS(199),
    [anon_sym_trim_end_match] = ACTIONS(199),
    [anon_sym_trim_end_matches] = ACTIONS(199),
    [anon_sym_trim_start] = ACTIONS(199),
    [anon_sym_trim_start_match] = ACTIONS(199),
    [anon_sym_trim_start_matches] = ACTIONS(199),
    [anon_sym_capitalize] = ACTIONS(199),
    [anon_sym_kebabcase] = ACTIONS(199),
    [anon_sym_lowercamelcase] = ACTIONS(199),
    [anon_sym_lowercase] = ACTIONS(199),
    [anon_sym_shoutykebabcase] = ACTIONS(199),
    [anon_sym_shoutysnakecase] = ACTIONS(199),
    [anon_sym_snakecase] = ACTIONS(199),
    [anon_sym_titlecase] = ACTIONS(199),
    [anon_sym_uppercamelcase] = ACTIONS(199),
    [anon_sym_uppercase] = ACTIONS(199),
    [anon_sym_absolute_path] = ACTIONS(199),
    [anon_sym_canonicalize] = ACTIONS(199),
    [anon_sym_extension] = ACTIONS(199),
    [anon_sym_file_name] = ACTIONS(199),
    [anon_sym_file_stem] = ACTIONS(199),
    [anon_sym_parent_dir] = ACTIONS(199),
    [anon_sym_parent_directory] = ACTIONS(199),
    [anon_sym_without_extension] = ACTIONS(199),
    [anon_sym_clean] = ACTIONS(199),
    [anon_sym_join] = ACTIONS(199),
    [anon_sym_path_exists] = ACTIONS(199),
    [anon_sym_error] = ACTIONS(199),
    [anon_sym_blake3] = ACTIONS(199),
    [anon_sym_blake3_file] = ACTIONS(199),
    [anon_sym_sha256] = ACTIONS(199),
    [anon_sym_sha256_file] = ACTIONS(199),
    [anon_sym_uuid] = ACTIONS(199),
    [anon_sym_choose] = ACTIONS(199),
    [anon_sym_datetime] = ACTIONS(199),
    [anon_sym_datetime_utc] = ACTIONS(199),
    [anon_sym_semver_matches] = ACTIONS(199),
    [anon_sym_cache_dir] = ACTIONS(199),
    [anon_sym_cache_directory] = ACTIONS(199),
    [anon_sym_config_dir] = ACTIONS(199),
    [anon_sym_config_directory] = ACTIONS(199),
    [anon_sym_config_local_dir] = ACTIONS(199),
    [anon_sym_config_local_directory] = ACTIONS(199),
    [anon_sym_data_dir] = ACTIONS(199),
    [anon_sym_data_directory] = ACTIONS(199),
    [anon_sym_data_local_dir] = ACTIONS(199),
    [anon_sym_data_local_directory] = ACTIONS(199),
    [anon_sym_executable_dir] = ACTIONS(199),
    [anon_sym_executable_directory] = ACTIONS(199),
    [anon_sym_home_dir] = ACTIONS(199),
    [anon_sym_home_directory] = ACTIONS(199),
    [anon_sym_COMMA] = ACTIONS(197),
    [anon_sym_set] = ACTIONS(199),
    [anon_sym_BQUOTE] = ACTIONS(199),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(197),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(197),
    [anon_sym_DQUOTE] = ACTIONS(199),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(197),
    [anon_sym_SQUOTE] = ACTIONS(199),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [42] = {
    [sym__setting_boolean] = STATE(52),
    [sym__setting_string] = STATE(52),
    [sym__setting_list] = STATE(52),
    [sym_comment] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(201),
    [sym_identifier] = ACTIONS(203),
    [anon_sym_alias] = ACTIONS(203),
    [anon_sym_COLON_EQ] = ACTIONS(205),
    [aux_sym_import_token1] = ACTIONS(203),
    [aux_sym_mod_token1] = ACTIONS(203),
    [anon_sym_LPAREN] = ACTIONS(201),
    [anon_sym_arch] = ACTIONS(203),
    [anon_sym_num_cpus] = ACTIONS(203),
    [anon_sym_os] = ACTIONS(203),
    [anon_sym_os_family] = ACTIONS(203),
    [anon_sym_shell] = ACTIONS(203),
    [anon_sym_env_var] = ACTIONS(203),
    [anon_sym_env_var_or_default] = ACTIONS(203),
    [anon_sym_env] = ACTIONS(203),
    [anon_sym_is_dependency] = ACTIONS(203),
    [anon_sym_invocation_dir] = ACTIONS(203),
    [anon_sym_invocation_dir_native] = ACTIONS(203),
    [anon_sym_invocation_directory] = ACTIONS(203),
    [anon_sym_invocation_directory_native] = ACTIONS(203),
    [anon_sym_justfile] = ACTIONS(203),
    [anon_sym_justfile_dir] = ACTIONS(203),
    [anon_sym_justfile_directory] = ACTIONS(203),
    [anon_sym_source_dir] = ACTIONS(203),
    [anon_sym_source_directory] = ACTIONS(203),
    [anon_sym_source_file] = ACTIONS(203),
    [anon_sym_just_executable] = ACTIONS(203),
    [anon_sym_just_pid] = ACTIONS(203),
    [anon_sym_append] = ACTIONS(203),
    [anon_sym_prepend] = ACTIONS(203),
    [anon_sym_encode_uri_component] = ACTIONS(203),
    [anon_sym_quote] = ACTIONS(203),
    [anon_sym_replace] = ACTIONS(203),
    [anon_sym_replace_regex] = ACTIONS(203),
    [anon_sym_trim] = ACTIONS(203),
    [anon_sym_trim_end] = ACTIONS(203),
    [anon_sym_trim_end_match] = ACTIONS(203),
    [anon_sym_trim_end_matches] = ACTIONS(203),
    [anon_sym_trim_start] = ACTIONS(203),
    [anon_sym_trim_start_match] = ACTIONS(203),
    [anon_sym_trim_start_matches] = ACTIONS(203),
    [anon_sym_capitalize] = ACTIONS(203),
    [anon_sym_kebabcase] = ACTIONS(203),
    [anon_sym_lowercamelcase] = ACTIONS(203),
    [anon_sym_lowercase] = ACTIONS(203),
    [anon_sym_shoutykebabcase] = ACTIONS(203),
    [anon_sym_shoutysnakecase] = ACTIONS(203),
    [anon_sym_snakecase] = ACTIONS(203),
    [anon_sym_titlecase] = ACTIONS(203),
    [anon_sym_uppercamelcase] = ACTIONS(203),
    [anon_sym_uppercase] = ACTIONS(203),
    [anon_sym_absolute_path] = ACTIONS(203),
    [anon_sym_canonicalize] = ACTIONS(203),
    [anon_sym_extension] = ACTIONS(203),
    [anon_sym_file_name] = ACTIONS(203),
    [anon_sym_file_stem] = ACTIONS(203),
    [anon_sym_parent_dir] = ACTIONS(203),
    [anon_sym_parent_directory] = ACTIONS(203),
    [anon_sym_without_extension] = ACTIONS(203),
    [anon_sym_clean] = ACTIONS(203),
    [anon_sym_join] = ACTIONS(203),
    [anon_sym_path_exists] = ACTIONS(203),
    [anon_sym_error] = ACTIONS(203),
    [anon_sym_blake3] = ACTIONS(203),
    [anon_sym_blake3_file] = ACTIONS(203),
    [anon_sym_sha256] = ACTIONS(203),
    [anon_sym_sha256_file] = ACTIONS(203),
    [anon_sym_uuid] = ACTIONS(203),
    [anon_sym_choose] = ACTIONS(203),
    [anon_sym_datetime] = ACTIONS(203),
    [anon_sym_datetime_utc] = ACTIONS(203),
    [anon_sym_semver_matches] = ACTIONS(203),
    [anon_sym_cache_dir] = ACTIONS(203),
    [anon_sym_cache_directory] = ACTIONS(203),
    [anon_sym_config_dir] = ACTIONS(203),
    [anon_sym_config_directory] = ACTIONS(203),
    [anon_sym_config_local_dir] = ACTIONS(203),
    [anon_sym_config_local_directory] = ACTIONS(203),
    [anon_sym_data_dir] = ACTIONS(203),
    [anon_sym_data_directory] = ACTIONS(203),
    [anon_sym_data_local_dir] = ACTIONS(203),
    [anon_sym_data_local_directory] = ACTIONS(203),
    [anon_sym_executable_dir] = ACTIONS(203),
    [anon_sym_executable_directory] = ACTIONS(203),
    [anon_sym_home_dir] = ACTIONS(203),
    [anon_sym_home_directory] = ACTIONS(203),
    [anon_sym_set] = ACTIONS(203),
    [anon_sym_BQUOTE] = ACTIONS(203),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(201),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(201),
    [anon_sym_DQUOTE] = ACTIONS(203),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(201),
    [anon_sym_SQUOTE] = ACTIONS(203),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [43] = {
    [sym_comment] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(207),
    [sym_identifier] = ACTIONS(209),
    [anon_sym_alias] = ACTIONS(209),
    [aux_sym_import_token1] = ACTIONS(209),
    [aux_sym_mod_token1] = ACTIONS(209),
    [anon_sym_SLASH] = ACTIONS(207),
    [anon_sym_PLUS] = ACTIONS(207),
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
    [anon_sym_parent_dir] = ACTIONS(209),
    [anon_sym_parent_directory] = ACTIONS(209),
    [anon_sym_without_extension] = ACTIONS(209),
    [anon_sym_clean] = ACTIONS(209),
    [anon_sym_join] = ACTIONS(209),
    [anon_sym_path_exists] = ACTIONS(209),
    [anon_sym_error] = ACTIONS(209),
    [anon_sym_blake3] = ACTIONS(209),
    [anon_sym_blake3_file] = ACTIONS(209),
    [anon_sym_sha256] = ACTIONS(209),
    [anon_sym_sha256_file] = ACTIONS(209),
    [anon_sym_uuid] = ACTIONS(209),
    [anon_sym_choose] = ACTIONS(209),
    [anon_sym_datetime] = ACTIONS(209),
    [anon_sym_datetime_utc] = ACTIONS(209),
    [anon_sym_semver_matches] = ACTIONS(209),
    [anon_sym_cache_dir] = ACTIONS(209),
    [anon_sym_cache_directory] = ACTIONS(209),
    [anon_sym_config_dir] = ACTIONS(209),
    [anon_sym_config_directory] = ACTIONS(209),
    [anon_sym_config_local_dir] = ACTIONS(209),
    [anon_sym_config_local_directory] = ACTIONS(209),
    [anon_sym_data_dir] = ACTIONS(209),
    [anon_sym_data_directory] = ACTIONS(209),
    [anon_sym_data_local_dir] = ACTIONS(209),
    [anon_sym_data_local_directory] = ACTIONS(209),
    [anon_sym_executable_dir] = ACTIONS(209),
    [anon_sym_executable_directory] = ACTIONS(209),
    [anon_sym_home_dir] = ACTIONS(209),
    [anon_sym_home_directory] = ACTIONS(209),
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
    [anon_sym_SLASH] = ACTIONS(211),
    [anon_sym_PLUS] = ACTIONS(211),
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
    [anon_sym_parent_dir] = ACTIONS(213),
    [anon_sym_parent_directory] = ACTIONS(213),
    [anon_sym_without_extension] = ACTIONS(213),
    [anon_sym_clean] = ACTIONS(213),
    [anon_sym_join] = ACTIONS(213),
    [anon_sym_path_exists] = ACTIONS(213),
    [anon_sym_error] = ACTIONS(213),
    [anon_sym_blake3] = ACTIONS(213),
    [anon_sym_blake3_file] = ACTIONS(213),
    [anon_sym_sha256] = ACTIONS(213),
    [anon_sym_sha256_file] = ACTIONS(213),
    [anon_sym_uuid] = ACTIONS(213),
    [anon_sym_choose] = ACTIONS(213),
    [anon_sym_datetime] = ACTIONS(213),
    [anon_sym_datetime_utc] = ACTIONS(213),
    [anon_sym_semver_matches] = ACTIONS(213),
    [anon_sym_cache_dir] = ACTIONS(213),
    [anon_sym_cache_directory] = ACTIONS(213),
    [anon_sym_config_dir] = ACTIONS(213),
    [anon_sym_config_directory] = ACTIONS(213),
    [anon_sym_config_local_dir] = ACTIONS(213),
    [anon_sym_config_local_directory] = ACTIONS(213),
    [anon_sym_data_dir] = ACTIONS(213),
    [anon_sym_data_directory] = ACTIONS(213),
    [anon_sym_data_local_dir] = ACTIONS(213),
    [anon_sym_data_local_directory] = ACTIONS(213),
    [anon_sym_executable_dir] = ACTIONS(213),
    [anon_sym_executable_directory] = ACTIONS(213),
    [anon_sym_home_dir] = ACTIONS(213),
    [anon_sym_home_directory] = ACTIONS(213),
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
    [anon_sym_SLASH] = ACTIONS(215),
    [anon_sym_PLUS] = ACTIONS(215),
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
    [anon_sym_parent_dir] = ACTIONS(217),
    [anon_sym_parent_directory] = ACTIONS(217),
    [anon_sym_without_extension] = ACTIONS(217),
    [anon_sym_clean] = ACTIONS(217),
    [anon_sym_join] = ACTIONS(217),
    [anon_sym_path_exists] = ACTIONS(217),
    [anon_sym_error] = ACTIONS(217),
    [anon_sym_blake3] = ACTIONS(217),
    [anon_sym_blake3_file] = ACTIONS(217),
    [anon_sym_sha256] = ACTIONS(217),
    [anon_sym_sha256_file] = ACTIONS(217),
    [anon_sym_uuid] = ACTIONS(217),
    [anon_sym_choose] = ACTIONS(217),
    [anon_sym_datetime] = ACTIONS(217),
    [anon_sym_datetime_utc] = ACTIONS(217),
    [anon_sym_semver_matches] = ACTIONS(217),
    [anon_sym_cache_dir] = ACTIONS(217),
    [anon_sym_cache_directory] = ACTIONS(217),
    [anon_sym_config_dir] = ACTIONS(217),
    [anon_sym_config_directory] = ACTIONS(217),
    [anon_sym_config_local_dir] = ACTIONS(217),
    [anon_sym_config_local_directory] = ACTIONS(217),
    [anon_sym_data_dir] = ACTIONS(217),
    [anon_sym_data_directory] = ACTIONS(217),
    [anon_sym_data_local_dir] = ACTIONS(217),
    [anon_sym_data_local_directory] = ACTIONS(217),
    [anon_sym_executable_dir] = ACTIONS(217),
    [anon_sym_executable_directory] = ACTIONS(217),
    [anon_sym_home_dir] = ACTIONS(217),
    [anon_sym_home_directory] = ACTIONS(217),
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
    [anon_sym_SLASH] = ACTIONS(219),
    [anon_sym_PLUS] = ACTIONS(219),
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
    [anon_sym_parent_dir] = ACTIONS(221),
    [anon_sym_parent_directory] = ACTIONS(221),
    [anon_sym_without_extension] = ACTIONS(221),
    [anon_sym_clean] = ACTIONS(221),
    [anon_sym_join] = ACTIONS(221),
    [anon_sym_path_exists] = ACTIONS(221),
    [anon_sym_error] = ACTIONS(221),
    [anon_sym_blake3] = ACTIONS(221),
    [anon_sym_blake3_file] = ACTIONS(221),
    [anon_sym_sha256] = ACTIONS(221),
    [anon_sym_sha256_file] = ACTIONS(221),
    [anon_sym_uuid] = ACTIONS(221),
    [anon_sym_choose] = ACTIONS(221),
    [anon_sym_datetime] = ACTIONS(221),
    [anon_sym_datetime_utc] = ACTIONS(221),
    [anon_sym_semver_matches] = ACTIONS(221),
    [anon_sym_cache_dir] = ACTIONS(221),
    [anon_sym_cache_directory] = ACTIONS(221),
    [anon_sym_config_dir] = ACTIONS(221),
    [anon_sym_config_directory] = ACTIONS(221),
    [anon_sym_config_local_dir] = ACTIONS(221),
    [anon_sym_config_local_directory] = ACTIONS(221),
    [anon_sym_data_dir] = ACTIONS(221),
    [anon_sym_data_directory] = ACTIONS(221),
    [anon_sym_data_local_dir] = ACTIONS(221),
    [anon_sym_data_local_directory] = ACTIONS(221),
    [anon_sym_executable_dir] = ACTIONS(221),
    [anon_sym_executable_directory] = ACTIONS(221),
    [anon_sym_home_dir] = ACTIONS(221),
    [anon_sym_home_directory] = ACTIONS(221),
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
    [anon_sym_RPAREN] = ACTIONS(223),
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
    [anon_sym_parent_dir] = ACTIONS(225),
    [anon_sym_parent_directory] = ACTIONS(225),
    [anon_sym_without_extension] = ACTIONS(225),
    [anon_sym_clean] = ACTIONS(225),
    [anon_sym_join] = ACTIONS(225),
    [anon_sym_path_exists] = ACTIONS(225),
    [anon_sym_error] = ACTIONS(225),
    [anon_sym_blake3] = ACTIONS(225),
    [anon_sym_blake3_file] = ACTIONS(225),
    [anon_sym_sha256] = ACTIONS(225),
    [anon_sym_sha256_file] = ACTIONS(225),
    [anon_sym_uuid] = ACTIONS(225),
    [anon_sym_choose] = ACTIONS(225),
    [anon_sym_datetime] = ACTIONS(225),
    [anon_sym_datetime_utc] = ACTIONS(225),
    [anon_sym_semver_matches] = ACTIONS(225),
    [anon_sym_cache_dir] = ACTIONS(225),
    [anon_sym_cache_directory] = ACTIONS(225),
    [anon_sym_config_dir] = ACTIONS(225),
    [anon_sym_config_directory] = ACTIONS(225),
    [anon_sym_config_local_dir] = ACTIONS(225),
    [anon_sym_config_local_directory] = ACTIONS(225),
    [anon_sym_data_dir] = ACTIONS(225),
    [anon_sym_data_directory] = ACTIONS(225),
    [anon_sym_data_local_dir] = ACTIONS(225),
    [anon_sym_data_local_directory] = ACTIONS(225),
    [anon_sym_executable_dir] = ACTIONS(225),
    [anon_sym_executable_directory] = ACTIONS(225),
    [anon_sym_home_dir] = ACTIONS(225),
    [anon_sym_home_directory] = ACTIONS(225),
    [anon_sym_COMMA] = ACTIONS(223),
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
    [sym__setting_boolean] = STATE(52),
    [sym_comment] = STATE(48),
    [ts_builtin_sym_end] = ACTIONS(201),
    [sym_identifier] = ACTIONS(203),
    [anon_sym_alias] = ACTIONS(203),
    [anon_sym_COLON_EQ] = ACTIONS(227),
    [aux_sym_import_token1] = ACTIONS(203),
    [aux_sym_mod_token1] = ACTIONS(203),
    [anon_sym_LPAREN] = ACTIONS(201),
    [anon_sym_arch] = ACTIONS(203),
    [anon_sym_num_cpus] = ACTIONS(203),
    [anon_sym_os] = ACTIONS(203),
    [anon_sym_os_family] = ACTIONS(203),
    [anon_sym_shell] = ACTIONS(203),
    [anon_sym_env_var] = ACTIONS(203),
    [anon_sym_env_var_or_default] = ACTIONS(203),
    [anon_sym_env] = ACTIONS(203),
    [anon_sym_is_dependency] = ACTIONS(203),
    [anon_sym_invocation_dir] = ACTIONS(203),
    [anon_sym_invocation_dir_native] = ACTIONS(203),
    [anon_sym_invocation_directory] = ACTIONS(203),
    [anon_sym_invocation_directory_native] = ACTIONS(203),
    [anon_sym_justfile] = ACTIONS(203),
    [anon_sym_justfile_dir] = ACTIONS(203),
    [anon_sym_justfile_directory] = ACTIONS(203),
    [anon_sym_source_dir] = ACTIONS(203),
    [anon_sym_source_directory] = ACTIONS(203),
    [anon_sym_source_file] = ACTIONS(203),
    [anon_sym_just_executable] = ACTIONS(203),
    [anon_sym_just_pid] = ACTIONS(203),
    [anon_sym_append] = ACTIONS(203),
    [anon_sym_prepend] = ACTIONS(203),
    [anon_sym_encode_uri_component] = ACTIONS(203),
    [anon_sym_quote] = ACTIONS(203),
    [anon_sym_replace] = ACTIONS(203),
    [anon_sym_replace_regex] = ACTIONS(203),
    [anon_sym_trim] = ACTIONS(203),
    [anon_sym_trim_end] = ACTIONS(203),
    [anon_sym_trim_end_match] = ACTIONS(203),
    [anon_sym_trim_end_matches] = ACTIONS(203),
    [anon_sym_trim_start] = ACTIONS(203),
    [anon_sym_trim_start_match] = ACTIONS(203),
    [anon_sym_trim_start_matches] = ACTIONS(203),
    [anon_sym_capitalize] = ACTIONS(203),
    [anon_sym_kebabcase] = ACTIONS(203),
    [anon_sym_lowercamelcase] = ACTIONS(203),
    [anon_sym_lowercase] = ACTIONS(203),
    [anon_sym_shoutykebabcase] = ACTIONS(203),
    [anon_sym_shoutysnakecase] = ACTIONS(203),
    [anon_sym_snakecase] = ACTIONS(203),
    [anon_sym_titlecase] = ACTIONS(203),
    [anon_sym_uppercamelcase] = ACTIONS(203),
    [anon_sym_uppercase] = ACTIONS(203),
    [anon_sym_absolute_path] = ACTIONS(203),
    [anon_sym_canonicalize] = ACTIONS(203),
    [anon_sym_extension] = ACTIONS(203),
    [anon_sym_file_name] = ACTIONS(203),
    [anon_sym_file_stem] = ACTIONS(203),
    [anon_sym_parent_dir] = ACTIONS(203),
    [anon_sym_parent_directory] = ACTIONS(203),
    [anon_sym_without_extension] = ACTIONS(203),
    [anon_sym_clean] = ACTIONS(203),
    [anon_sym_join] = ACTIONS(203),
    [anon_sym_path_exists] = ACTIONS(203),
    [anon_sym_error] = ACTIONS(203),
    [anon_sym_blake3] = ACTIONS(203),
    [anon_sym_blake3_file] = ACTIONS(203),
    [anon_sym_sha256] = ACTIONS(203),
    [anon_sym_sha256_file] = ACTIONS(203),
    [anon_sym_uuid] = ACTIONS(203),
    [anon_sym_choose] = ACTIONS(203),
    [anon_sym_datetime] = ACTIONS(203),
    [anon_sym_datetime_utc] = ACTIONS(203),
    [anon_sym_semver_matches] = ACTIONS(203),
    [anon_sym_cache_dir] = ACTIONS(203),
    [anon_sym_cache_directory] = ACTIONS(203),
    [anon_sym_config_dir] = ACTIONS(203),
    [anon_sym_config_directory] = ACTIONS(203),
    [anon_sym_config_local_dir] = ACTIONS(203),
    [anon_sym_config_local_directory] = ACTIONS(203),
    [anon_sym_data_dir] = ACTIONS(203),
    [anon_sym_data_directory] = ACTIONS(203),
    [anon_sym_data_local_dir] = ACTIONS(203),
    [anon_sym_data_local_directory] = ACTIONS(203),
    [anon_sym_executable_dir] = ACTIONS(203),
    [anon_sym_executable_directory] = ACTIONS(203),
    [anon_sym_home_dir] = ACTIONS(203),
    [anon_sym_home_directory] = ACTIONS(203),
    [anon_sym_set] = ACTIONS(203),
    [anon_sym_BQUOTE] = ACTIONS(203),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(201),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(201),
    [anon_sym_DQUOTE] = ACTIONS(203),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(201),
    [anon_sym_SQUOTE] = ACTIONS(203),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [49] = {
    [sym_comment] = STATE(49),
    [ts_builtin_sym_end] = ACTIONS(229),
    [sym_identifier] = ACTIONS(231),
    [anon_sym_alias] = ACTIONS(231),
    [aux_sym_import_token1] = ACTIONS(231),
    [aux_sym_mod_token1] = ACTIONS(231),
    [anon_sym_LPAREN] = ACTIONS(229),
    [anon_sym_arch] = ACTIONS(231),
    [anon_sym_num_cpus] = ACTIONS(231),
    [anon_sym_os] = ACTIONS(231),
    [anon_sym_os_family] = ACTIONS(231),
    [anon_sym_shell] = ACTIONS(231),
    [anon_sym_env_var] = ACTIONS(231),
    [anon_sym_env_var_or_default] = ACTIONS(231),
    [anon_sym_env] = ACTIONS(231),
    [anon_sym_is_dependency] = ACTIONS(231),
    [anon_sym_invocation_dir] = ACTIONS(231),
    [anon_sym_invocation_dir_native] = ACTIONS(231),
    [anon_sym_invocation_directory] = ACTIONS(231),
    [anon_sym_invocation_directory_native] = ACTIONS(231),
    [anon_sym_justfile] = ACTIONS(231),
    [anon_sym_justfile_dir] = ACTIONS(231),
    [anon_sym_justfile_directory] = ACTIONS(231),
    [anon_sym_source_dir] = ACTIONS(231),
    [anon_sym_source_directory] = ACTIONS(231),
    [anon_sym_source_file] = ACTIONS(231),
    [anon_sym_just_executable] = ACTIONS(231),
    [anon_sym_just_pid] = ACTIONS(231),
    [anon_sym_append] = ACTIONS(231),
    [anon_sym_prepend] = ACTIONS(231),
    [anon_sym_encode_uri_component] = ACTIONS(231),
    [anon_sym_quote] = ACTIONS(231),
    [anon_sym_replace] = ACTIONS(231),
    [anon_sym_replace_regex] = ACTIONS(231),
    [anon_sym_trim] = ACTIONS(231),
    [anon_sym_trim_end] = ACTIONS(231),
    [anon_sym_trim_end_match] = ACTIONS(231),
    [anon_sym_trim_end_matches] = ACTIONS(231),
    [anon_sym_trim_start] = ACTIONS(231),
    [anon_sym_trim_start_match] = ACTIONS(231),
    [anon_sym_trim_start_matches] = ACTIONS(231),
    [anon_sym_capitalize] = ACTIONS(231),
    [anon_sym_kebabcase] = ACTIONS(231),
    [anon_sym_lowercamelcase] = ACTIONS(231),
    [anon_sym_lowercase] = ACTIONS(231),
    [anon_sym_shoutykebabcase] = ACTIONS(231),
    [anon_sym_shoutysnakecase] = ACTIONS(231),
    [anon_sym_snakecase] = ACTIONS(231),
    [anon_sym_titlecase] = ACTIONS(231),
    [anon_sym_uppercamelcase] = ACTIONS(231),
    [anon_sym_uppercase] = ACTIONS(231),
    [anon_sym_absolute_path] = ACTIONS(231),
    [anon_sym_canonicalize] = ACTIONS(231),
    [anon_sym_extension] = ACTIONS(231),
    [anon_sym_file_name] = ACTIONS(231),
    [anon_sym_file_stem] = ACTIONS(231),
    [anon_sym_parent_dir] = ACTIONS(231),
    [anon_sym_parent_directory] = ACTIONS(231),
    [anon_sym_without_extension] = ACTIONS(231),
    [anon_sym_clean] = ACTIONS(231),
    [anon_sym_join] = ACTIONS(231),
    [anon_sym_path_exists] = ACTIONS(231),
    [anon_sym_error] = ACTIONS(231),
    [anon_sym_blake3] = ACTIONS(231),
    [anon_sym_blake3_file] = ACTIONS(231),
    [anon_sym_sha256] = ACTIONS(231),
    [anon_sym_sha256_file] = ACTIONS(231),
    [anon_sym_uuid] = ACTIONS(231),
    [anon_sym_choose] = ACTIONS(231),
    [anon_sym_datetime] = ACTIONS(231),
    [anon_sym_datetime_utc] = ACTIONS(231),
    [anon_sym_semver_matches] = ACTIONS(231),
    [anon_sym_cache_dir] = ACTIONS(231),
    [anon_sym_cache_directory] = ACTIONS(231),
    [anon_sym_config_dir] = ACTIONS(231),
    [anon_sym_config_directory] = ACTIONS(231),
    [anon_sym_config_local_dir] = ACTIONS(231),
    [anon_sym_config_local_directory] = ACTIONS(231),
    [anon_sym_data_dir] = ACTIONS(231),
    [anon_sym_data_directory] = ACTIONS(231),
    [anon_sym_data_local_dir] = ACTIONS(231),
    [anon_sym_data_local_directory] = ACTIONS(231),
    [anon_sym_executable_dir] = ACTIONS(231),
    [anon_sym_executable_directory] = ACTIONS(231),
    [anon_sym_home_dir] = ACTIONS(231),
    [anon_sym_home_directory] = ACTIONS(231),
    [anon_sym_set] = ACTIONS(231),
    [anon_sym_BQUOTE] = ACTIONS(231),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(229),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(229),
    [anon_sym_DQUOTE] = ACTIONS(231),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(229),
    [anon_sym_SQUOTE] = ACTIONS(231),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [50] = {
    [sym_comment] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(233),
    [sym_identifier] = ACTIONS(235),
    [anon_sym_alias] = ACTIONS(235),
    [aux_sym_import_token1] = ACTIONS(235),
    [aux_sym_mod_token1] = ACTIONS(235),
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_arch] = ACTIONS(235),
    [anon_sym_num_cpus] = ACTIONS(235),
    [anon_sym_os] = ACTIONS(235),
    [anon_sym_os_family] = ACTIONS(235),
    [anon_sym_shell] = ACTIONS(235),
    [anon_sym_env_var] = ACTIONS(235),
    [anon_sym_env_var_or_default] = ACTIONS(235),
    [anon_sym_env] = ACTIONS(235),
    [anon_sym_is_dependency] = ACTIONS(235),
    [anon_sym_invocation_dir] = ACTIONS(235),
    [anon_sym_invocation_dir_native] = ACTIONS(235),
    [anon_sym_invocation_directory] = ACTIONS(235),
    [anon_sym_invocation_directory_native] = ACTIONS(235),
    [anon_sym_justfile] = ACTIONS(235),
    [anon_sym_justfile_dir] = ACTIONS(235),
    [anon_sym_justfile_directory] = ACTIONS(235),
    [anon_sym_source_dir] = ACTIONS(235),
    [anon_sym_source_directory] = ACTIONS(235),
    [anon_sym_source_file] = ACTIONS(235),
    [anon_sym_just_executable] = ACTIONS(235),
    [anon_sym_just_pid] = ACTIONS(235),
    [anon_sym_append] = ACTIONS(235),
    [anon_sym_prepend] = ACTIONS(235),
    [anon_sym_encode_uri_component] = ACTIONS(235),
    [anon_sym_quote] = ACTIONS(235),
    [anon_sym_replace] = ACTIONS(235),
    [anon_sym_replace_regex] = ACTIONS(235),
    [anon_sym_trim] = ACTIONS(235),
    [anon_sym_trim_end] = ACTIONS(235),
    [anon_sym_trim_end_match] = ACTIONS(235),
    [anon_sym_trim_end_matches] = ACTIONS(235),
    [anon_sym_trim_start] = ACTIONS(235),
    [anon_sym_trim_start_match] = ACTIONS(235),
    [anon_sym_trim_start_matches] = ACTIONS(235),
    [anon_sym_capitalize] = ACTIONS(235),
    [anon_sym_kebabcase] = ACTIONS(235),
    [anon_sym_lowercamelcase] = ACTIONS(235),
    [anon_sym_lowercase] = ACTIONS(235),
    [anon_sym_shoutykebabcase] = ACTIONS(235),
    [anon_sym_shoutysnakecase] = ACTIONS(235),
    [anon_sym_snakecase] = ACTIONS(235),
    [anon_sym_titlecase] = ACTIONS(235),
    [anon_sym_uppercamelcase] = ACTIONS(235),
    [anon_sym_uppercase] = ACTIONS(235),
    [anon_sym_absolute_path] = ACTIONS(235),
    [anon_sym_canonicalize] = ACTIONS(235),
    [anon_sym_extension] = ACTIONS(235),
    [anon_sym_file_name] = ACTIONS(235),
    [anon_sym_file_stem] = ACTIONS(235),
    [anon_sym_parent_dir] = ACTIONS(235),
    [anon_sym_parent_directory] = ACTIONS(235),
    [anon_sym_without_extension] = ACTIONS(235),
    [anon_sym_clean] = ACTIONS(235),
    [anon_sym_join] = ACTIONS(235),
    [anon_sym_path_exists] = ACTIONS(235),
    [anon_sym_error] = ACTIONS(235),
    [anon_sym_blake3] = ACTIONS(235),
    [anon_sym_blake3_file] = ACTIONS(235),
    [anon_sym_sha256] = ACTIONS(235),
    [anon_sym_sha256_file] = ACTIONS(235),
    [anon_sym_uuid] = ACTIONS(235),
    [anon_sym_choose] = ACTIONS(235),
    [anon_sym_datetime] = ACTIONS(235),
    [anon_sym_datetime_utc] = ACTIONS(235),
    [anon_sym_semver_matches] = ACTIONS(235),
    [anon_sym_cache_dir] = ACTIONS(235),
    [anon_sym_cache_directory] = ACTIONS(235),
    [anon_sym_config_dir] = ACTIONS(235),
    [anon_sym_config_directory] = ACTIONS(235),
    [anon_sym_config_local_dir] = ACTIONS(235),
    [anon_sym_config_local_directory] = ACTIONS(235),
    [anon_sym_data_dir] = ACTIONS(235),
    [anon_sym_data_directory] = ACTIONS(235),
    [anon_sym_data_local_dir] = ACTIONS(235),
    [anon_sym_data_local_directory] = ACTIONS(235),
    [anon_sym_executable_dir] = ACTIONS(235),
    [anon_sym_executable_directory] = ACTIONS(235),
    [anon_sym_home_dir] = ACTIONS(235),
    [anon_sym_home_directory] = ACTIONS(235),
    [anon_sym_set] = ACTIONS(235),
    [anon_sym_BQUOTE] = ACTIONS(235),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(233),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(233),
    [anon_sym_DQUOTE] = ACTIONS(235),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(233),
    [anon_sym_SQUOTE] = ACTIONS(235),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [51] = {
    [sym_comment] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(237),
    [sym_identifier] = ACTIONS(239),
    [anon_sym_alias] = ACTIONS(239),
    [aux_sym_import_token1] = ACTIONS(239),
    [aux_sym_mod_token1] = ACTIONS(239),
    [anon_sym_LPAREN] = ACTIONS(237),
    [anon_sym_arch] = ACTIONS(239),
    [anon_sym_num_cpus] = ACTIONS(239),
    [anon_sym_os] = ACTIONS(239),
    [anon_sym_os_family] = ACTIONS(239),
    [anon_sym_shell] = ACTIONS(239),
    [anon_sym_env_var] = ACTIONS(239),
    [anon_sym_env_var_or_default] = ACTIONS(239),
    [anon_sym_env] = ACTIONS(239),
    [anon_sym_is_dependency] = ACTIONS(239),
    [anon_sym_invocation_dir] = ACTIONS(239),
    [anon_sym_invocation_dir_native] = ACTIONS(239),
    [anon_sym_invocation_directory] = ACTIONS(239),
    [anon_sym_invocation_directory_native] = ACTIONS(239),
    [anon_sym_justfile] = ACTIONS(239),
    [anon_sym_justfile_dir] = ACTIONS(239),
    [anon_sym_justfile_directory] = ACTIONS(239),
    [anon_sym_source_dir] = ACTIONS(239),
    [anon_sym_source_directory] = ACTIONS(239),
    [anon_sym_source_file] = ACTIONS(239),
    [anon_sym_just_executable] = ACTIONS(239),
    [anon_sym_just_pid] = ACTIONS(239),
    [anon_sym_append] = ACTIONS(239),
    [anon_sym_prepend] = ACTIONS(239),
    [anon_sym_encode_uri_component] = ACTIONS(239),
    [anon_sym_quote] = ACTIONS(239),
    [anon_sym_replace] = ACTIONS(239),
    [anon_sym_replace_regex] = ACTIONS(239),
    [anon_sym_trim] = ACTIONS(239),
    [anon_sym_trim_end] = ACTIONS(239),
    [anon_sym_trim_end_match] = ACTIONS(239),
    [anon_sym_trim_end_matches] = ACTIONS(239),
    [anon_sym_trim_start] = ACTIONS(239),
    [anon_sym_trim_start_match] = ACTIONS(239),
    [anon_sym_trim_start_matches] = ACTIONS(239),
    [anon_sym_capitalize] = ACTIONS(239),
    [anon_sym_kebabcase] = ACTIONS(239),
    [anon_sym_lowercamelcase] = ACTIONS(239),
    [anon_sym_lowercase] = ACTIONS(239),
    [anon_sym_shoutykebabcase] = ACTIONS(239),
    [anon_sym_shoutysnakecase] = ACTIONS(239),
    [anon_sym_snakecase] = ACTIONS(239),
    [anon_sym_titlecase] = ACTIONS(239),
    [anon_sym_uppercamelcase] = ACTIONS(239),
    [anon_sym_uppercase] = ACTIONS(239),
    [anon_sym_absolute_path] = ACTIONS(239),
    [anon_sym_canonicalize] = ACTIONS(239),
    [anon_sym_extension] = ACTIONS(239),
    [anon_sym_file_name] = ACTIONS(239),
    [anon_sym_file_stem] = ACTIONS(239),
    [anon_sym_parent_dir] = ACTIONS(239),
    [anon_sym_parent_directory] = ACTIONS(239),
    [anon_sym_without_extension] = ACTIONS(239),
    [anon_sym_clean] = ACTIONS(239),
    [anon_sym_join] = ACTIONS(239),
    [anon_sym_path_exists] = ACTIONS(239),
    [anon_sym_error] = ACTIONS(239),
    [anon_sym_blake3] = ACTIONS(239),
    [anon_sym_blake3_file] = ACTIONS(239),
    [anon_sym_sha256] = ACTIONS(239),
    [anon_sym_sha256_file] = ACTIONS(239),
    [anon_sym_uuid] = ACTIONS(239),
    [anon_sym_choose] = ACTIONS(239),
    [anon_sym_datetime] = ACTIONS(239),
    [anon_sym_datetime_utc] = ACTIONS(239),
    [anon_sym_semver_matches] = ACTIONS(239),
    [anon_sym_cache_dir] = ACTIONS(239),
    [anon_sym_cache_directory] = ACTIONS(239),
    [anon_sym_config_dir] = ACTIONS(239),
    [anon_sym_config_directory] = ACTIONS(239),
    [anon_sym_config_local_dir] = ACTIONS(239),
    [anon_sym_config_local_directory] = ACTIONS(239),
    [anon_sym_data_dir] = ACTIONS(239),
    [anon_sym_data_directory] = ACTIONS(239),
    [anon_sym_data_local_dir] = ACTIONS(239),
    [anon_sym_data_local_directory] = ACTIONS(239),
    [anon_sym_executable_dir] = ACTIONS(239),
    [anon_sym_executable_directory] = ACTIONS(239),
    [anon_sym_home_dir] = ACTIONS(239),
    [anon_sym_home_directory] = ACTIONS(239),
    [anon_sym_set] = ACTIONS(239),
    [anon_sym_BQUOTE] = ACTIONS(239),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(237),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(237),
    [anon_sym_DQUOTE] = ACTIONS(239),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(237),
    [anon_sym_SQUOTE] = ACTIONS(239),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [52] = {
    [sym_comment] = STATE(52),
    [ts_builtin_sym_end] = ACTIONS(241),
    [sym_identifier] = ACTIONS(243),
    [anon_sym_alias] = ACTIONS(243),
    [aux_sym_import_token1] = ACTIONS(243),
    [aux_sym_mod_token1] = ACTIONS(243),
    [anon_sym_LPAREN] = ACTIONS(241),
    [anon_sym_arch] = ACTIONS(243),
    [anon_sym_num_cpus] = ACTIONS(243),
    [anon_sym_os] = ACTIONS(243),
    [anon_sym_os_family] = ACTIONS(243),
    [anon_sym_shell] = ACTIONS(243),
    [anon_sym_env_var] = ACTIONS(243),
    [anon_sym_env_var_or_default] = ACTIONS(243),
    [anon_sym_env] = ACTIONS(243),
    [anon_sym_is_dependency] = ACTIONS(243),
    [anon_sym_invocation_dir] = ACTIONS(243),
    [anon_sym_invocation_dir_native] = ACTIONS(243),
    [anon_sym_invocation_directory] = ACTIONS(243),
    [anon_sym_invocation_directory_native] = ACTIONS(243),
    [anon_sym_justfile] = ACTIONS(243),
    [anon_sym_justfile_dir] = ACTIONS(243),
    [anon_sym_justfile_directory] = ACTIONS(243),
    [anon_sym_source_dir] = ACTIONS(243),
    [anon_sym_source_directory] = ACTIONS(243),
    [anon_sym_source_file] = ACTIONS(243),
    [anon_sym_just_executable] = ACTIONS(243),
    [anon_sym_just_pid] = ACTIONS(243),
    [anon_sym_append] = ACTIONS(243),
    [anon_sym_prepend] = ACTIONS(243),
    [anon_sym_encode_uri_component] = ACTIONS(243),
    [anon_sym_quote] = ACTIONS(243),
    [anon_sym_replace] = ACTIONS(243),
    [anon_sym_replace_regex] = ACTIONS(243),
    [anon_sym_trim] = ACTIONS(243),
    [anon_sym_trim_end] = ACTIONS(243),
    [anon_sym_trim_end_match] = ACTIONS(243),
    [anon_sym_trim_end_matches] = ACTIONS(243),
    [anon_sym_trim_start] = ACTIONS(243),
    [anon_sym_trim_start_match] = ACTIONS(243),
    [anon_sym_trim_start_matches] = ACTIONS(243),
    [anon_sym_capitalize] = ACTIONS(243),
    [anon_sym_kebabcase] = ACTIONS(243),
    [anon_sym_lowercamelcase] = ACTIONS(243),
    [anon_sym_lowercase] = ACTIONS(243),
    [anon_sym_shoutykebabcase] = ACTIONS(243),
    [anon_sym_shoutysnakecase] = ACTIONS(243),
    [anon_sym_snakecase] = ACTIONS(243),
    [anon_sym_titlecase] = ACTIONS(243),
    [anon_sym_uppercamelcase] = ACTIONS(243),
    [anon_sym_uppercase] = ACTIONS(243),
    [anon_sym_absolute_path] = ACTIONS(243),
    [anon_sym_canonicalize] = ACTIONS(243),
    [anon_sym_extension] = ACTIONS(243),
    [anon_sym_file_name] = ACTIONS(243),
    [anon_sym_file_stem] = ACTIONS(243),
    [anon_sym_parent_dir] = ACTIONS(243),
    [anon_sym_parent_directory] = ACTIONS(243),
    [anon_sym_without_extension] = ACTIONS(243),
    [anon_sym_clean] = ACTIONS(243),
    [anon_sym_join] = ACTIONS(243),
    [anon_sym_path_exists] = ACTIONS(243),
    [anon_sym_error] = ACTIONS(243),
    [anon_sym_blake3] = ACTIONS(243),
    [anon_sym_blake3_file] = ACTIONS(243),
    [anon_sym_sha256] = ACTIONS(243),
    [anon_sym_sha256_file] = ACTIONS(243),
    [anon_sym_uuid] = ACTIONS(243),
    [anon_sym_choose] = ACTIONS(243),
    [anon_sym_datetime] = ACTIONS(243),
    [anon_sym_datetime_utc] = ACTIONS(243),
    [anon_sym_semver_matches] = ACTIONS(243),
    [anon_sym_cache_dir] = ACTIONS(243),
    [anon_sym_cache_directory] = ACTIONS(243),
    [anon_sym_config_dir] = ACTIONS(243),
    [anon_sym_config_directory] = ACTIONS(243),
    [anon_sym_config_local_dir] = ACTIONS(243),
    [anon_sym_config_local_directory] = ACTIONS(243),
    [anon_sym_data_dir] = ACTIONS(243),
    [anon_sym_data_directory] = ACTIONS(243),
    [anon_sym_data_local_dir] = ACTIONS(243),
    [anon_sym_data_local_directory] = ACTIONS(243),
    [anon_sym_executable_dir] = ACTIONS(243),
    [anon_sym_executable_directory] = ACTIONS(243),
    [anon_sym_home_dir] = ACTIONS(243),
    [anon_sym_home_directory] = ACTIONS(243),
    [anon_sym_set] = ACTIONS(243),
    [anon_sym_BQUOTE] = ACTIONS(243),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(241),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(241),
    [anon_sym_DQUOTE] = ACTIONS(243),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(241),
    [anon_sym_SQUOTE] = ACTIONS(243),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [53] = {
    [sym_comment] = STATE(53),
    [ts_builtin_sym_end] = ACTIONS(245),
    [sym_identifier] = ACTIONS(247),
    [anon_sym_alias] = ACTIONS(247),
    [aux_sym_import_token1] = ACTIONS(247),
    [aux_sym_mod_token1] = ACTIONS(247),
    [anon_sym_LPAREN] = ACTIONS(245),
    [anon_sym_arch] = ACTIONS(247),
    [anon_sym_num_cpus] = ACTIONS(247),
    [anon_sym_os] = ACTIONS(247),
    [anon_sym_os_family] = ACTIONS(247),
    [anon_sym_shell] = ACTIONS(247),
    [anon_sym_env_var] = ACTIONS(247),
    [anon_sym_env_var_or_default] = ACTIONS(247),
    [anon_sym_env] = ACTIONS(247),
    [anon_sym_is_dependency] = ACTIONS(247),
    [anon_sym_invocation_dir] = ACTIONS(247),
    [anon_sym_invocation_dir_native] = ACTIONS(247),
    [anon_sym_invocation_directory] = ACTIONS(247),
    [anon_sym_invocation_directory_native] = ACTIONS(247),
    [anon_sym_justfile] = ACTIONS(247),
    [anon_sym_justfile_dir] = ACTIONS(247),
    [anon_sym_justfile_directory] = ACTIONS(247),
    [anon_sym_source_dir] = ACTIONS(247),
    [anon_sym_source_directory] = ACTIONS(247),
    [anon_sym_source_file] = ACTIONS(247),
    [anon_sym_just_executable] = ACTIONS(247),
    [anon_sym_just_pid] = ACTIONS(247),
    [anon_sym_append] = ACTIONS(247),
    [anon_sym_prepend] = ACTIONS(247),
    [anon_sym_encode_uri_component] = ACTIONS(247),
    [anon_sym_quote] = ACTIONS(247),
    [anon_sym_replace] = ACTIONS(247),
    [anon_sym_replace_regex] = ACTIONS(247),
    [anon_sym_trim] = ACTIONS(247),
    [anon_sym_trim_end] = ACTIONS(247),
    [anon_sym_trim_end_match] = ACTIONS(247),
    [anon_sym_trim_end_matches] = ACTIONS(247),
    [anon_sym_trim_start] = ACTIONS(247),
    [anon_sym_trim_start_match] = ACTIONS(247),
    [anon_sym_trim_start_matches] = ACTIONS(247),
    [anon_sym_capitalize] = ACTIONS(247),
    [anon_sym_kebabcase] = ACTIONS(247),
    [anon_sym_lowercamelcase] = ACTIONS(247),
    [anon_sym_lowercase] = ACTIONS(247),
    [anon_sym_shoutykebabcase] = ACTIONS(247),
    [anon_sym_shoutysnakecase] = ACTIONS(247),
    [anon_sym_snakecase] = ACTIONS(247),
    [anon_sym_titlecase] = ACTIONS(247),
    [anon_sym_uppercamelcase] = ACTIONS(247),
    [anon_sym_uppercase] = ACTIONS(247),
    [anon_sym_absolute_path] = ACTIONS(247),
    [anon_sym_canonicalize] = ACTIONS(247),
    [anon_sym_extension] = ACTIONS(247),
    [anon_sym_file_name] = ACTIONS(247),
    [anon_sym_file_stem] = ACTIONS(247),
    [anon_sym_parent_dir] = ACTIONS(247),
    [anon_sym_parent_directory] = ACTIONS(247),
    [anon_sym_without_extension] = ACTIONS(247),
    [anon_sym_clean] = ACTIONS(247),
    [anon_sym_join] = ACTIONS(247),
    [anon_sym_path_exists] = ACTIONS(247),
    [anon_sym_error] = ACTIONS(247),
    [anon_sym_blake3] = ACTIONS(247),
    [anon_sym_blake3_file] = ACTIONS(247),
    [anon_sym_sha256] = ACTIONS(247),
    [anon_sym_sha256_file] = ACTIONS(247),
    [anon_sym_uuid] = ACTIONS(247),
    [anon_sym_choose] = ACTIONS(247),
    [anon_sym_datetime] = ACTIONS(247),
    [anon_sym_datetime_utc] = ACTIONS(247),
    [anon_sym_semver_matches] = ACTIONS(247),
    [anon_sym_cache_dir] = ACTIONS(247),
    [anon_sym_cache_directory] = ACTIONS(247),
    [anon_sym_config_dir] = ACTIONS(247),
    [anon_sym_config_directory] = ACTIONS(247),
    [anon_sym_config_local_dir] = ACTIONS(247),
    [anon_sym_config_local_directory] = ACTIONS(247),
    [anon_sym_data_dir] = ACTIONS(247),
    [anon_sym_data_directory] = ACTIONS(247),
    [anon_sym_data_local_dir] = ACTIONS(247),
    [anon_sym_data_local_directory] = ACTIONS(247),
    [anon_sym_executable_dir] = ACTIONS(247),
    [anon_sym_executable_directory] = ACTIONS(247),
    [anon_sym_home_dir] = ACTIONS(247),
    [anon_sym_home_directory] = ACTIONS(247),
    [anon_sym_set] = ACTIONS(247),
    [anon_sym_BQUOTE] = ACTIONS(247),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(245),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(245),
    [anon_sym_DQUOTE] = ACTIONS(247),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(245),
    [anon_sym_SQUOTE] = ACTIONS(247),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [54] = {
    [sym_comment] = STATE(54),
    [ts_builtin_sym_end] = ACTIONS(249),
    [sym_identifier] = ACTIONS(251),
    [anon_sym_alias] = ACTIONS(251),
    [aux_sym_import_token1] = ACTIONS(251),
    [aux_sym_mod_token1] = ACTIONS(251),
    [anon_sym_LPAREN] = ACTIONS(249),
    [anon_sym_arch] = ACTIONS(251),
    [anon_sym_num_cpus] = ACTIONS(251),
    [anon_sym_os] = ACTIONS(251),
    [anon_sym_os_family] = ACTIONS(251),
    [anon_sym_shell] = ACTIONS(251),
    [anon_sym_env_var] = ACTIONS(251),
    [anon_sym_env_var_or_default] = ACTIONS(251),
    [anon_sym_env] = ACTIONS(251),
    [anon_sym_is_dependency] = ACTIONS(251),
    [anon_sym_invocation_dir] = ACTIONS(251),
    [anon_sym_invocation_dir_native] = ACTIONS(251),
    [anon_sym_invocation_directory] = ACTIONS(251),
    [anon_sym_invocation_directory_native] = ACTIONS(251),
    [anon_sym_justfile] = ACTIONS(251),
    [anon_sym_justfile_dir] = ACTIONS(251),
    [anon_sym_justfile_directory] = ACTIONS(251),
    [anon_sym_source_dir] = ACTIONS(251),
    [anon_sym_source_directory] = ACTIONS(251),
    [anon_sym_source_file] = ACTIONS(251),
    [anon_sym_just_executable] = ACTIONS(251),
    [anon_sym_just_pid] = ACTIONS(251),
    [anon_sym_append] = ACTIONS(251),
    [anon_sym_prepend] = ACTIONS(251),
    [anon_sym_encode_uri_component] = ACTIONS(251),
    [anon_sym_quote] = ACTIONS(251),
    [anon_sym_replace] = ACTIONS(251),
    [anon_sym_replace_regex] = ACTIONS(251),
    [anon_sym_trim] = ACTIONS(251),
    [anon_sym_trim_end] = ACTIONS(251),
    [anon_sym_trim_end_match] = ACTIONS(251),
    [anon_sym_trim_end_matches] = ACTIONS(251),
    [anon_sym_trim_start] = ACTIONS(251),
    [anon_sym_trim_start_match] = ACTIONS(251),
    [anon_sym_trim_start_matches] = ACTIONS(251),
    [anon_sym_capitalize] = ACTIONS(251),
    [anon_sym_kebabcase] = ACTIONS(251),
    [anon_sym_lowercamelcase] = ACTIONS(251),
    [anon_sym_lowercase] = ACTIONS(251),
    [anon_sym_shoutykebabcase] = ACTIONS(251),
    [anon_sym_shoutysnakecase] = ACTIONS(251),
    [anon_sym_snakecase] = ACTIONS(251),
    [anon_sym_titlecase] = ACTIONS(251),
    [anon_sym_uppercamelcase] = ACTIONS(251),
    [anon_sym_uppercase] = ACTIONS(251),
    [anon_sym_absolute_path] = ACTIONS(251),
    [anon_sym_canonicalize] = ACTIONS(251),
    [anon_sym_extension] = ACTIONS(251),
    [anon_sym_file_name] = ACTIONS(251),
    [anon_sym_file_stem] = ACTIONS(251),
    [anon_sym_parent_dir] = ACTIONS(251),
    [anon_sym_parent_directory] = ACTIONS(251),
    [anon_sym_without_extension] = ACTIONS(251),
    [anon_sym_clean] = ACTIONS(251),
    [anon_sym_join] = ACTIONS(251),
    [anon_sym_path_exists] = ACTIONS(251),
    [anon_sym_error] = ACTIONS(251),
    [anon_sym_blake3] = ACTIONS(251),
    [anon_sym_blake3_file] = ACTIONS(251),
    [anon_sym_sha256] = ACTIONS(251),
    [anon_sym_sha256_file] = ACTIONS(251),
    [anon_sym_uuid] = ACTIONS(251),
    [anon_sym_choose] = ACTIONS(251),
    [anon_sym_datetime] = ACTIONS(251),
    [anon_sym_datetime_utc] = ACTIONS(251),
    [anon_sym_semver_matches] = ACTIONS(251),
    [anon_sym_cache_dir] = ACTIONS(251),
    [anon_sym_cache_directory] = ACTIONS(251),
    [anon_sym_config_dir] = ACTIONS(251),
    [anon_sym_config_directory] = ACTIONS(251),
    [anon_sym_config_local_dir] = ACTIONS(251),
    [anon_sym_config_local_directory] = ACTIONS(251),
    [anon_sym_data_dir] = ACTIONS(251),
    [anon_sym_data_directory] = ACTIONS(251),
    [anon_sym_data_local_dir] = ACTIONS(251),
    [anon_sym_data_local_directory] = ACTIONS(251),
    [anon_sym_executable_dir] = ACTIONS(251),
    [anon_sym_executable_directory] = ACTIONS(251),
    [anon_sym_home_dir] = ACTIONS(251),
    [anon_sym_home_directory] = ACTIONS(251),
    [anon_sym_set] = ACTIONS(251),
    [anon_sym_BQUOTE] = ACTIONS(251),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(249),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(249),
    [anon_sym_DQUOTE] = ACTIONS(251),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(249),
    [anon_sym_SQUOTE] = ACTIONS(251),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [55] = {
    [sym_comment] = STATE(55),
    [ts_builtin_sym_end] = ACTIONS(253),
    [sym_identifier] = ACTIONS(255),
    [anon_sym_alias] = ACTIONS(255),
    [aux_sym_import_token1] = ACTIONS(255),
    [aux_sym_mod_token1] = ACTIONS(255),
    [anon_sym_LPAREN] = ACTIONS(253),
    [anon_sym_arch] = ACTIONS(255),
    [anon_sym_num_cpus] = ACTIONS(255),
    [anon_sym_os] = ACTIONS(255),
    [anon_sym_os_family] = ACTIONS(255),
    [anon_sym_shell] = ACTIONS(255),
    [anon_sym_env_var] = ACTIONS(255),
    [anon_sym_env_var_or_default] = ACTIONS(255),
    [anon_sym_env] = ACTIONS(255),
    [anon_sym_is_dependency] = ACTIONS(255),
    [anon_sym_invocation_dir] = ACTIONS(255),
    [anon_sym_invocation_dir_native] = ACTIONS(255),
    [anon_sym_invocation_directory] = ACTIONS(255),
    [anon_sym_invocation_directory_native] = ACTIONS(255),
    [anon_sym_justfile] = ACTIONS(255),
    [anon_sym_justfile_dir] = ACTIONS(255),
    [anon_sym_justfile_directory] = ACTIONS(255),
    [anon_sym_source_dir] = ACTIONS(255),
    [anon_sym_source_directory] = ACTIONS(255),
    [anon_sym_source_file] = ACTIONS(255),
    [anon_sym_just_executable] = ACTIONS(255),
    [anon_sym_just_pid] = ACTIONS(255),
    [anon_sym_append] = ACTIONS(255),
    [anon_sym_prepend] = ACTIONS(255),
    [anon_sym_encode_uri_component] = ACTIONS(255),
    [anon_sym_quote] = ACTIONS(255),
    [anon_sym_replace] = ACTIONS(255),
    [anon_sym_replace_regex] = ACTIONS(255),
    [anon_sym_trim] = ACTIONS(255),
    [anon_sym_trim_end] = ACTIONS(255),
    [anon_sym_trim_end_match] = ACTIONS(255),
    [anon_sym_trim_end_matches] = ACTIONS(255),
    [anon_sym_trim_start] = ACTIONS(255),
    [anon_sym_trim_start_match] = ACTIONS(255),
    [anon_sym_trim_start_matches] = ACTIONS(255),
    [anon_sym_capitalize] = ACTIONS(255),
    [anon_sym_kebabcase] = ACTIONS(255),
    [anon_sym_lowercamelcase] = ACTIONS(255),
    [anon_sym_lowercase] = ACTIONS(255),
    [anon_sym_shoutykebabcase] = ACTIONS(255),
    [anon_sym_shoutysnakecase] = ACTIONS(255),
    [anon_sym_snakecase] = ACTIONS(255),
    [anon_sym_titlecase] = ACTIONS(255),
    [anon_sym_uppercamelcase] = ACTIONS(255),
    [anon_sym_uppercase] = ACTIONS(255),
    [anon_sym_absolute_path] = ACTIONS(255),
    [anon_sym_canonicalize] = ACTIONS(255),
    [anon_sym_extension] = ACTIONS(255),
    [anon_sym_file_name] = ACTIONS(255),
    [anon_sym_file_stem] = ACTIONS(255),
    [anon_sym_parent_dir] = ACTIONS(255),
    [anon_sym_parent_directory] = ACTIONS(255),
    [anon_sym_without_extension] = ACTIONS(255),
    [anon_sym_clean] = ACTIONS(255),
    [anon_sym_join] = ACTIONS(255),
    [anon_sym_path_exists] = ACTIONS(255),
    [anon_sym_error] = ACTIONS(255),
    [anon_sym_blake3] = ACTIONS(255),
    [anon_sym_blake3_file] = ACTIONS(255),
    [anon_sym_sha256] = ACTIONS(255),
    [anon_sym_sha256_file] = ACTIONS(255),
    [anon_sym_uuid] = ACTIONS(255),
    [anon_sym_choose] = ACTIONS(255),
    [anon_sym_datetime] = ACTIONS(255),
    [anon_sym_datetime_utc] = ACTIONS(255),
    [anon_sym_semver_matches] = ACTIONS(255),
    [anon_sym_cache_dir] = ACTIONS(255),
    [anon_sym_cache_directory] = ACTIONS(255),
    [anon_sym_config_dir] = ACTIONS(255),
    [anon_sym_config_directory] = ACTIONS(255),
    [anon_sym_config_local_dir] = ACTIONS(255),
    [anon_sym_config_local_directory] = ACTIONS(255),
    [anon_sym_data_dir] = ACTIONS(255),
    [anon_sym_data_directory] = ACTIONS(255),
    [anon_sym_data_local_dir] = ACTIONS(255),
    [anon_sym_data_local_directory] = ACTIONS(255),
    [anon_sym_executable_dir] = ACTIONS(255),
    [anon_sym_executable_directory] = ACTIONS(255),
    [anon_sym_home_dir] = ACTIONS(255),
    [anon_sym_home_directory] = ACTIONS(255),
    [anon_sym_set] = ACTIONS(255),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(253),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(253),
    [anon_sym_DQUOTE] = ACTIONS(255),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(253),
    [anon_sym_SQUOTE] = ACTIONS(255),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [56] = {
    [sym_comment] = STATE(56),
    [ts_builtin_sym_end] = ACTIONS(257),
    [sym_identifier] = ACTIONS(259),
    [anon_sym_alias] = ACTIONS(259),
    [aux_sym_import_token1] = ACTIONS(259),
    [aux_sym_mod_token1] = ACTIONS(259),
    [anon_sym_LPAREN] = ACTIONS(257),
    [anon_sym_arch] = ACTIONS(259),
    [anon_sym_num_cpus] = ACTIONS(259),
    [anon_sym_os] = ACTIONS(259),
    [anon_sym_os_family] = ACTIONS(259),
    [anon_sym_shell] = ACTIONS(259),
    [anon_sym_env_var] = ACTIONS(259),
    [anon_sym_env_var_or_default] = ACTIONS(259),
    [anon_sym_env] = ACTIONS(259),
    [anon_sym_is_dependency] = ACTIONS(259),
    [anon_sym_invocation_dir] = ACTIONS(259),
    [anon_sym_invocation_dir_native] = ACTIONS(259),
    [anon_sym_invocation_directory] = ACTIONS(259),
    [anon_sym_invocation_directory_native] = ACTIONS(259),
    [anon_sym_justfile] = ACTIONS(259),
    [anon_sym_justfile_dir] = ACTIONS(259),
    [anon_sym_justfile_directory] = ACTIONS(259),
    [anon_sym_source_dir] = ACTIONS(259),
    [anon_sym_source_directory] = ACTIONS(259),
    [anon_sym_source_file] = ACTIONS(259),
    [anon_sym_just_executable] = ACTIONS(259),
    [anon_sym_just_pid] = ACTIONS(259),
    [anon_sym_append] = ACTIONS(259),
    [anon_sym_prepend] = ACTIONS(259),
    [anon_sym_encode_uri_component] = ACTIONS(259),
    [anon_sym_quote] = ACTIONS(259),
    [anon_sym_replace] = ACTIONS(259),
    [anon_sym_replace_regex] = ACTIONS(259),
    [anon_sym_trim] = ACTIONS(259),
    [anon_sym_trim_end] = ACTIONS(259),
    [anon_sym_trim_end_match] = ACTIONS(259),
    [anon_sym_trim_end_matches] = ACTIONS(259),
    [anon_sym_trim_start] = ACTIONS(259),
    [anon_sym_trim_start_match] = ACTIONS(259),
    [anon_sym_trim_start_matches] = ACTIONS(259),
    [anon_sym_capitalize] = ACTIONS(259),
    [anon_sym_kebabcase] = ACTIONS(259),
    [anon_sym_lowercamelcase] = ACTIONS(259),
    [anon_sym_lowercase] = ACTIONS(259),
    [anon_sym_shoutykebabcase] = ACTIONS(259),
    [anon_sym_shoutysnakecase] = ACTIONS(259),
    [anon_sym_snakecase] = ACTIONS(259),
    [anon_sym_titlecase] = ACTIONS(259),
    [anon_sym_uppercamelcase] = ACTIONS(259),
    [anon_sym_uppercase] = ACTIONS(259),
    [anon_sym_absolute_path] = ACTIONS(259),
    [anon_sym_canonicalize] = ACTIONS(259),
    [anon_sym_extension] = ACTIONS(259),
    [anon_sym_file_name] = ACTIONS(259),
    [anon_sym_file_stem] = ACTIONS(259),
    [anon_sym_parent_dir] = ACTIONS(259),
    [anon_sym_parent_directory] = ACTIONS(259),
    [anon_sym_without_extension] = ACTIONS(259),
    [anon_sym_clean] = ACTIONS(259),
    [anon_sym_join] = ACTIONS(259),
    [anon_sym_path_exists] = ACTIONS(259),
    [anon_sym_error] = ACTIONS(259),
    [anon_sym_blake3] = ACTIONS(259),
    [anon_sym_blake3_file] = ACTIONS(259),
    [anon_sym_sha256] = ACTIONS(259),
    [anon_sym_sha256_file] = ACTIONS(259),
    [anon_sym_uuid] = ACTIONS(259),
    [anon_sym_choose] = ACTIONS(259),
    [anon_sym_datetime] = ACTIONS(259),
    [anon_sym_datetime_utc] = ACTIONS(259),
    [anon_sym_semver_matches] = ACTIONS(259),
    [anon_sym_cache_dir] = ACTIONS(259),
    [anon_sym_cache_directory] = ACTIONS(259),
    [anon_sym_config_dir] = ACTIONS(259),
    [anon_sym_config_directory] = ACTIONS(259),
    [anon_sym_config_local_dir] = ACTIONS(259),
    [anon_sym_config_local_directory] = ACTIONS(259),
    [anon_sym_data_dir] = ACTIONS(259),
    [anon_sym_data_directory] = ACTIONS(259),
    [anon_sym_data_local_dir] = ACTIONS(259),
    [anon_sym_data_local_directory] = ACTIONS(259),
    [anon_sym_executable_dir] = ACTIONS(259),
    [anon_sym_executable_directory] = ACTIONS(259),
    [anon_sym_home_dir] = ACTIONS(259),
    [anon_sym_home_directory] = ACTIONS(259),
    [anon_sym_set] = ACTIONS(259),
    [anon_sym_BQUOTE] = ACTIONS(259),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(257),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(257),
    [anon_sym_DQUOTE] = ACTIONS(259),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(257),
    [anon_sym_SQUOTE] = ACTIONS(259),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [57] = {
    [sym_comment] = STATE(57),
    [ts_builtin_sym_end] = ACTIONS(261),
    [sym_identifier] = ACTIONS(263),
    [anon_sym_alias] = ACTIONS(263),
    [aux_sym_import_token1] = ACTIONS(263),
    [aux_sym_mod_token1] = ACTIONS(263),
    [anon_sym_LPAREN] = ACTIONS(261),
    [anon_sym_arch] = ACTIONS(263),
    [anon_sym_num_cpus] = ACTIONS(263),
    [anon_sym_os] = ACTIONS(263),
    [anon_sym_os_family] = ACTIONS(263),
    [anon_sym_shell] = ACTIONS(263),
    [anon_sym_env_var] = ACTIONS(263),
    [anon_sym_env_var_or_default] = ACTIONS(263),
    [anon_sym_env] = ACTIONS(263),
    [anon_sym_is_dependency] = ACTIONS(263),
    [anon_sym_invocation_dir] = ACTIONS(263),
    [anon_sym_invocation_dir_native] = ACTIONS(263),
    [anon_sym_invocation_directory] = ACTIONS(263),
    [anon_sym_invocation_directory_native] = ACTIONS(263),
    [anon_sym_justfile] = ACTIONS(263),
    [anon_sym_justfile_dir] = ACTIONS(263),
    [anon_sym_justfile_directory] = ACTIONS(263),
    [anon_sym_source_dir] = ACTIONS(263),
    [anon_sym_source_directory] = ACTIONS(263),
    [anon_sym_source_file] = ACTIONS(263),
    [anon_sym_just_executable] = ACTIONS(263),
    [anon_sym_just_pid] = ACTIONS(263),
    [anon_sym_append] = ACTIONS(263),
    [anon_sym_prepend] = ACTIONS(263),
    [anon_sym_encode_uri_component] = ACTIONS(263),
    [anon_sym_quote] = ACTIONS(263),
    [anon_sym_replace] = ACTIONS(263),
    [anon_sym_replace_regex] = ACTIONS(263),
    [anon_sym_trim] = ACTIONS(263),
    [anon_sym_trim_end] = ACTIONS(263),
    [anon_sym_trim_end_match] = ACTIONS(263),
    [anon_sym_trim_end_matches] = ACTIONS(263),
    [anon_sym_trim_start] = ACTIONS(263),
    [anon_sym_trim_start_match] = ACTIONS(263),
    [anon_sym_trim_start_matches] = ACTIONS(263),
    [anon_sym_capitalize] = ACTIONS(263),
    [anon_sym_kebabcase] = ACTIONS(263),
    [anon_sym_lowercamelcase] = ACTIONS(263),
    [anon_sym_lowercase] = ACTIONS(263),
    [anon_sym_shoutykebabcase] = ACTIONS(263),
    [anon_sym_shoutysnakecase] = ACTIONS(263),
    [anon_sym_snakecase] = ACTIONS(263),
    [anon_sym_titlecase] = ACTIONS(263),
    [anon_sym_uppercamelcase] = ACTIONS(263),
    [anon_sym_uppercase] = ACTIONS(263),
    [anon_sym_absolute_path] = ACTIONS(263),
    [anon_sym_canonicalize] = ACTIONS(263),
    [anon_sym_extension] = ACTIONS(263),
    [anon_sym_file_name] = ACTIONS(263),
    [anon_sym_file_stem] = ACTIONS(263),
    [anon_sym_parent_dir] = ACTIONS(263),
    [anon_sym_parent_directory] = ACTIONS(263),
    [anon_sym_without_extension] = ACTIONS(263),
    [anon_sym_clean] = ACTIONS(263),
    [anon_sym_join] = ACTIONS(263),
    [anon_sym_path_exists] = ACTIONS(263),
    [anon_sym_error] = ACTIONS(263),
    [anon_sym_blake3] = ACTIONS(263),
    [anon_sym_blake3_file] = ACTIONS(263),
    [anon_sym_sha256] = ACTIONS(263),
    [anon_sym_sha256_file] = ACTIONS(263),
    [anon_sym_uuid] = ACTIONS(263),
    [anon_sym_choose] = ACTIONS(263),
    [anon_sym_datetime] = ACTIONS(263),
    [anon_sym_datetime_utc] = ACTIONS(263),
    [anon_sym_semver_matches] = ACTIONS(263),
    [anon_sym_cache_dir] = ACTIONS(263),
    [anon_sym_cache_directory] = ACTIONS(263),
    [anon_sym_config_dir] = ACTIONS(263),
    [anon_sym_config_directory] = ACTIONS(263),
    [anon_sym_config_local_dir] = ACTIONS(263),
    [anon_sym_config_local_directory] = ACTIONS(263),
    [anon_sym_data_dir] = ACTIONS(263),
    [anon_sym_data_directory] = ACTIONS(263),
    [anon_sym_data_local_dir] = ACTIONS(263),
    [anon_sym_data_local_directory] = ACTIONS(263),
    [anon_sym_executable_dir] = ACTIONS(263),
    [anon_sym_executable_directory] = ACTIONS(263),
    [anon_sym_home_dir] = ACTIONS(263),
    [anon_sym_home_directory] = ACTIONS(263),
    [anon_sym_set] = ACTIONS(263),
    [anon_sym_BQUOTE] = ACTIONS(263),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(261),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(261),
    [anon_sym_DQUOTE] = ACTIONS(263),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(261),
    [anon_sym_SQUOTE] = ACTIONS(263),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [58] = {
    [sym_comment] = STATE(58),
    [ts_builtin_sym_end] = ACTIONS(265),
    [sym_identifier] = ACTIONS(267),
    [anon_sym_alias] = ACTIONS(267),
    [aux_sym_import_token1] = ACTIONS(267),
    [aux_sym_mod_token1] = ACTIONS(267),
    [anon_sym_LPAREN] = ACTIONS(265),
    [anon_sym_arch] = ACTIONS(267),
    [anon_sym_num_cpus] = ACTIONS(267),
    [anon_sym_os] = ACTIONS(267),
    [anon_sym_os_family] = ACTIONS(267),
    [anon_sym_shell] = ACTIONS(267),
    [anon_sym_env_var] = ACTIONS(267),
    [anon_sym_env_var_or_default] = ACTIONS(267),
    [anon_sym_env] = ACTIONS(267),
    [anon_sym_is_dependency] = ACTIONS(267),
    [anon_sym_invocation_dir] = ACTIONS(267),
    [anon_sym_invocation_dir_native] = ACTIONS(267),
    [anon_sym_invocation_directory] = ACTIONS(267),
    [anon_sym_invocation_directory_native] = ACTIONS(267),
    [anon_sym_justfile] = ACTIONS(267),
    [anon_sym_justfile_dir] = ACTIONS(267),
    [anon_sym_justfile_directory] = ACTIONS(267),
    [anon_sym_source_dir] = ACTIONS(267),
    [anon_sym_source_directory] = ACTIONS(267),
    [anon_sym_source_file] = ACTIONS(267),
    [anon_sym_just_executable] = ACTIONS(267),
    [anon_sym_just_pid] = ACTIONS(267),
    [anon_sym_append] = ACTIONS(267),
    [anon_sym_prepend] = ACTIONS(267),
    [anon_sym_encode_uri_component] = ACTIONS(267),
    [anon_sym_quote] = ACTIONS(267),
    [anon_sym_replace] = ACTIONS(267),
    [anon_sym_replace_regex] = ACTIONS(267),
    [anon_sym_trim] = ACTIONS(267),
    [anon_sym_trim_end] = ACTIONS(267),
    [anon_sym_trim_end_match] = ACTIONS(267),
    [anon_sym_trim_end_matches] = ACTIONS(267),
    [anon_sym_trim_start] = ACTIONS(267),
    [anon_sym_trim_start_match] = ACTIONS(267),
    [anon_sym_trim_start_matches] = ACTIONS(267),
    [anon_sym_capitalize] = ACTIONS(267),
    [anon_sym_kebabcase] = ACTIONS(267),
    [anon_sym_lowercamelcase] = ACTIONS(267),
    [anon_sym_lowercase] = ACTIONS(267),
    [anon_sym_shoutykebabcase] = ACTIONS(267),
    [anon_sym_shoutysnakecase] = ACTIONS(267),
    [anon_sym_snakecase] = ACTIONS(267),
    [anon_sym_titlecase] = ACTIONS(267),
    [anon_sym_uppercamelcase] = ACTIONS(267),
    [anon_sym_uppercase] = ACTIONS(267),
    [anon_sym_absolute_path] = ACTIONS(267),
    [anon_sym_canonicalize] = ACTIONS(267),
    [anon_sym_extension] = ACTIONS(267),
    [anon_sym_file_name] = ACTIONS(267),
    [anon_sym_file_stem] = ACTIONS(267),
    [anon_sym_parent_dir] = ACTIONS(267),
    [anon_sym_parent_directory] = ACTIONS(267),
    [anon_sym_without_extension] = ACTIONS(267),
    [anon_sym_clean] = ACTIONS(267),
    [anon_sym_join] = ACTIONS(267),
    [anon_sym_path_exists] = ACTIONS(267),
    [anon_sym_error] = ACTIONS(267),
    [anon_sym_blake3] = ACTIONS(267),
    [anon_sym_blake3_file] = ACTIONS(267),
    [anon_sym_sha256] = ACTIONS(267),
    [anon_sym_sha256_file] = ACTIONS(267),
    [anon_sym_uuid] = ACTIONS(267),
    [anon_sym_choose] = ACTIONS(267),
    [anon_sym_datetime] = ACTIONS(267),
    [anon_sym_datetime_utc] = ACTIONS(267),
    [anon_sym_semver_matches] = ACTIONS(267),
    [anon_sym_cache_dir] = ACTIONS(267),
    [anon_sym_cache_directory] = ACTIONS(267),
    [anon_sym_config_dir] = ACTIONS(267),
    [anon_sym_config_directory] = ACTIONS(267),
    [anon_sym_config_local_dir] = ACTIONS(267),
    [anon_sym_config_local_directory] = ACTIONS(267),
    [anon_sym_data_dir] = ACTIONS(267),
    [anon_sym_data_directory] = ACTIONS(267),
    [anon_sym_data_local_dir] = ACTIONS(267),
    [anon_sym_data_local_directory] = ACTIONS(267),
    [anon_sym_executable_dir] = ACTIONS(267),
    [anon_sym_executable_directory] = ACTIONS(267),
    [anon_sym_home_dir] = ACTIONS(267),
    [anon_sym_home_directory] = ACTIONS(267),
    [anon_sym_set] = ACTIONS(267),
    [anon_sym_BQUOTE] = ACTIONS(267),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(265),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(265),
    [anon_sym_DQUOTE] = ACTIONS(267),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(265),
    [anon_sym_SQUOTE] = ACTIONS(267),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [59] = {
    [sym_comment] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(269),
    [sym_identifier] = ACTIONS(271),
    [anon_sym_alias] = ACTIONS(271),
    [aux_sym_import_token1] = ACTIONS(271),
    [aux_sym_mod_token1] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [anon_sym_arch] = ACTIONS(271),
    [anon_sym_num_cpus] = ACTIONS(271),
    [anon_sym_os] = ACTIONS(271),
    [anon_sym_os_family] = ACTIONS(271),
    [anon_sym_shell] = ACTIONS(271),
    [anon_sym_env_var] = ACTIONS(271),
    [anon_sym_env_var_or_default] = ACTIONS(271),
    [anon_sym_env] = ACTIONS(271),
    [anon_sym_is_dependency] = ACTIONS(271),
    [anon_sym_invocation_dir] = ACTIONS(271),
    [anon_sym_invocation_dir_native] = ACTIONS(271),
    [anon_sym_invocation_directory] = ACTIONS(271),
    [anon_sym_invocation_directory_native] = ACTIONS(271),
    [anon_sym_justfile] = ACTIONS(271),
    [anon_sym_justfile_dir] = ACTIONS(271),
    [anon_sym_justfile_directory] = ACTIONS(271),
    [anon_sym_source_dir] = ACTIONS(271),
    [anon_sym_source_directory] = ACTIONS(271),
    [anon_sym_source_file] = ACTIONS(271),
    [anon_sym_just_executable] = ACTIONS(271),
    [anon_sym_just_pid] = ACTIONS(271),
    [anon_sym_append] = ACTIONS(271),
    [anon_sym_prepend] = ACTIONS(271),
    [anon_sym_encode_uri_component] = ACTIONS(271),
    [anon_sym_quote] = ACTIONS(271),
    [anon_sym_replace] = ACTIONS(271),
    [anon_sym_replace_regex] = ACTIONS(271),
    [anon_sym_trim] = ACTIONS(271),
    [anon_sym_trim_end] = ACTIONS(271),
    [anon_sym_trim_end_match] = ACTIONS(271),
    [anon_sym_trim_end_matches] = ACTIONS(271),
    [anon_sym_trim_start] = ACTIONS(271),
    [anon_sym_trim_start_match] = ACTIONS(271),
    [anon_sym_trim_start_matches] = ACTIONS(271),
    [anon_sym_capitalize] = ACTIONS(271),
    [anon_sym_kebabcase] = ACTIONS(271),
    [anon_sym_lowercamelcase] = ACTIONS(271),
    [anon_sym_lowercase] = ACTIONS(271),
    [anon_sym_shoutykebabcase] = ACTIONS(271),
    [anon_sym_shoutysnakecase] = ACTIONS(271),
    [anon_sym_snakecase] = ACTIONS(271),
    [anon_sym_titlecase] = ACTIONS(271),
    [anon_sym_uppercamelcase] = ACTIONS(271),
    [anon_sym_uppercase] = ACTIONS(271),
    [anon_sym_absolute_path] = ACTIONS(271),
    [anon_sym_canonicalize] = ACTIONS(271),
    [anon_sym_extension] = ACTIONS(271),
    [anon_sym_file_name] = ACTIONS(271),
    [anon_sym_file_stem] = ACTIONS(271),
    [anon_sym_parent_dir] = ACTIONS(271),
    [anon_sym_parent_directory] = ACTIONS(271),
    [anon_sym_without_extension] = ACTIONS(271),
    [anon_sym_clean] = ACTIONS(271),
    [anon_sym_join] = ACTIONS(271),
    [anon_sym_path_exists] = ACTIONS(271),
    [anon_sym_error] = ACTIONS(271),
    [anon_sym_blake3] = ACTIONS(271),
    [anon_sym_blake3_file] = ACTIONS(271),
    [anon_sym_sha256] = ACTIONS(271),
    [anon_sym_sha256_file] = ACTIONS(271),
    [anon_sym_uuid] = ACTIONS(271),
    [anon_sym_choose] = ACTIONS(271),
    [anon_sym_datetime] = ACTIONS(271),
    [anon_sym_datetime_utc] = ACTIONS(271),
    [anon_sym_semver_matches] = ACTIONS(271),
    [anon_sym_cache_dir] = ACTIONS(271),
    [anon_sym_cache_directory] = ACTIONS(271),
    [anon_sym_config_dir] = ACTIONS(271),
    [anon_sym_config_directory] = ACTIONS(271),
    [anon_sym_config_local_dir] = ACTIONS(271),
    [anon_sym_config_local_directory] = ACTIONS(271),
    [anon_sym_data_dir] = ACTIONS(271),
    [anon_sym_data_directory] = ACTIONS(271),
    [anon_sym_data_local_dir] = ACTIONS(271),
    [anon_sym_data_local_directory] = ACTIONS(271),
    [anon_sym_executable_dir] = ACTIONS(271),
    [anon_sym_executable_directory] = ACTIONS(271),
    [anon_sym_home_dir] = ACTIONS(271),
    [anon_sym_home_directory] = ACTIONS(271),
    [anon_sym_set] = ACTIONS(271),
    [anon_sym_BQUOTE] = ACTIONS(271),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(269),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(269),
    [anon_sym_DQUOTE] = ACTIONS(271),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(269),
    [anon_sym_SQUOTE] = ACTIONS(271),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(273), 1,
      sym_identifier,
    STATE(60), 1,
      sym_comment,
    ACTIONS(275), 2,
      anon_sym_shell,
      anon_sym_windows_DASHshell,
    ACTIONS(279), 3,
      anon_sym_dotenv_DASHfilename,
      anon_sym_dotenv_DASHpath,
      anon_sym_tempdir,
    ACTIONS(277), 10,
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
    ACTIONS(281), 1,
      anon_sym_LBRACK,
    STATE(54), 1,
      sym_string,
    STATE(55), 1,
      sym_boolean,
    STATE(61), 1,
      sym_comment,
    ACTIONS(283), 2,
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
    ACTIONS(285), 1,
      anon_sym_RBRACK,
    STATE(62), 1,
      sym_comment,
    STATE(95), 1,
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
    ACTIONS(287), 1,
      anon_sym_RBRACK,
    STATE(63), 1,
      sym_comment,
    STATE(95), 1,
      sym_string,
    STATE(27), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [131] = 8,
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
    STATE(95), 1,
      sym_string,
    STATE(27), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [159] = 8,
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
    STATE(57), 1,
      sym_string,
    STATE(65), 1,
      sym_comment,
    STATE(27), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [187] = 7,
    ACTIONS(289), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(291), 1,
      aux_sym_indented_normal_string_token1,
    ACTIONS(295), 1,
      aux_sym_comment_token1,
    STATE(66), 1,
      sym_comment,
    STATE(72), 1,
      aux_sym_indented_normal_string_repeat1,
    STATE(76), 1,
      sym_escape_sequence,
    ACTIONS(293), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [213] = 8,
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
    STATE(67), 1,
      sym_comment,
    STATE(87), 1,
      sym_string,
    STATE(27), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [241] = 6,
    ACTIONS(295), 1,
      aux_sym_comment_token1,
    ACTIONS(297), 1,
      anon_sym_DQUOTE,
    ACTIONS(299), 1,
      aux_sym_normal_string_token1,
    STATE(74), 1,
      sym_escape_sequence,
    STATE(68), 2,
      sym_comment,
      aux_sym_normal_string_repeat1,
    ACTIONS(302), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [265] = 6,
    ACTIONS(295), 1,
      aux_sym_comment_token1,
    ACTIONS(305), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(307), 1,
      aux_sym_indented_normal_string_token1,
    STATE(76), 1,
      sym_escape_sequence,
    STATE(69), 2,
      sym_comment,
      aux_sym_indented_normal_string_repeat1,
    ACTIONS(310), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [289] = 7,
    ACTIONS(295), 1,
      aux_sym_comment_token1,
    ACTIONS(313), 1,
      anon_sym_DQUOTE,
    ACTIONS(315), 1,
      aux_sym_normal_string_token1,
    STATE(68), 1,
      aux_sym_normal_string_repeat1,
    STATE(70), 1,
      sym_comment,
    STATE(74), 1,
      sym_escape_sequence,
    ACTIONS(317), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [315] = 7,
    ACTIONS(295), 1,
      aux_sym_comment_token1,
    ACTIONS(315), 1,
      aux_sym_normal_string_token1,
    ACTIONS(319), 1,
      anon_sym_DQUOTE,
    STATE(70), 1,
      aux_sym_normal_string_repeat1,
    STATE(71), 1,
      sym_comment,
    STATE(74), 1,
      sym_escape_sequence,
    ACTIONS(317), 5,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [341] = 7,
    ACTIONS(291), 1,
      aux_sym_indented_normal_string_token1,
    ACTIONS(295), 1,
      aux_sym_comment_token1,
    ACTIONS(321), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(69), 1,
      aux_sym_indented_normal_string_repeat1,
    STATE(72), 1,
      sym_comment,
    STATE(76), 1,
      sym_escape_sequence,
    ACTIONS(293), 5,
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
    STATE(54), 1,
      sym_string,
    STATE(73), 1,
      sym_comment,
    STATE(27), 4,
      sym_indented_normal_string,
      sym_normal_string,
      sym_indented_raw_string,
      sym_raw_string,
  [395] = 3,
    ACTIONS(295), 1,
      aux_sym_comment_token1,
    STATE(74), 1,
      sym_comment,
    ACTIONS(323), 7,
      anon_sym_DQUOTE,
      aux_sym_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [411] = 3,
    ACTIONS(295), 1,
      aux_sym_comment_token1,
    STATE(75), 1,
      sym_comment,
    ACTIONS(325), 7,
      anon_sym_DQUOTE,
      aux_sym_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [427] = 3,
    ACTIONS(295), 1,
      aux_sym_comment_token1,
    STATE(76), 1,
      sym_comment,
    ACTIONS(327), 7,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      aux_sym_indented_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [443] = 3,
    ACTIONS(295), 1,
      aux_sym_comment_token1,
    STATE(77), 1,
      sym_comment,
    ACTIONS(325), 7,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      aux_sym_indented_normal_string_token1,
      anon_sym_BSLASHn,
      anon_sym_BSLASHr,
      anon_sym_BSLASHt,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_BSLASH_BSLASH,
  [459] = 5,
    ACTIONS(295), 1,
      aux_sym_comment_token1,
    ACTIONS(329), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(331), 1,
      aux_sym_indented_raw_string_token1,
    STATE(78), 1,
      sym_comment,
    STATE(85), 1,
      aux_sym_indented_raw_string_repeat1,
  [475] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(55), 1,
      sym_boolean,
    STATE(79), 1,
      sym_comment,
    ACTIONS(283), 2,
      anon_sym_true,
      anon_sym_false,
  [489] = 4,
    ACTIONS(295), 1,
      aux_sym_comment_token1,
    ACTIONS(333), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(335), 1,
      aux_sym_indented_backtick_token1,
    STATE(80), 2,
      sym_comment,
      aux_sym_indented_backtick_repeat1,
  [503] = 5,
    ACTIONS(295), 1,
      aux_sym_comment_token1,
    ACTIONS(331), 1,
      aux_sym_indented_raw_string_token1,
    ACTIONS(338), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(78), 1,
      aux_sym_indented_raw_string_repeat1,
    STATE(81), 1,
      sym_comment,
  [519] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(340), 1,
      anon_sym_COMMA,
    ACTIONS(343), 1,
      anon_sym_RBRACK,
    STATE(82), 2,
      sym_comment,
      aux_sym__setting_list_repeat1,
  [533] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(285), 1,
      anon_sym_RBRACK,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    STATE(82), 1,
      aux_sym__setting_list_repeat1,
    STATE(83), 1,
      sym_comment,
  [549] = 5,
    ACTIONS(295), 1,
      aux_sym_comment_token1,
    ACTIONS(347), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(349), 1,
      aux_sym_indented_backtick_token1,
    STATE(80), 1,
      aux_sym_indented_backtick_repeat1,
    STATE(84), 1,
      sym_comment,
  [565] = 4,
    ACTIONS(295), 1,
      aux_sym_comment_token1,
    ACTIONS(351), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(353), 1,
      aux_sym_indented_raw_string_token1,
    STATE(85), 2,
      sym_comment,
      aux_sym_indented_raw_string_repeat1,
  [579] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(356), 1,
      anon_sym_LPAREN,
    STATE(86), 1,
      sym_comment,
    STATE(28), 2,
      sym__p1,
      sym__p2,
  [593] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(358), 1,
      anon_sym_COMMA,
    ACTIONS(360), 1,
      anon_sym_RBRACK,
    STATE(83), 1,
      aux_sym__setting_list_repeat1,
    STATE(87), 1,
      sym_comment,
  [609] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(362), 1,
      anon_sym_RPAREN,
    ACTIONS(364), 1,
      anon_sym_COMMA,
    STATE(88), 2,
      sym_comment,
      aux_sym_function_parameters_repeat1,
  [623] = 5,
    ACTIONS(295), 1,
      aux_sym_comment_token1,
    ACTIONS(349), 1,
      aux_sym_indented_backtick_token1,
    ACTIONS(367), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(84), 1,
      aux_sym_indented_backtick_repeat1,
    STATE(89), 1,
      sym_comment,
  [639] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(105), 1,
      anon_sym_RPAREN,
    ACTIONS(369), 1,
      anon_sym_COMMA,
    STATE(88), 1,
      aux_sym_function_parameters_repeat1,
    STATE(90), 1,
      sym_comment,
  [655] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
    ACTIONS(373), 1,
      anon_sym_COMMA,
    STATE(90), 1,
      aux_sym_function_parameters_repeat1,
    STATE(91), 1,
      sym_comment,
  [671] = 3,
    ACTIONS(295), 1,
      aux_sym_comment_token1,
    STATE(92), 1,
      sym_comment,
    ACTIONS(375), 2,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      aux_sym_indented_raw_string_token1,
  [682] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(377), 1,
      anon_sym_RPAREN,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      sym_comment,
  [695] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(377), 1,
      anon_sym_RPAREN,
    ACTIONS(381), 1,
      anon_sym_COMMA,
    STATE(94), 1,
      sym_comment,
  [708] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(95), 1,
      sym_comment,
    ACTIONS(343), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [719] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      sym__p1,
    STATE(96), 1,
      sym_comment,
  [732] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(385), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      sym__pN,
    STATE(97), 1,
      sym_comment,
  [745] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(387), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      sym__p0,
    STATE(98), 1,
      sym_comment,
  [758] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(389), 1,
      anon_sym_COLON_EQ,
    STATE(52), 1,
      sym__setting_list,
    STATE(99), 1,
      sym_comment,
  [771] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(391), 1,
      anon_sym_RPAREN,
    ACTIONS(393), 1,
      anon_sym_COMMA,
    STATE(100), 1,
      sym_comment,
  [784] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(395), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      sym__p2,
    STATE(101), 1,
      sym_comment,
  [797] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(102), 1,
      sym_comment,
    ACTIONS(362), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [808] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(397), 1,
      anon_sym_COLON_EQ,
    STATE(52), 1,
      sym__setting_string,
    STATE(103), 1,
      sym_comment,
  [821] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(399), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      sym__p3,
    STATE(104), 1,
      sym_comment,
  [834] = 3,
    ACTIONS(295), 1,
      aux_sym_comment_token1,
    STATE(105), 1,
      sym_comment,
    ACTIONS(401), 2,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_indented_backtick_token1,
  [845] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(403), 1,
      anon_sym_RPAREN,
    ACTIONS(405), 1,
      anon_sym_COMMA,
    STATE(106), 1,
      sym_comment,
  [858] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(281), 1,
      anon_sym_LBRACK,
    STATE(107), 1,
      sym_comment,
  [868] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(407), 1,
      sym_identifier,
    STATE(108), 1,
      sym_comment,
  [878] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(409), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      sym_comment,
  [888] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(411), 1,
      anon_sym_COMMA,
    STATE(110), 1,
      sym_comment,
  [898] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(413), 1,
      anon_sym_RPAREN,
    STATE(111), 1,
      sym_comment,
  [908] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(415), 1,
      sym_identifier,
    STATE(112), 1,
      sym_comment,
  [918] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(417), 1,
      anon_sym_COMMA,
    STATE(113), 1,
      sym_comment,
  [928] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(419), 1,
      anon_sym_BQUOTE,
    STATE(114), 1,
      sym_comment,
  [938] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(421), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      sym_comment,
  [948] = 3,
    ACTIONS(295), 1,
      aux_sym_comment_token1,
    ACTIONS(423), 1,
      aux_sym_backtick_token1,
    STATE(116), 1,
      sym_comment,
  [958] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(425), 1,
      sym_identifier,
    STATE(117), 1,
      sym_comment,
  [968] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(427), 1,
      anon_sym_SQUOTE,
    STATE(118), 1,
      sym_comment,
  [978] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      sym_comment,
  [988] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      sym_comment,
  [998] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(431), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      sym_comment,
  [1008] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(433), 1,
      anon_sym_RPAREN,
    STATE(122), 1,
      sym_comment,
  [1018] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(435), 1,
      anon_sym_COLON_EQ,
    STATE(123), 1,
      sym_comment,
  [1028] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(437), 1,
      ts_builtin_sym_end,
    STATE(124), 1,
      sym_comment,
  [1038] = 3,
    ACTIONS(295), 1,
      aux_sym_comment_token1,
    ACTIONS(439), 1,
      aux_sym_raw_string_token1,
    STATE(125), 1,
      sym_comment,
  [1048] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(441), 1,
      anon_sym_COMMA,
    STATE(126), 1,
      sym_comment,
  [1058] = 1,
    ACTIONS(443), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(60)] = 0,
  [SMALL_STATE(61)] = 31,
  [SMALL_STATE(62)] = 69,
  [SMALL_STATE(63)] = 100,
  [SMALL_STATE(64)] = 131,
  [SMALL_STATE(65)] = 159,
  [SMALL_STATE(66)] = 187,
  [SMALL_STATE(67)] = 213,
  [SMALL_STATE(68)] = 241,
  [SMALL_STATE(69)] = 265,
  [SMALL_STATE(70)] = 289,
  [SMALL_STATE(71)] = 315,
  [SMALL_STATE(72)] = 341,
  [SMALL_STATE(73)] = 367,
  [SMALL_STATE(74)] = 395,
  [SMALL_STATE(75)] = 411,
  [SMALL_STATE(76)] = 427,
  [SMALL_STATE(77)] = 443,
  [SMALL_STATE(78)] = 459,
  [SMALL_STATE(79)] = 475,
  [SMALL_STATE(80)] = 489,
  [SMALL_STATE(81)] = 503,
  [SMALL_STATE(82)] = 519,
  [SMALL_STATE(83)] = 533,
  [SMALL_STATE(84)] = 549,
  [SMALL_STATE(85)] = 565,
  [SMALL_STATE(86)] = 579,
  [SMALL_STATE(87)] = 593,
  [SMALL_STATE(88)] = 609,
  [SMALL_STATE(89)] = 623,
  [SMALL_STATE(90)] = 639,
  [SMALL_STATE(91)] = 655,
  [SMALL_STATE(92)] = 671,
  [SMALL_STATE(93)] = 682,
  [SMALL_STATE(94)] = 695,
  [SMALL_STATE(95)] = 708,
  [SMALL_STATE(96)] = 719,
  [SMALL_STATE(97)] = 732,
  [SMALL_STATE(98)] = 745,
  [SMALL_STATE(99)] = 758,
  [SMALL_STATE(100)] = 771,
  [SMALL_STATE(101)] = 784,
  [SMALL_STATE(102)] = 797,
  [SMALL_STATE(103)] = 808,
  [SMALL_STATE(104)] = 821,
  [SMALL_STATE(105)] = 834,
  [SMALL_STATE(106)] = 845,
  [SMALL_STATE(107)] = 858,
  [SMALL_STATE(108)] = 868,
  [SMALL_STATE(109)] = 878,
  [SMALL_STATE(110)] = 888,
  [SMALL_STATE(111)] = 898,
  [SMALL_STATE(112)] = 908,
  [SMALL_STATE(113)] = 918,
  [SMALL_STATE(114)] = 928,
  [SMALL_STATE(115)] = 938,
  [SMALL_STATE(116)] = 948,
  [SMALL_STATE(117)] = 958,
  [SMALL_STATE(118)] = 968,
  [SMALL_STATE(119)] = 978,
  [SMALL_STATE(120)] = 988,
  [SMALL_STATE(121)] = 998,
  [SMALL_STATE(122)] = 1008,
  [SMALL_STATE(123)] = 1018,
  [SMALL_STATE(124)] = 1028,
  [SMALL_STATE(125)] = 1038,
  [SMALL_STATE(126)] = 1048,
  [SMALL_STATE(127)] = 1058,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(117),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 2, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 3, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_string, 3, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_string, 3, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_raw_string, 3, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_raw_string, 3, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_string, 3, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_string, 3, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_normal_string, 3, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_normal_string, 3, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod, 2, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mod, 2, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_string, 2, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_string, 2, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_normal_string, 2, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_normal_string, 2, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_raw_string, 2, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_raw_string, 2, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_function_call, 2, 0, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_function_call, 2, 0, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p1, 4, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p1, 4, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p3, 8, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p3, 8, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_backtick, 3, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_backtick, 3, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_backtick, 3, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_backtick, 3, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p3, 7, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p3, 7, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p0, 2, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p0, 2, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 3, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p2, 6, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p2, 6, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pN, 3, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pN, 3, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 2, 0, 2),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 2, 0, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p1, 3, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p1, 3, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indented_backtick, 2, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indented_backtick, 2, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__p2, 5, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__p2, 5, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 1),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_list, 5, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_list, 5, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_list, 4, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_list, 4, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_list, 6, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_list, 6, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3, 0, 2),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 3, 0, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 1, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 1, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_string, 2, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_string, 2, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__setting_boolean, 2, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__setting_boolean, 2, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 2, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 4, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 4, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod, 3, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mod, 3, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 2, 0, 0),
  [299] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 2, 0, 0),
  [307] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_normal_string_repeat1, 1, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_normal_string_repeat1, 1, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_backtick_repeat1, 2, 0, 0),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_backtick_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__setting_list_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__setting_list_repeat1, 2, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_raw_string_repeat1, 2, 0, 0),
  [353] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_indented_raw_string_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 2, 0, 0),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 1, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_raw_string_repeat1, 1, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_indented_backtick_repeat1, 1, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [437] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
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
