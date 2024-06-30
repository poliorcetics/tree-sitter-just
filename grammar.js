module.exports = grammar({
    name: 'just',
    extras: $ => [
        /\s/,
        $.comment,
    ],
    conflicts: $ => [
    ],
    // Recommended by tree-sitter's documentation to improve performances and compile times.
    word: $ => $.identifier,
    rules: {
        file: $ => repeat(choice(
            $.setting,
            $.identifier,
        )),
        setting: $ => seq(
            'set',
            choice(
                seq('allow-duplicate-recipes', optional(seq(':=', $.boolean))),
            )
        ),
        boolean: $ => choice('true', 'false'),
        // Identifiers in Just are always ASCII.
        identifier: $ => /[a-zA-Z_][a-zA-Z0-9_-]*/,
        // Comments must be the last rule to match, so that anything that also matches `#.*` in some
        // way comes first in the list.
        comment: $ => token(seq('#', /.*/)),
    }
});
