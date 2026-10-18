-- Run from the repo root: nvim --headless -u NONE -i NONE -n -l test/neovim_queries.lua /path/to/hurl.so [nvim-treesitter checkout]
assert(vim.fn.has('nvim-0.12') == 1, 'These queries target Neovim 0.12+')
assert(arg[1], 'Pass the path to a Hurl parser built with src/scanner.c')
if arg[2] then
  vim.opt.runtimepath:append(arg[2])
  if vim.fn.isdirectory(arg[2] .. '/runtime') == 1 then
    vim.opt.runtimepath:append(arg[2] .. '/runtime')
  end
end
vim.treesitter.language.add('hurl', { path = arg[1] })

local function read(path)
  return table.concat(vim.fn.readfile(path), '\n')
end

local queries = {}
for _, name in ipairs({ 'highlights', 'injections', 'indents', 'folds' }) do
  local text = read('queries/neovim/' .. name .. '.scm')
  queries[name] = vim.treesitter.query.parse('hurl', text)
  vim.treesitter.query.set('hurl', name, text)
end

local function parse(source)
  local parser = vim.treesitter.get_string_parser(source, 'hurl')
  local root = parser:parse()[1]:root()
  assert(not root:has_error(), source .. '\n' .. root:sexpr())
  return root
end

local function range_key(node)
  return table.concat({ node:range() }, ':')
end

local field_captures = {
  section_header = 'module',
  option_key = 'constant.builtin',
  query_name = 'function.builtin',
  filter_key = 'function.builtin',
  predicate_name = 'keyword.operator',
}
local node_captures = {
  ['function'] = 'function.builtin',
  certificate_attribute = 'string.special',
  duration_unit = 'string.special',
  filename = 'string.special.path',
  filename_password = 'string.special.path',
  filename_password_escaped_char = 'string.escape',
  oneline_string = 'string',
  multiline_string_content = 'string',
  json_boolean = 'boolean',
  xml_comment = 'comment',
  xml_attribute_value = 'string',
  xml_cdata = 'string',
}

local fixture_count = 0
for _, file in ipairs({ 'hurl8-features.json', 'hurl8-values.json' }) do
  for _, case in ipairs(vim.json.decode(read('test/fixtures/' .. file))) do
    local source = case.source
    local root = parse(source)
    local captures = {}
    for id, node in queries.highlights:iter_captures(root, source) do
      local name = queries.highlights.captures[id]
      captures[name] = captures[name] or {}
      captures[name][range_key(node)] = true
    end
    local function check(node, capture)
      assert(captures[capture] and captures[capture][range_key(node)],
        case.name .. ': missing @' .. capture .. ' for ' .. vim.treesitter.get_node_text(node, source))
    end
    local function visit(node)
      for field, capture in pairs(field_captures) do
        for _, child in ipairs(node:field(field)) do
          check(child, capture)
        end
      end
      if node_captures[node:type()] then
        check(node, node_captures[node:type()])
      end
      if node:type() == 'verbosity_option' then
        check(node:field('level')[1], 'constant.builtin')
      elseif node:type() == 'xml_name' then
        check(node, node:parent():type() == 'xml_attribute' and 'tag.attribute' or 'tag')
      end
      for child in node:iter_children() do
        if child:named() then
          visit(child)
        end
      end
    end
    visit(root)
    fixture_count = fixture_count + 1
  end
end

local function injections(source)
  local result = {}
  for _, match, metadata in queries.injections:iter_matches(parse(source), source) do
    local injection = { language = metadata['injection.language'], content = {} }
    for id, nodes in pairs(match) do
      for _, node in ipairs(nodes) do
        local capture = queries.injections.captures[id]
        if capture == 'injection.language' then
          injection.language = vim.treesitter.get_node_text(node, source)
        elseif capture == 'injection.content' then
          table.insert(injection.content, vim.treesitter.get_node_text(node, source))
        end
      end
    end
    injection.include_children = metadata['injection.include-children']
    assert(not metadata['injection.combined'], 'Separate bodies must not be combined')
    table.insert(result, injection)
  end
  return result
end

