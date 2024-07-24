module.exports = grammar({
    name: 'just',
    extras: $ => [
        / /,
        /\t/,
        $._eol,
    ],
    // Required by tree-sitter, the order and variant count here must match that of `src/scanner.c:TokenType`.
    // externals: $ => [],
    inline: $ => [
        $._indented_normal_string,
        $._normal_string,
        $._indented_raw_string,
        $._raw_string,
    ],
    // Recommended by tree-sitter's documentation to improve performances and compile times.
    word: $ => $.identifier,
    rules: {
        file: $ => repeat(choice(
            $.alias,
            $.assignment,
            $.comment,
            $.import,
            $.mod,
            $.recipe,
            $.setting,
        )),

        // ========================================================================================
        // Aliases

        alias: $ => seq(
            // Not all builtin attributes are supported in practice for aliases but that's not
            // the responsibility of Tree-Sitter
            repeat($._attribute_list),
            'alias',
            field('alias_name', $.identifier),
            ':=',
            $.identifier,
            $._ceol,
        ),

        // ========================================================================================
        // Assignments && Exports

        assignment: $ => seq(
            optional('export'),
            field('variable_name', $.identifier),
            ':=',
            $.expression,
            $._ceol,
        ),

        // ========================================================================================
        // Imports and modules

        import: $ => seq(
            /import\??/,
            $.string,
            $._ceol,
        ),

        mod: $ => prec.right(seq(
            // Technically only `doc` is a valid attribute on modules at the moment but that's okay
            repeat($._attribute_list),
            /mod\??/,
            field('mod_name', $.identifier),
            optional($.string),
            $._ceol,
        )),

        // ========================================================================================
        // Recipes

        recipe: $ => seq(
            repeat($._attribute_list),
            optional('@'),
            field('recipe_name', $.identifier),
            repeat($.recipe_parameter),
            optional($.variadic_parameter),
            ':',
            repeat($.recipe_dependency),
            optional(seq(
                '&&',
                repeat($.recipe_dependency),
            )),
            $._ceol,
            optional($.recipe_body),
        ),

        _attribute_list: $ => seq(
            '[',
            $.attribute,
            repeat(seq(',', $.attribute)),
            ']',
            $._ceol,
        ),

        // <https://just.systems/man/en/chapter_34.html?highlight=attribute#recipe-attributes>
        attribute: $ => seq(
            field('attribute_name', $.identifier),
            optional(seq('(', $.string, ')'))
        ),

        recipe_parameter: $ => seq(
            optional('$'),
            field('parameter_name', $.identifier),
            optional(seq('=', $.value)),
        ),

        variadic_parameter: $ => seq(
            choice('+', '*'),
            $.recipe_parameter,
        ),

        recipe_dependency: $ => choice(
            $._recipe_dependency,
            seq('(', $._recipe_dependency, repeat($.expression), ')'),
        ),

        _recipe_dependency: $ => field('dependency_name', $.identifier),

        recipe_body: $ => repeat1($.recipe_line),

        recipe_line: $ => seq(
            // This is not exactly correct in that the first line defines the indentation length
            // and all following lines in the recipe must use the same.
            // In practice, it's better to reset on every line for better highlighting of the rest,
            // It allows easy handling of backslash-continuated lines that may be indented more.
            /( |\t)+/,
            optional(choice('@-', '-@', '@', '-')),
            repeat1(choice(
                field('recipe_content', '{{{{'),
                $.interpolation,
                // Same trick as the indented normal string
                field('recipe_content', /.[^\{\r\n]?/),
            )),
            $._eol,
        ),

        interpolation: $ => seq(
            field('interpolation_marker', '{{'),
            $.expression,
            field('interpolation_marker', '}}'),
        ),

        // ========================================================================================
        // Settings

        // <https://just.systems/man/en/chapter_27.html?highlight=dotenv-filename#table-of-settings>
        setting: $ => seq(
            'set',
            field('setting_name', $.identifier),
            choice(
                optional($._setting_boolean),
                $._setting_string,
                $._setting_list,
            ),
            $._ceol,
        ),
        _setting_boolean: $ => seq(':=', choice('true', 'false')),
        _setting_string: $ => seq(':=', $.string),
        _setting_list: $ => seq(':=', '[', $.string, repeat(seq(',', $.string)), optional(','), ']'),

        // ========================================================================================
        // Expression

        expression: $ => choice(
            seq('if', $.condition, '{', $.expression, '}', 'else', '{', $.expression, '}'),
            seq('assert', '(', $.condition, ',', $.expression, ')'),
            seq($.value, choice('/', '+'), $.expression),
            $.value,
        ),

        condition: $ => seq(
            $.expression,
            choice('==', '!=', '=~'),
            $.expression,
        ),

        value: $ => choice(
            $.function_call,
            seq('(', $.expression, ')'),
            $.backtick,
            $.indented_backtick,
            $.string,
            prec(-1, $.identifier),
        ),

        // <https://just.systems/man/en/chapter_32.html>
        function_call: $ => seq(field('function_name', $.identifier), '(', optional($.function_parameters), ')'),

        function_parameters: $ => seq($.expression, repeat(seq(',', $.expression)), optional(',')),

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

        string: $ => choice(
            $._indented_normal_string,
            $._normal_string,
            $._indented_raw_string,
            $._raw_string,
        ),

        _indented_normal_string: $ => seq(
            '"""',
            repeat(choice(
                $.escape_sequence,
                // Necessary to ensure escapes sequences are not eaten and that `<anything>"` does
                // not eat the `"` when it could be part of the end of the string.
                /.[^"]?/,
            )),
            '"""'
        ),

        _normal_string: $ => seq(
            '"',
            repeat(choice(
                $.escape_sequence,
                /[^"]/,
            )),
            '"',
        ),

        _indented_raw_string: $ => seq(
            "'''",
            // See `indented_normal_string`.
            repeat(/.[^']?/),
            "'''",
        ),

        _raw_string: $ => seq(
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

        // Identifiers in Just are always ASCII.
        identifier: $ => /[a-zA-Z_][a-zA-Z0-9_-]*/,

        // Comments must be the last rule to match, so that anything that also matches `#.*` in some
        // way comes first in the list.
        comment: $ => prec(-1, token(seq('#', /.*/))),

        _eol: $ => /\r?\n/,
        _ceol: $ => seq(optional($.comment), $._eol),
    }
});
