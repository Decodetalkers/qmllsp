use serde_json::Value;
use std::process::Command;
//use std::sync::Arc;
//use tokio::sync::Mutex;
use tower_lsp::jsonrpc::Result;
use tower_lsp::lsp_types::*;
use tower_lsp::{Client, LanguageServer, LspService, Server};
use tree_sitter::Parser;
//use tree_sitter::Point;

#[allow(dead_code)]
enum Type {
    Error,
    Warning,
    Info,
}
impl ToString for Type {
    fn to_string(&self) -> String {
        match self {
            Type::Warning => "Warning".to_string(),
            Type::Error => "Error".to_string(),
            Type::Info => "Info".to_string(),
        }
    }
}
fn notify_send(input: &str, typeinput: Type) {
    Command::new("notify-send")
        .arg(typeinput.to_string())
        .arg(input)
        .spawn()
        .expect("Error");
}
#[derive(Debug)]
struct Backend {
    client: Client,
    //    tree: Arc<Mutex<Option<Tree>>>,
}
//impl From<tree_sitter::Point> for Position {
//    fn from(input: tree_sitter::Point) -> Self {
//        Position { line: input.row as u32, character: input.column as u32 }
//    }
//}
// it should return Option<Vec<Point,Point>>

fn checkerror(input: tree_sitter::Node) -> Option<Vec<(tree_sitter::Point, tree_sitter::Point)>> {
    if input.has_error() {
        if input.is_error() {
            Some(vec![(input.start_position(), input.end_position())])
        } else {
            let mut course = input.walk();
            {
                let mut output = vec![];
                for node in input.children(&mut course) {
                    if let Some(mut tran) = checkerror(node) {
                        output.append(&mut tran);
                    }
                }
                if output.is_empty() {
                    None
                } else {
                    Some(output)
                }
            }
        }
    } else {
        None
    }
}
#[tower_lsp::async_trait]
impl LanguageServer for Backend {
    async fn initialize(&self, _: InitializeParams) -> Result<InitializeResult> {
        Ok(InitializeResult {
            server_info: None,
            capabilities: ServerCapabilities {
                text_document_sync: Some(TextDocumentSyncCapability::Kind(
                    TextDocumentSyncKind::FULL,
                )),
                completion_provider: Some(CompletionOptions {
                    resolve_provider: Some(false),
                    trigger_characters: Some(vec![
                        ".".to_string(),
                        //" ".to_string(),
                        "|".to_string(),
                        "-".to_string(),
                        //"|".to_string(),
                    ]),
                    work_done_progress_options: Default::default(),
                    all_commit_characters: None,
                }),
                execute_command_provider: Some(ExecuteCommandOptions {
                    commands: vec!["dummy.do_something".to_string()],
                    work_done_progress_options: Default::default(),
                }),
                workspace: Some(WorkspaceServerCapabilities {
                    workspace_folders: Some(WorkspaceFoldersServerCapabilities {
                        supported: Some(true),
                        change_notifications: Some(OneOf::Left(true)),
                    }),
                    file_operations: None,
                }),
                ..ServerCapabilities::default()
            },
        })
    }

    async fn initialized(&self, _: InitializedParams) {
        self.client
            .log_message(MessageType::INFO, "initialized!")
            .await;
    }

    async fn shutdown(&self) -> Result<()> {
        Ok(())
    }

    async fn did_change_workspace_folders(&self, _: DidChangeWorkspaceFoldersParams) {
        self.client
            .log_message(MessageType::INFO, "workspace folders changed!")
            .await;
    }

    async fn did_change_configuration(&self, _: DidChangeConfigurationParams) {
        self.client
            .log_message(MessageType::INFO, "configuration changed!")
            .await;
    }

    async fn did_change_watched_files(&self, _: DidChangeWatchedFilesParams) {
        self.client
            .log_message(MessageType::INFO, "watched files have changed!")
            .await;
    }

    async fn execute_command(&self, _: ExecuteCommandParams) -> Result<Option<Value>> {
        self.client
            .log_message(MessageType::INFO, "command executed!")
            .await;

        match self.client.apply_edit(WorkspaceEdit::default()).await {
            Ok(res) if res.applied => self.client.log_message(MessageType::INFO, "applied").await,
            Ok(_) => self.client.log_message(MessageType::INFO, "rejected").await,
            Err(err) => self.client.log_message(MessageType::ERROR, err).await,
        }

        Ok(None)
    }

