local configs = require("lspconfig.configs")
local nvim_lsp = require("lspconfig")

configs.qmllsp = {
    default_config = {
        cmd = { "./target/debug/qmllsp" },
        filetypes = {"qml"},
        root_dir = function(fname)
            return nvim_lsp.util.find_git_ancestor(fname)
        end,
        on_attach = function (client, bufnr)
            vim.notify("test")
            require("cmps.cmp_onattach")(client,bufnr)
        end
    }
}
nvim_lsp.qmllsp.setup({})
