fn main() {
    println!("Hello, world!");
}

#[rust_sitter::grammar("surrealdb")]
mod grammar {

    #[rust_sitter::language]
    pub enum Block {
        #[rust_sitter::leaf()]
        Statement,
    }
}
