extern crate cc;

fn main() {
    println!("cargo:rerun-if-changed=../tree-sitter-surrealql/src/parser.c");
    cc::Build::new()
        .include("../tree-sitter-surrealql/src")
        .file("../tree-sitter-surrealql/src/parser.c")
        .compile("tree_sitter_surrealql");
}