    async fn did_open(&self, input: DidOpenTextDocumentParams) {
        let mut parse = Parser::new();
        parse.set_language(tree_sitter_qml::language()).unwrap();
        let thetree = parse.parse(input.text_document.text.clone(), None);
        if let Some(tree) = thetree {
            let gammererror = checkerror(tree.root_node());
            if let Some(diagnoses) = gammererror {
                let mut pusheddiagnoses = vec![];
                for (start, end) in diagnoses {
                    let pointx = lsp_types::Position::new(start.row as u32, start.column as u32);
                    let pointy = lsp_types::Position::new(end.row as u32, end.column as u32);
                    let range = Range {
                        start: pointx,
                        end: pointy,
                    };
                    let diagnose = Diagnostic {
                        range,
                        severity: None,
                        code: None,
                        code_description: None,
                        source: None,
                        message: "gammererror".to_string(),
                        related_information: None,
                        tags: None,
                        data: None,
                    };
                    pusheddiagnoses.push(diagnose);
                }
                self.client
                    .publish_diagnostics(input.text_document.uri.clone(), pusheddiagnoses, Some(1))
                    .await;
            }
        }
        self.client
            .log_message(MessageType::INFO, "file opened!")
            .await;
    }

    async fn did_change(&self, input: DidChangeTextDocumentParams) {
        // create a parse
        let mut parse = Parser::new();
        parse.set_language(tree_sitter_qml::language()).unwrap();
        let thetree = parse.parse(input.content_changes[0].text.clone(), None);
        if let Some(tree) = thetree {
            let gammererror = checkerror(tree.root_node());
            if let Some(diagnoses) = gammererror {
                let mut pusheddiagnoses = vec![];
                for (start, end) in diagnoses {
                    let pointx = lsp_types::Position::new(start.row as u32, start.column as u32);
                    let pointy = lsp_types::Position::new(end.row as u32, end.column as u32);

                    let range = Range {
                        start: pointx,
                        end: pointy,
                    };
                    let diagnose = Diagnostic {
                        range,
                        severity: None,
                        code: None,
                        code_description: None,
                        source: None,
                        message: "gammererror".to_string(),
                        related_information: None,
                        tags: None,
                        data: None,
                    };
                    pusheddiagnoses.push(diagnose);
                }
                self.client
                    .publish_diagnostics(input.text_document.uri.clone(), pusheddiagnoses, Some(1))
                    .await;
            } else {
                self.client
                    .publish_diagnostics(input.text_document.uri.clone(), vec![], None)
                    .await;
                //self.client.semantic_tokens_refresh().await.unwrap();
            }
        }
        self.client
            .log_message(MessageType::INFO, &format!("{:?}", input))
            .await;
    }

