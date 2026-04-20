# tree-sitter-batch

Windows Batch/CMD grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter).

Parses `.bat` and `.cmd` files into a concrete syntax tree for syntax highlighting, code navigation, and analysis.

## Features

- **Control flow** &mdash; `IF`/`ELSE` (EXIST, DEFINED, ERRORLEVEL, comparison with NOT), `FOR` (/D /R /L /F), `GOTO`, `CALL`, `EXIT /B`
- **Variables** &mdash; `SET` (plain, `/A` arithmetic, `/P` prompt), `%VAR%`, `!VAR!`, `%%i`, `%~dp0`, `%VAR:old=new%`, escaped forms `%%VAR%%` `%%%%i`
- **Echo** &mdash; free-form text with literal `(` `)` `!` `%`, inline strings, and variable references
- **Operators** &mdash; pipes `|`, redirects `>` `>>` `2>` `2>&1`, conditional `&&` `||`, separator `&`
- **Structure** &mdash; labels `:name`, comments `REM` `::`, parenthesized blocks, `@ECHO OFF`, macro invocations
- **Scope** &mdash; `SETLOCAL`/`ENDLOCAL` with `ENABLEDELAYEDEXPANSION`
- **Case-insensitive** &mdash; all keywords match regardless of casing

## Example

```batch
@echo off
REM Build script
setlocal enabledelayedexpansion

set "PROJECT=MyApp"
set /a VERSION=1

if not exist "dist" (
  mkdir dist
)

for %%f in (src\*.txt) do (
  copy "%%f" "dist\"
)

if %ERRORLEVEL% == 0 (
  echo Build successful
) else (
  echo Build failed
  exit /b 1
)

exit /b 0
```

Parsed tree:

```
(program
  (echo_off)
  (comment)
  (setlocal_stmt)
  (variable_assignment
    (set_keyword) (variable_name) (assignment_value))
  (variable_assignment
    (set_keyword) (arithmetic_assignment (set_option) (arithmetic_expression)))
  (if_stmt
    (string)
    (parenthesized
      (cmd (command_name) (argument_list (argument_value)))))
  (for_stmt
    (for_variable)
    (for_set (for_set_literal))
    (parenthesized
      (cmd (command_name) (argument_list (string) (string)))))
  (if_stmt
    (variable_reference)
    (comparison_op)
    (argument_value)
    (parenthesized
      (cmd (command_name) (argument_list (argument_value) (argument_value))))
    (else_clause
      (parenthesized
        (cmd (command_name) (argument_list (argument_value) (argument_value)))
        (exit_stmt (integer)))))
  (exit_stmt (integer)))
```

## Installation

### npm

```sh
npm install tree-sitter-batch
```

### Cargo

```sh
cargo add tree-sitter-batch
```

### PyPI

```sh
pip install tree-sitter-batch
```

### Go

```go
import tree_sitter_batch "github.com/wharflab/tree-sitter-batch/bindings/go"
```

The root package also exports the bundled `queries/highlights.scm` via `go:embed`:

```go
import batch "github.com/wharflab/tree-sitter-batch"

lang := batch.GetLanguage()
query, _ := batch.GetHighlightsQuery()
// or access the raw .scm source:
// raw := batch.HighlightsQuery
```

## Usage

### Node.js

```javascript
import Parser from "tree-sitter";
import Batch from "tree-sitter-batch";

const parser = new Parser();
parser.setLanguage(Batch);

const tree = parser.parse(`@echo off\necho Hello World\n`);
console.log(tree.rootNode.toString());
```

### Rust

```rust
let mut parser = tree_sitter::Parser::new();
let language = tree_sitter_batch::LANGUAGE;
parser.set_language(&language.into()).unwrap();

let tree = parser.parse("@echo off\necho Hello\n", None).unwrap();
println!("{}", tree.root_node().to_sexp());
```

### Python

```python
from tree_sitter import Language, Parser
import tree_sitter_batch

parser = Parser(Language(tree_sitter_batch.language()))
tree = parser.parse(b"@echo off\necho Hello\n")
print(tree.root_node.sexp())
```

## Syntax Highlighting

The grammar ships with a `queries/highlights.scm` file for use in editors that support tree-sitter highlighting (Neovim, Helix, Zed, etc.).

## References

- Grammar informed by [Blinter](https://github.com/tboy1337/Blinter) batch file linter (159 rules)
- [SS64 CMD reference](https://ss64.com/nt/)
- [Microsoft CMD documentation](https://learn.microsoft.com/en-us/windows-server/administration/windows-commands/windows-commands)

## License

[MIT](LICENSE)
