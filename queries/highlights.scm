; Keywords
"Project" @keyword
"Table" @keyword
"TableGroup" @keyword

(comment) @comment

(data_type (identifier)) @type

((identifier) @property
 (#match? @property "^_?[a-z][a-z\\d_]+$"))

(string) @string
