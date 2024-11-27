# Launch `tree-sitter test` after a rebuild
test *args: regen
    tree-sitter test {{ args }}

# Launch `tree-sitter parse` after a rebuild
parse *args="examples/all-items.just": regen
    tree-sitter parse {{ args }}

[private]
regen:
    tree-sitter build
    tree-sitter generate
