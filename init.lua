vim.filetype.add({
  extension = {
    suql = "suql",
  },
})

local parser_config = require("nvim-treesitter.parsers").get_parser_configs()
parser_config.surrealql = {
  install_info = {
    url = "~/surql/tree-sitter-surrealql",
    files = { "src/parser.c" },
  },
  filetype = "suql",
}

local highlights_scm = [[
	(create_token) @keyword
	(select_token) @keyword
	(delete_token) @keyword
	(update_token) @keyword
	(content_token) @keyword

	(let_token) @keyword
	(from_token) @keyword
	(define_token) @keyword
	(on_table_token) @keyword
	(field_token) @keyword
	(table_token) @keyword
	(return_token) @keyword

	(type_token) @keyword
	(function_token) @keyword

  (string) @string
  (number) @number
  (field_name) @field

  (table_name) @local.reference

  (variable_name) @property

  ]]

local runtime_path = vim.fn.stdpath("cache")
vim.opt.runtimepath:append(runtime_path)
vim.fn.mkdir(runtime_path .. "/queries/surrealql", "p")

if vim.fn.isdirectory(runtime_path .. "/queries/surrealql") == 1 then
  local highlights_file = io.open(runtime_path .. "/queries/surrealql/highlights.scm", "w")
  io.output(highlights_file)
  io.write(highlights_scm)
  io.close(highlights_file)
end

local lspconfig = require("lspconfig")
local configs = require("lspconfig.configs")

if not configs.surrealql then
  configs.surrealql = {
    default_config = {
      cmd = { "surrealdb-lsp", "--stdio" },
      root_dir = lspconfig.util.root_pattern(".root_dir"),
      filetypes = { "suql" },
    },
  }
end
lspconfig.surrealql.setup({})
