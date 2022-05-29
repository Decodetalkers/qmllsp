local configs = require("lspconfig.configs")
local nvim_lsp = require("lspconfig")

configs.nu_lsp = {
    default_config = {
        cmd = { "./target/debug/nulsp" },
        filetypes = {"nu"},
        root_dir = function(fname)
            return nvim_lsp.util.find_git_ancestor(fname)
        end,
        on_attach = function (client, bufnr)
            vim.notify("test")
            require("cmps.cmp_onattach")(client,bufnr)
        end
    }
}
nvim_lsp.nu_lsp.setup({})
