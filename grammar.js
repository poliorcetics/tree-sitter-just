module.exports = grammar({
    name: 'just',
    extras: $ => [
        /\s/,
        // $.comment,
    ],
    conflicts: $ => [
    ],
    rules: {
      // Comments must be the last rule to match, so that anything that also matches `#.*` in some
      // way comes first in the list.
      comment: $ => token(seq('#', /.*/)),
    }
});
