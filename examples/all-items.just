# =================================================================================================
# Aliases

# Comment
[private]
alias a1 := r1 # comment

# =================================================================================================
# Assignments

# Comment
[private]
export v1 := "b" # comment

# Comment
export v2 := if / "os" + os() / ("abc" + v1) == `echo -n 2` {
    assert(v1 != ("azer" / shell("bash", "-c", "echo", v1)), "message")
} else {
    ```echo -e "this is a "``` + "string with MAYBE=" + (env("MAYBE") || "<???>") + "and OK=" + (v1 && env("HOME"))
} # comment

# Numeric errors

e1 := 23245

[private]
e2 := 23283902.23672357265763

e3 := fn(arg1, 2392973.2323, 2326546780)

# Unexporting an env var

unexport ENV_VAR

# =================================================================================================
# Strings

# Base strings
v3 := "
    escape \t \r sequences \n \" \\ \u{1F916} inside and $HOME and ${HOME} and ${NO_HOME:-default}
" + """
    escape \t \r sequences \n \" \\ \u{1F916} inside and $HOME and ${HOME} and ${NO_HOME:-default}
""" + '
    escape \t \r sequences \n \" \\ \u{1F916} inside and $HOME and ${HOME} and ${NO_HOME:-default}
' + '''
    escape \t \r sequences \n \" \\ \u{1F916} inside and $HOME and ${HOME} and ${NO_HOME:-default}
'''

# Shell expanded strings
v4 := x"
    escape \t \r sequences \n \" \\ \u{1F916} inside and $HOME and ${HOME} and ${NO_HOME:-default}
" + x"""
    escape \t \r sequences \n \" \\ \u{1F916} inside and $HOME and ${HOME} and ${NO_HOME:-default}
""" + x'
    escape \t \r sequences \n \" \\ \u{1F916} inside and $HOME and ${HOME} and ${NO_HOME:-default}
' + x'''
    escape \t \r sequences \n \" \\ \u{1F916} inside and $HOME and ${HOME} and ${NO_HOME:-default}
'''

# =================================================================================================
# Imports

# comment
import "m1.just" # comment

import? "other_file.just" # comment

# =================================================================================================
# Modules

# comment
[doc]
mod m1 # comment

# comment
[doc]
mod? m2 # comment

# comment
[doc]
mod m3 "m3-special.just" # comment

# comment
[doc]
mod? m4 "no-mod.just" # comment

# =================================================================================================
# Recipes

# comment
[doc("comment"), private]
[confirm]
r1 arg1 arg2="value" $arg3=(os() / arch()) +args: (r2 arg1 arg2 arg3) # comment
    echo {{ args }}
    echo some other text

[doc: "comment"]
r2 arg1 *args: r3 r4 && r5 (r6 "value" ("other " + "value"))
    -@echo "-@"
    -echo "-"
    @-echo "@-"
    @echo "@"

r3:
    #!/usr/bin/env bash
    echo test

r4:
    #!/usr/bin/bash
    echo test

@r5:
    #!/usr/bin/env -S bash -c {{ "echo" }}
    echo test

r6 *args:
    -@#!/usr/bin/env -S bash -c {{ "echo" }}
    echo test
    echo {{ os() + arch() }}

# =================================================================================================
# Injections

python:
  #!/usr/bin/env python3
  print('Hello from python with {{ v1 + os() }}!')

js:
  #!/usr/bin/env node
  console.log('Greetings from JavaScript with {{ v1 + os() }}!')

perl:
  #!/usr/bin/env perl
  print "Larry Wall says Hi with {{ v1 + os() }}!\n";

sh:
  #!/usr/bin/env sh
  hello='Yo'
  echo "$hello from a shell script with {{ v1 + os() }}!"

nu:
  #!/usr/bin/env nu
  let hello = 'Hola'
  echo $"($hello) from a nushell script with {{ v1 + os() }}!"

ruby:
  #!/usr/bin/env ruby
  puts "Hello from ruby with {{ v1 + os() }}!"

# =================================================================================================
# Settings

# Comment
set allow-duplicate-variables # comment

# Comment
set dotenv-load := true # comment

# Comment
set dotenv-required := false # comment

# Comment
set dotenv-path := "/root/path/does/not/exist.env" # Comment

# Comment
set windows-shell := [
    "list",
    "of",
    "strings",
] # comment
