# tree-sitter-just

[Tree Sitter](https://tree-sitter.github.io/tree-sitter/) grammar for [`just`](https://github.com/casey/just).

Support is guaranteed up to Just 1.43.3, if you are missing a recent feature don't hesitate to open an issue or pull request.

## What's implemented and not

- [x] Alias (`alias`)
  - [x] Attributes (see below)
  - [x] Aliases to path (`alias f := foo::bar`)
- [x] Assignment (`a := expr`)
  - [x] Attributes (see below)
  - [x] Exported (`export a := expr`)
- [x] Comment (`# ...`)
- [x] Import (`import`)
  - [x] Optional (`import?`)
- [x] Modules (`mod`)
  - [x] Attributes (see below)
  - [x] Optional (`mod?`)
  - [x] With path (`mod a "path"`)
- [x] Recipe
  - [x] Attributes (see below)
  - [x] Quiet (`@r:`)
  - [x] Parameters
    - [x] Required (`r p:`)
    - [x] With default (`r p1="abc" p2=expr:`)
    - [x] Exported (`r $p:`, `r $p=expr:`)
    - [x] Variadics (`r *p:`, `r +p:`)
  - [x] Before dependencies (`r: dep (dep expr)`)
    - [x] Dependencies to path (`r: foo::bar`)
  - [x] After dependencies (`r: && dep (dep expr)`)
    - [x] Dependencies to path (`r: && foo::bar`)
  - [x] Body
    - [x] Quiet lines (`@`)
    - [x] Errors ignored (`-`)
    - [x] Interpolation (`{{ expr }}`)
      - [x] Escape (`{{{{`)
    - [x] Shebang parsing
      - [x] `#!/usr/bin/env (-args)? <shell>( .+)?`
      - [x] `#!/path/to/<shell>( .+)?`
      - [x] `#!<shell>( .+)?`
- [x] Settings (`set`)
  - [x] Boolean (`set a := true`, `set a := false`, `set a`)
  - [x] String (`set a := "string"`, `set a := 'raw string'`, all string types are supported)
  - [x] List (`set a := ["string", 'string', """string""", '''string''']`)
- [x] Unexport (`unexport ENV_VAR`)

Attributes can have multiple forms:

- [x] Single:
  - [x] No param: `[doc]`
  - [x] With param in parentheses `[doc("param")]`
  - [x] With param after colon `[doc: "param"]`
- [x] Multiple:
  - [x] No param: `[doc, private]`
  - [x] With param in parentheses `[doc("param"), private]`
  - [x] With param after colon `[doc: "param", private]`
  - [x] Chained: `[doc]\n[private]`

Expressions cannot be parsed at the top level but they're fully implemented too for where they can:

- [x] Expressions
  - [x] If-Else (`if cond { expr } else { expr }`)
  - [x] Assertions (`assert(cond, expr)`)
  - [x] Conditions (`expr == expr`, `!=`, `=~`, `!~`)
  - [x] Joined (`value / expr`, `value + expr`)
  - [x] Absolute path (`/ expr`)
  - [x] Operators (`expr && expr`, `expr || expr`)
  - [x] Values
    - [x] Function calls (`fn_name()`, `name(expr, expr)`)
    - [x] Parenthesized (`( expr )`)
    - [x] Backticks
    - [x] Indented backticks
    - [x] String
      - [x] Normal string (`"abc"`)
        - [x] Escape sequences (`\n`, `\r`, `\t`, `\\`, `\"`, `\u{1F916}` (see note))
      - [x] Indented normal string (`"""abc"""`)
        - [x] Escape sequences (`\n`, `\r`, `\t`, `\\`, `\"`, `\u{1F916}` (see note))
      - [x] Raw string (`'abc'`)
      - [x] Indented raw string (`'''abc'''`)
    - [x] Shell-Expanded string (strings prefixed by `x`)
      - [x] Simple variable (`$HOME`)
      - [x] Wrapped variable (`${HOME}`)
      - [x] Wrapped variable with default (`${HOME:-default}`)
    - [x] Identifiers

Note: Unicode Codepoints escape sequences, added in Just 1.36.0, accept anything hex value containing one (1) to six (6) characters.

## There is already a well developed grammar

Yes, at [IndianBoy42/tree-sitter-just](https://github.com/IndianBoy42/tree-sitter-just).

The grammar over there also includes query for several editors so it's more mature on that point than here.
On the other hand, it is also missing features and updated less often.

## Remarks

Some quirks of `just` are voluntarily glossed over so as to allow better highlighting and error recovery in invalid trees.

Indentation within a recipe must start the same way for all lines of the recipe for example, but this grammar allows any indentation (as long as there is one) to better highlight the rest of the line.
