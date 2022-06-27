use serde_json::Value;
use std::process::Command;
use tower_lsp::jsonrpc::Result;
use tower_lsp::lsp_types::*;
use tower_lsp::{Client, LanguageServer, LspService, Server};
use tree_sitter::Parser;
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
                    ..Default::default()
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
            ..Default::default()
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

    async fn did_open(&self, _: DidOpenTextDocumentParams) {
        self.client
            .log_message(MessageType::INFO, "file opened!")
            .await;
    }

    async fn did_change(&self, input: DidChangeTextDocumentParams) {
        // create a parse
        let mut parse = Parser::new();
        parse.set_language(tree_sitter_qml::language()).unwrap();
        //for message in &input.content_changes {
        //    notify_send(&message.text, Type::Info);
        //}

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
}

#[tokio::main]
async fn main() {
    tracing_subscriber::fmt().init();

    let (stdin, stdout) = (tokio::io::stdin(), tokio::io::stdout());

    let (service, socket) = LspService::new(|client| Backend { client });
    Server::new(stdin, stdout, socket).serve(service).await;
}
