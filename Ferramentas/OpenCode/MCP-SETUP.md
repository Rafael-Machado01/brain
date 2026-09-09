# MCP Servers — Setup Guide

Guia de configuração dos MCP servers do OpenCode.

## Variáveis de ambiente necessárias

Adicione ao seu `.bashrc` / `.zshrc` / `~/.profile`:

```bash
# Context7 (documentação de libs)
# Obtenha a key em: https://context7.com
export CONTEXT7_API_KEY="ctx7sk-SUA_KEY_AQUI"

# GitHub Personal Access Token
# Obtenha em: GitHub → Settings → Developer settings → Personal access tokens
# Permissões necessárias: repo, read:org
export GITHUB_PERSONAL_ACCESS_TOKEN="ghp_SEU_TOKEN_AQUI"
```

Após adicionar, recarregue o shell:

```bash
source ~/.bashrc  # ou source ~/.zshrc
```

## Servidores

### 1. Context7

Busca documentação atualizada de libs/frameworks em tempo real.

| Campo    | Valor                            |
| -------- | -------------------------------- |
| Tipo     | `remote`                         |
| URL      | `https://mcp.context7.com/mcp`   |
| Auth     | `CONTEXT7_API_KEY` (env var)     |

**Para obter a key:**
1. Acesse https://context7.com
2. Crie uma conta ou faça login
3. Gere uma API key em Settings

### 2. Playwright

Automatização de navegador para testes e scraping.

| Campo    | Valor                                         |
| -------- | --------------------------------------------- |
| Tipo     | `local`                                       |
| Comando  | `npx @playwright/mcp@latest`                  |
| Config   | `~/.config/opencode/playwright-mcp.config.json` |

**Setup:**
```bash
# O playwright MCP é instalado automaticamente via npx
# Mas para browsers, instale:
npx playwright install chromium
```

**Arquivo de config** (`~/.config/opencode/playwright-mcp.config.json`):
```json
{
  "browser": {
    "browserName": "chromium"
  }
}
```

### 3. Filesystem

Acesso a diretórios do sistema via MCP.

| Campo    | Valor                                  |
| -------- | -------------------------------------- |
| Tipo     | `local`                                |
| Comando  | `npx -y @modelcontextprotocol/server-filesystem` |
| Path     | `{env:HOME}/w` (workspace root)        |

**Nota:** O path `{env:HOME}/w` usa a env var `HOME` para ser portável entre sistemas. Ajuste conforme necessário.

### 4. Sequential Thinking

Raciocínio em cadeia para problemas complexos.

| Campo    | Valor                                              |
| -------- | -------------------------------------------------- |
| Tipo     | `local`                                            |
| Comando  | `npx -y @modelcontextprotocol/server-sequential-thinking` |

Sem configuração adicional necessária.

### 5. GitHub

Integração com a API do GitHub (issues, PRs, repos, etc).

| Campo    | Valor                                        |
| -------- | -------------------------------------------- |
| Tipo     | `remote`                                     |
| URL      | `https://api.githubcopilot.com/mcp/`         |
| Auth     | `GITHUB_PERSONAL_ACCESS_TOKEN` (env var)     |

**Para obter o token:**
1. Vá em GitHub → Settings → Developer settings → Personal access tokens → Tokens (classic)
2. Gere um novo token com permissões: `repo`, `read:org`

## Checklist pós-instalação

- [ ] Node.js >= 18 instalado (`node -v`)
- [ ] npx disponível (`which npx`)
- [ ] `CONTEXT7_API_KEY` definida
- [ ] `GITHUB_PERSONAL_ACCESS_TOKEN` definido
- [ ] Playwright chromium instalado (`npx playwright install chromium`)
- [ ] OpenCode consegue conectar nos 5 servers (teste com `/mcp` no opencode)

## Solução de problemas

| Problema                          | Solução                                        |
| --------------------------------- | ---------------------------------------------- |
| "command not found: npx"          | Instale Node.js >= 18                          |
| Context7 auth error               | Verifique se `CONTEXT7_API_KEY` está correta   |
| GitHub 403                        | Verifique as permissões do token               |
| Playwright browser not found      | Rode `npx playwright install chromium`          |
| Filesystem path not found         | Ajuste `{env:HOME}/w` no `opencode.json`       |
