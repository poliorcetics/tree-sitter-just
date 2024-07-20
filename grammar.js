module.exports = grammar({
    name: 'just',
    extras: $ => [
        /\s/,
        $.comment,
    ],
    // Required by tree-sitter, the order and variant count here must match that of `src/scanner.c:TokenType`.
    // externals: $ => [],
    // Recommended by tree-sitter's documentation to improve performances and compile times.
    word: $ => $.identifier,
    rules: {
        file: $ => repeat(choice(
            $.alias,
            $.import,
            $.mod,
            $.setting,
            // NOTE: in practice those will not be accepted raw by Just, only the items above are accepted.
            //       We keep those here to make testing, highlighting and error recovery easier.
            $.expression,
        )),

        // ========================================================================================
        // Aliases

        alias: $ => seq(
            'alias',
            $.identifier,
            ':=',
            $.identifier,
        ),

        // ========================================================================================
        // Imports and modules

        import: $ => seq(
            /import\??/,
            $.string,
        ),

        mod: $ => prec.right(seq(
            /mod\??/,
            $.identifier,
            optional($.string),
        )),

        // ========================================================================================
        // Expression

        // TODO:
        //
        // expression : 'if' condition '{' expression '}' 'else' '{' expression '}'
        //            | 'assert' '(' condition ',' expression ')'
        //            | value '/' expression
        //            | value '+' expression
        //            | value
        // 
        // condition  : expression '==' expression
        //            | expression '!=' expression
        // 
        // value      : NAME '(' sequence? ')'
        //            | BACKTICK
        //            | INDENTED_BACKTICK
        //            | NAME
        //            | string
        //            | '(' expression ')'
        //
        // sequence   : expression ',' sequence
        //            | expression ','?

        expression: $ => choice(
            $.value,
        ),

        value: $ => choice(
            $.builtin_function_call,
            $.function_call,
            seq('(', $.expression, ')'),
            $.backtick,
            $.indented_backtick,
            $.string,
            prec(-1, $.identifier),
        ),

        builtin_function_call: $ => choice(
            // <https://just.systems/man/en/chapter_32.html?highlight=functions#system-information>
            builtin('arch',      $._p0),
            builtin('num_cpus',  $._p0),
            builtin('os',        $._p0),
            builtin('os_family', $._p0),
            // <https://just.systems/man/en/chapter_32.html?highlight=functions#external-commands>
            builtin('shell', $._pN),
            // <https://just.systems/man/en/chapter_32.html?highlight=functions#environment-variables>
            builtin('env_var',            $._p1),
            builtin('env_var_or_default', $._p2),
            builtin('env',                choice($._p1, $._p2)),
            // <https://just.systems/man/en/chapter_32.html?highlight=functions#invocation-information>
            builtin('is_dependency', $._p0),
            // <https://just.systems/man/en/chapter_32.html?highlight=functions#invocation-directory>
            builtin('invocation_dir',              $._p0),
            builtin('invocation_dir_native',       $._p0),
            builtin('invocation_directory',        $._p0),
            builtin('invocation_directory_native', $._p0),
            // <https://just.systems/man/en/chapter_32.html?highlight=functions#justfile-and-justfile-directory>
            builtin('justfile',           $._p0),
            builtin('justfile_dir',       $._p0),
            builtin('justfile_directory', $._p0),
            // <https://just.systems/man/en/chapter_32.html?highlight=functions#source-and-source-directory>
            builtin('source_dir',       $._p0),
            builtin('source_directory', $._p0),
            builtin('source_file',      $._p0),
            // <https://just.systems/man/en/chapter_32.html?highlight=functions#just-executable>
            builtin('just_executable', $._p0),
            // <https://just.systems/man/en/chapter_32.html?highlight=functions#just-pid>
            builtin('just_pid', $._p0),
            // <https://just.systems/man/en/chapter_32.html?highlight=functions#string-manipulation>
            builtin('append',               $._p2),
            builtin('prepend',              $._p2),
            builtin('encode_uri_component', $._p1),
            builtin('quote',                $._p1),
            builtin('replace',              $._p3),
            builtin('replace_regex',        $._p3),
            builtin('trim',                 $._p1),
            builtin('trim_end',             $._p1),
            builtin('trim_end_match',       $._p2),
            builtin('trim_end_matches',     $._p2),
            builtin('trim_start',           $._p1),
            builtin('trim_start_match',     $._p2),
            builtin('trim_start_matches',   $._p2),
            // <https://just.systems/man/en/chapter_32.html#case-conversion>
            builtin('capitalize',      $._p1),
            builtin('kebabcase',       $._p1),
            builtin('lowercamelcase',  $._p1),
            builtin('lowercase',       $._p1),
            builtin('shoutykebabcase', $._p1),
            builtin('shoutysnakecase', $._p1),
            builtin('snakecase',       $._p1),
            builtin('titlecase',       $._p1),
            builtin('uppercamelcase',  $._p1),
            builtin('uppercase',       $._p1),
            // <https://just.systems/man/en/chapter_32.html#path-manipulation>
            // -- Fallible
            builtin('absolute_path',     $._p1),
            builtin('canonicalize',      $._p1),
            builtin('extension',         $._p1),
            builtin('file_name',         $._p1),
            builtin('file_stem',         $._p1),
            builtin('parent_dir',        $._p1),
            builtin('parent_directory',  $._p1),
            builtin('without_extension', $._p1),
            // -- Infallible
            builtin('clean', $._p1),
            builtin('join',  $._pN),
            // <https://just.systems/man/en/chapter_32.html#filesystem-access>
            builtin('path_exists', $._p1),
            // <https://just.systems/man/en/chapter_32.html#error-reporting>
            builtin('error', $._p1),
            // <https://just.systems/man/en/chapter_32.html#uuid-and-hash-generation>
            builtin('blake3',      $._p1),
            builtin('blake3_file', $._p1),
            builtin('sha256',      $._p1),
            builtin('sha256_file', $._p1),
            builtin('uuid',        $._p0),
            // <https://just.systems/man/en/chapter_32.html#random>
            builtin('choose', $._p2),
            // <https://just.systems/man/en/chapter_32.html#datetime>
            builtin('datetime',     $._p1),
            builtin('datetime_utc', $._p1),
            // <https://just.systems/man/en/chapter_32.html#semantic-versions>
            builtin('semver_matches', $._p2),
        ),

        _p0: $ => seq('(', ')'),
        // Multiple params elements are only fully tested once the first time they're seen in
        // `builtin_function_calls`, afterwards we'll just do the minimum, there is no need to
        // test again the exact same expressions that already worked.
        _p1: $ => seq('(', $.expression, optional(','), ')'),
        _p2: $ => seq('(', $.expression, ',', $.expression, optional(','), ')'),
        _p3: $ => seq('(', $.expression, ',', $.expression, ',', $.expression, optional(','), ')'),
        _pN: $ => seq('(', $.function_parameters, ')'),

        function_call: $ => seq(fname($.identifier), '(', optional($.function_parameters), ')'),

        function_parameters: $ => seq($.expression, repeat(seq(',', $.expression)), optional(',')),

        // ========================================================================================
        // Settings

        setting: $ => seq(
            'set',
            choice(
                // <https://just.systems/man/en/chapter_27.html?highlight=dotenv-filename#table-of-settings>
                seq('allow-duplicate-recipes',   optional($._setting_boolean)),
                seq('allow-duplicate-variables', optional($._setting_boolean)),
                seq('dotenv-filename',           $._setting_string),
                seq('dotenv-load',               optional($._setting_boolean)),
                seq('dotenv-path',               $._setting_string),
                seq('dotenv-required',           optional($._setting_boolean)),
                seq('export',                    optional($._setting_boolean)),
                seq('fallback',                  optional($._setting_boolean)),
                seq('ignore-comments',           optional($._setting_boolean)),
                seq('positional-arguments',      optional($._setting_boolean)),
                seq('shell',                     $._setting_list),
                seq('tempdir',                   $._setting_string),
                seq('unstable',                  optional($._setting_boolean)),
                seq('windows-powershell',        optional($._setting_boolean)),
                seq('windows-shell',             $._setting_list),
                // To handle future settings before they're added formally to the grammar
                seq($.identifier,                choice(
                    optional($._setting_boolean),
                    $._setting_string,
                    $._setting_list,
                )),
            ),
        ),
        _setting_boolean: $ => seq(':=', $.boolean),
        _setting_string: $ => seq(':=', $.string),
        _setting_list: $ => seq(':=', '[', $.string, repeat(seq(',', $.string)), optional(','), ']'),

        // ========================================================================================
        // Backticks

        backtick: $ => seq(
            "`",
            /[^`]*/,
            "`",
        ),

        indented_backtick: $ => seq(
            "```",
            // See `indented_normal_string`.
            repeat(/.[^`]?/),
            "```",
        ),

        // ========================================================================================
        // Strings

        // TODO: interpolation
        //
        // - Interpolation is only active **within** recipes
        // - In recipe parameters, in settings: **inactive**
        // - In backticks (`, ```): **inactive**
        string: $ => choice(
            $.indented_normal_string,
            $.normal_string,
            $.indented_raw_string,
            $.raw_string,
        ),
        indented_normal_string: $ => seq(
            '"""',
            repeat(choice(
                $.escape_sequence,
                // Necessary to ensure escapes sequences are not eaten and that `<anything>"` does
                // not eat the `"` when it could be part of the end of the string.
                /.[^"]?/,
            )),
            '"""'
        ),
        normal_string: $ => seq(
            '"',
            repeat(choice(
                $.escape_sequence,
                /[^"]/,
            )),
            '"',
        ),
        indented_raw_string: $ => seq(
            "'''",
            // See `indented_normal_string`.
            repeat(/.[^']?/),
            "'''",
        ),
        raw_string: $ => seq(
            "'",
            /[^']*/,
            "'",
        ),
        escape_sequence: $ => choice(
            '\\n',
            '\\r',
            '\\t',
            '\\"',
            '\\\\',
        ),

        // ========================================================================================
        // Misc.

        boolean: $ => choice('true', 'false'),

        // Identifiers in Just are always ASCII.
        identifier: $ => /[a-zA-Z_][a-zA-Z0-9_-]*/,

        // Comments must be the last rule to match, so that anything that also matches `#.*` in some
        // way comes first in the list.
        comment: $ => prec(-1, token(seq('#', /.*/))),
    }
});

function builtin(name, params) {
    return seq(fname(name), params);
}

function fname(name) {
    return field('function_name', name);
}
