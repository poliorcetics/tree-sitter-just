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
            $.backtick,
            $.identifier,
            $.indented_backtick,
            $.string,
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
