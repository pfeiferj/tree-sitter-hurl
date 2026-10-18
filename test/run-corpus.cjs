const fs = require("node:fs");
const os = require("node:os");
const path = require("node:path");
const { spawnSync } = require("node:child_process");

const root = path.resolve(__dirname, "..");
const sandbox = fs.mkdtempSync(path.join(os.tmpdir(), "tree-sitter-hurl-"));
try {
  // The CLI validates every query recursively. Keep Neovim-only directives out
  // of its query directory; their behavior is tested by neovim_queries.lua.
  for (const name of ["src", "test"]) {
    fs.symlinkSync(path.join(root, name), path.join(sandbox, name), "junction");
  }
  for (const name of ["grammar.js", "tree-sitter.json"]) {
    fs.copyFileSync(path.join(root, name), path.join(sandbox, name));
  }
  fs.mkdirSync(path.join(sandbox, "queries"));
  for (const name of fs.readdirSync(path.join(root, "queries"))) {
    if (name.endsWith(".scm")) {
      fs.copyFileSync(path.join(root, "queries", name), path.join(sandbox, "queries", name));
    }
  }
  const result = spawnSync(process.execPath,
    [require.resolve("tree-sitter-cli/cli.js"), "test", ...process.argv.slice(2)],
    { cwd: sandbox, stdio: "inherit" });
  if (result.error) throw result.error;
  process.exitCode = result.status ?? 1;
} finally {
  fs.rmSync(sandbox, { recursive: true, force: true });
}
