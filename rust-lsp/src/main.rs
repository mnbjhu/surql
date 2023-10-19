use std::sync::{Arc, Mutex};

use tower_lsp::lsp_types::InitializeParams;
use tower_lsp::{
    jsonrpc::Result,
    lsp_types::{DidOpenTextDocumentParams, InitializeResult, InitializedParams, MessageType},
    Client, LanguageServer, LspService, Server,
};

struct Backend {
    client: Client,
    parser: Arc<Mutex<tree_sitter::Parser>>,
    tree: Arc<Mutex<Option<tree_sitter::Tree>>>,
}

#[tower_lsp::async_trait]
impl LanguageServer for Backend {
    async fn initialize(&self, _: InitializeParams) -> Result<InitializeResult> {
        Ok(InitializeResult::default())
    }

    async fn initialized(&self, _: InitializedParams) {
        self.client
            .log_message(MessageType::INFO, "server initialized!")
            .await;
    }

    async fn did_open(&self, params: DidOpenTextDocumentParams) {
        let tree = self
            .parser
            .lock()
            .unwrap()
            .parse(&params.text_document.text, None)
            .unwrap();
    }

    async fn shutdown(&self) -> Result<()> {
        Ok(())
    }
}

#[tokio::main]
async fn main() {
    let mut parser = tree_sitter::Parser::new();
    parser
        .set_language(tree_sitter_surrealql::language())
        .unwrap();
    let stdin = tokio::io::stdin();
    let stdout = tokio::io::stdout();
    let mut parser = tree_sitter::Parser::new();
    parser
        .set_language(tree_sitter_surrealql::language())
        .unwrap();

    let (service, socket) = LspService::new(|client| Backend {
        client,
        parser: Arc::new(Mutex::new(parser)),
    });
    Server::new(stdin, stdout, socket).serve(service).await;
}
