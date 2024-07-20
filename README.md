# tree-sitter-just

[Tree Sitter](https://tree-sitter.github.io/tree-sitter/) grammar for [`just`](https://github.com/casey/just).

## There is already a well developed grammar

Yes, at [IndianBoy42/tree-sitter-just](https://github.com/IndianBoy42/tree-sitter-just).

The grammar over there also includes query for several editors so it's way more mature than here.

Mine was done as a discovery of writing a Tree Sitter grammar.

## Remarks

Some quirks of `just` are voluntarily glossed over
so as to allow better highlighting and error recovery in invalid trees.

Comments in `just` are not allowed everywhere for example,
but this grammar considers they are,
because it makes it much easier to highlight even slightly wrong files.