    async fn did_save(&self, _: DidSaveTextDocumentParams) {
        self.client
            .log_message(MessageType::INFO, "file saved!")
            .await;
    }
    async fn signature_help(&self, _: SignatureHelpParams) -> Result<Option<SignatureHelp>> {
        Ok(Some(SignatureHelp {
            signatures: vec![SignatureInformation {
                label: "Test".to_string(),
                documentation: None,
                parameters: None,
                active_parameter: None,
            }],
            active_signature: None,
            active_parameter: None,
        }))
    }
    async fn hover(&self, _params: HoverParams) -> Result<Option<Hover>> {
        self.client.log_message(MessageType::INFO, "Hovered!").await;
        Ok(Some(Hover {
            contents: HoverContents::Scalar(MarkedString::String("Test".to_string())),
            range: None,
        }))
    }
    async fn did_close(&self, _: DidCloseTextDocumentParams) {
        self.client
            .log_message(MessageType::INFO, "file closed!")
            .await;
        notify_send("file closed", Type::Info);
    }
    async fn completion(&self, input: CompletionParams) -> Result<Option<CompletionResponse>> {
        self.client.log_message(MessageType::INFO, "Complete").await;
        if let Some(contexts) = input.context {
            match contexts.trigger_character {
                Some(completea) => match completea.as_str() {
                    "|" => Ok(Some(CompletionResponse::Array(vec![
                        CompletionItem {
                            label: "help".to_string(),
                            kind: Some(CompletionItemKind::METHOD),
                            detail: Some("Dispaly help information about commands".to_string()),
                            ..CompletionItem::default()
                        },
                        CompletionItem {
                            label: "char".to_string(),
                            kind: Some(CompletionItemKind::METHOD),
                            detail: Some("Output special character (eg., 'newline')".to_string()),
                            ..CompletionItem::default()
                        },
                    ]))),
                    "-" => Ok(Some(CompletionResponse::Array(vec![
                        CompletionItem {
                            label: "--all".to_string(),
                            kind: Some(CompletionItemKind::TYPE_PARAMETER),
                            detail: Some("Show hidden files".to_string()),
                            ..CompletionItem::default()
                        },
                        CompletionItem {
                            label: "-a".to_string(),
                            kind: Some(CompletionItemKind::TYPE_PARAMETER),
                            detail: Some("Show hidden files".to_string()),
                            ..CompletionItem::default()
                        },
                        CompletionItem {
                            label: "--du".to_string(),
                            kind: Some(CompletionItemKind::TYPE_PARAMETER),
                            detail: Some("Dispaly the apparent directory size in place of the directory metadata size".to_string()),
                            ..CompletionItem::default()
                        },
                        CompletionItem {
                            label: "-d".to_string(),
                            kind: Some(CompletionItemKind::TYPE_PARAMETER),
                            detail: Some("Dispaly the apparent directory size in place of the directory metadata size".to_string()),
                            ..CompletionItem::default()
                        },
                    ]))),

                    "." => Ok(Some(CompletionResponse::Array(vec![
                        CompletionItem::new_simple("Hello".to_string(), "Some detail".to_string()),
                        CompletionItem::new_simple("Bye".to_string(), "More detail".to_string()),
                        CompletionItem {
                            label: "test".to_string(),
                            kind: Some(CompletionItemKind::METHOD),
                            detail: Some("beta".to_string()),
                            ..CompletionItem::default()
                        },
                    ]))),
                    _ => Ok(Some(CompletionResponse::Array(vec![
                        CompletionItem {
                            label: "help".to_string(),
                            kind: Some(CompletionItemKind::METHOD),
                            detail: Some("Dispaly help information about commands".to_string()),
                            ..CompletionItem::default()
                        },
                        CompletionItem {
                            label: "char".to_string(),
                            kind: Some(CompletionItemKind::METHOD),
                            detail: Some("Output special character (eg., 'newline')".to_string()),
                            ..CompletionItem::default()
                        },
                    ]))),
                },
                _ => Ok(Some(CompletionResponse::Array(vec![
                    CompletionItem {
                        label: "help".to_string(),
                        kind: Some(CompletionItemKind::METHOD),
                        detail: Some("Dispaly help information about commands".to_string()),
                        ..CompletionItem::default()
                    },
                    CompletionItem {
                        label: "char".to_string(),
                        kind: Some(CompletionItemKind::METHOD),
                        detail: Some("Output special character (eg., 'newline')".to_string()),
                        ..CompletionItem::default()
                    },
                ]))),
            }
        } else {
            Ok(Some(CompletionResponse::Array(vec![
                CompletionItem {
                    label: "help".to_string(),
                    kind: Some(CompletionItemKind::METHOD),
                    detail: Some("Dispaly help information about commands".to_string()),
                    ..CompletionItem::default()
                },
                CompletionItem {
                    label: "char".to_string(),
                    kind: Some(CompletionItemKind::METHOD),
                    detail: Some("Output special character (eg., 'newline')".to_string()),
                    ..CompletionItem::default()
                },
            ])))
        }
    }
    // TODO
    async fn document_symbol(
        &self,
        _: DocumentSymbolParams,
    ) -> Result<Option<DocumentSymbolResponse>> {
        Ok(None)
    }
}

#[tokio::main]
async fn main() {
    tracing_subscriber::fmt().init();

    let (stdin, stdout) = (tokio::io::stdin(), tokio::io::stdout());

    let (service, socket) = LspService::new(|client| Backend { client });
    Server::new(stdin, stdout, socket).serve(service).await;
}
#[cfg(test)]
mod tests {
    #[test]
    fn test_gamma() {
        let source = "import";
        let mut parse = tree_sitter::Parser::new();
        parse.set_language(tree_sitter_qml::language()).unwrap();
        let tree = parse.parse(source, None).unwrap();
        assert_eq!(tree.root_node().to_sexp(), "(source_file (ERROR))");
    }
}