local native_json = 'POST https://example.org\n{"x": {{value}}, "s": "{{name}}", "nested": [true, null]}\n'
assert(#injections(native_json) == 0, 'Native JSON must retain Hurl template parsing')
local xml = injections('POST https://example.org\n<root attr="x"><child/></root>\n')
assert(#xml == 1 and xml[1].language == 'xml' and xml[1].include_children)
assert(xml[1].content[1] == '<root attr="x"><child/></root>')

local fences = injections([[POST https://example.org
```json
{"x": {{value}}, "y": true}
```
POST https://example.org
```json
{"second": 2}
```
POST https://example.org
```xml
<root/>
```
POST https://example.org
```raw
{{literal}}
```
]])
assert(#fences == 3, 'Raw fences must not be injected')
assert(fences[1].language == 'json' and #fences[1].content > 1)
assert(table.concat(fences[1].content) == '{"x": , "y": true}\n')
assert(fences[2].language == 'json' and table.concat(fences[2].content) == '{"second": 2}\n')
assert(fences[3].language == 'xml' and table.concat(fences[3].content) == '<root/>\n')

for _, case in ipairs({
  { 'https://example.org/path?q=1', true },
  { 'http://example.org', true },
  { '\thttps://example.org/path  ', true },
  { 'https://example.org/not a URL', false },
  { 'https://{{host}}/path', false },
  { 'https://example.org/\\#fragment', false },
  { '{{url}}', false },
  { 'ftp://example.org', false },
}) do
  local source = 'GET ' .. case[1] .. '\nLocation: https://example.org/other\n'
  local highlighted, linked = false, false
  for _, match, metadata in queries.highlights:iter_matches(parse(source), source) do
    for id, nodes in pairs(match) do
      if queries.highlights.captures[id] == 'string.special.url' then
        for _, node in ipairs(nodes) do
          assert(vim.treesitter.get_node_text(node, source, { metadata = metadata[id] }) == vim.trim(case[1]),
            'Only trimmed request URLs get URL captures')
          highlighted = true
        end
        linked = linked or (metadata[id] and metadata[id].url == id) or false
      end
    end
  end
  assert(highlighted and linked == case[2], 'Incorrect hyperlink metadata for ' .. case[1])
end

local xml_source = 'POST https://example.org\n<root attr="x"><child/></root>\n'
local xml_captures = {}
for id, node in queries.highlights:iter_captures(parse(xml_source), xml_source) do
  local key = queries.highlights.captures[id] .. ':' .. vim.treesitter.get_node_text(node, xml_source)
  xml_captures[key] = (xml_captures[key] or 0) + 1
end
assert(xml_captures['tag:root'] == 2 and xml_captures['tag:child'] == 1)
assert(xml_captures['tag.attribute:attr'] == 1)
assert(xml_captures['tag.delimiter:<'] == 2 and xml_captures['tag.delimiter:</'] == 1)
assert(xml_captures['tag.delimiter:>'] == 2 and xml_captures['tag.delimiter:/>'] == 1)
local comparison = 'GET https://example.org\nHTTP 200\n[Asserts]\nstatus > 100\n'
for id in queries.highlights:iter_captures(parse(comparison), comparison) do
  assert(queries.highlights.captures[id] ~= 'tag.delimiter', 'XML delimiters must not capture comparisons')
end

local native_parser = vim.treesitter.get_string_parser(native_json, 'hurl')
native_parser:parse(true)
assert(not native_parser:children().json, 'Native JSON must not create an injected JSON parser')

local json_ok, have_json = pcall(vim.treesitter.language.add, 'json')
local xml_ok, have_xml = pcall(vim.treesitter.language.add, 'xml')
have_json = json_ok and have_json
have_xml = xml_ok and have_xml
local runtime_source = [[POST https://example.org
```json
{"s": "{{name}}", "first": 1}
```
POST https://example.org
```json
{"second": 2}
```
POST https://example.org
```xml
<root/>
```
]]
local runtime_parser = vim.treesitter.get_string_parser(runtime_source, 'hurl')
runtime_parser:parse(true)
if have_json then
  local child = assert(runtime_parser:children().json)
  assert(#child:trees() == 2, 'Each JSON fence must produce its own tree')
  local template_start, template_end = vim.split(runtime_source, '\n')[3]:find('{{name}}', 1, true)
  for _, tree in ipairs(child:trees()) do
    assert(not tree:root():has_error(), tree:root():sexpr())
    for _, range in ipairs(tree:included_ranges()) do
      local sr, sc, er, ec = unpack(range)
      local overlaps_template = (sr < 2 or (sr == 2 and sc < template_end))
        and (er > 2 or (er == 2 and ec > template_start - 1))
      assert(not overlaps_template, 'Injected ranges must exclude {{name}}')
    end
  end
else
  print('SKIP: injected JSON trees (install a json parser on runtimepath)')
end
if have_xml then
  local child = assert(runtime_parser:children().xml)
  assert(#child:trees() == 1 and not child:trees()[1]:root():has_error())
else
  print('SKIP: injected XML trees (install an xml parser on runtimepath)')
end

local function buffer(source)
  local buf = vim.api.nvim_create_buf(false, true)
  vim.api.nvim_set_current_buf(buf)
  vim.bo.filetype = 'hurl'
  vim.bo.shiftwidth = 2
  vim.bo.expandtab = true
  vim.api.nvim_buf_set_lines(buf, 0, -1, false, vim.split(source, '\n', { plain = true }))
  vim.treesitter.get_parser(buf, 'hurl'):parse(true)
  return buf
end

local xml_buf = buffer('POST https://example.org\n<root>\n  <child/>\n</root>')
vim.bo.commentstring = '# %s'
vim.treesitter.start(xml_buf, 'hurl')
require('vim._comment').toggle_lines(3, 3, { 3, 2 })
assert(vim.api.nvim_buf_get_lines(xml_buf, 2, 3, false)[1] == '  <!-- <child/> -->')
require('vim._comment').toggle_lines(3, 3, { 3, 2 })
assert(vim.api.nvim_buf_get_lines(xml_buf, 2, 3, false)[1] == '  <child/>')
require('vim._comment').toggle_lines(1, 1, { 1, 0 })
assert(vim.api.nvim_buf_get_lines(xml_buf, 0, 1, false)[1] == '# POST https://example.org')

buffer('POST https://example.org\n{\n  "items": [\n    1,\n    2\n  ]\n}\nHTTP 200')
vim.wo.foldmethod = 'expr'
vim.wo.foldexpr = 'v:lua.vim.treesitter.foldexpr()'
vim.wo.foldminlines = 0
vim.wo.foldlevel = 99
vim.cmd('normal! zx')
assert(vim.wait(1000, function()
  return vim.fn.foldlevel(3) > vim.fn.foldlevel(2) and vim.fn.foldlevel(2) > 0
end), 'Native JSON arrays must retain nested folds without JSON injection')
assert(vim.fn.foldlevel(8) < vim.fn.foldlevel(7), 'Body folds must end before the response')

local have_indent, indent = pcall(require, 'nvim-treesitter.indent')
if have_indent then
  for _, hint in ipairs({ 'raw', '', 'hurl_test_no_parser' }) do
    local source = 'POST https://example.org\n```' .. hint .. '\n    first\n      second\n```'
    local buf = buffer(source)
    assert(indent.get_indent(3) == -1 and indent.get_indent(4) == -1, 'Preserve ' .. hint .. ' payload whitespace')
    vim.bo.indentexpr = "v:lua.require'nvim-treesitter.indent'.get_indent(v:lnum)"
    vim.cmd('silent normal! gg=G')
    assert(table.concat(vim.api.nvim_buf_get_lines(buf, 0, -1, false), '\n') == source)
  end
  local buf = buffer('POST https://example.org\n{\n"items": [\n1,\n2\n]\n}')
  vim.bo.indentexpr = "v:lua.require'nvim-treesitter.indent'.get_indent(v:lnum)"
  vim.cmd('silent normal! gg=G')
  assert(table.concat(vim.api.nvim_buf_get_lines(buf, 0, -1, false), '\n')
    == 'POST https://example.org\n{\n  "items": [\n    1,\n    2\n  ]\n}')
  if have_json then
    local fenced = buffer('POST https://example.org\n```json\n{\n"items": [\n1\n]\n}\n```')
    vim.bo.indentexpr = "v:lua.require'nvim-treesitter.indent'.get_indent(v:lnum)"
    vim.cmd('silent normal! gg=G')
    assert(table.concat(vim.api.nvim_buf_get_lines(fenced, 0, -1, false), '\n')
      == 'POST https://example.org\n```json\n{\n  "items": [\n    1\n  ]\n}\n```',
      'Injected JSON indentation must take precedence over the multiline fallback')
  end
else
  print('SKIP: indentation behavior (pass a nvim-treesitter checkout as the second argument)')
end

print(('Neovim queries: all four compile; %d highlight fixtures and behavior regressions passed'):format(fixture_count))
