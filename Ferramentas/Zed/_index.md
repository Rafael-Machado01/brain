# Zed

Configuração do editor [Zed](https://zed.dev) — estilo minimal.

Local real da config (flatpak):
`~/.var/app/dev.zed.Zed/config/zed/settings.json`

O arquivo `settings.json` nesta pasta é a versão versionada. Para aplicar,
copie-o de volta ao local acima ou crie um symlink.

## Ajustes aplicados (manter em mente)

- **Tema**: `Oscura` (extensão) — fallback `Gruvbox Dark`
- **Fontes**: JetBrains Mono (buffer) / JetBrainsMono Nerd Font (terminal)
- **Editor minimal**: sem scrollbar, sem whitespace, sem ícones de code-action no gutter
- **`tab_size`**: 2 global (redundâncias por linguagem foram removidas)

## Como aplicar uma alteração

1. Edite o `settings.json` local em `~/.var/app/dev.zed.Zed/config/zed/settings.json`
2. Copie/versiona aqui:
   ```bash
   cp ~/.var/app/dev.zed.Zed/config/zed/settings.json ~/w/brain/Ferramentas/Zed/settings.json
   ```
3. Commit no vault.

> Alternativa (sync automático): substitua o arquivo local por um symlink apontando para cá:
> ```bash
> ln -sf ~/w/brain/Ferramentas/Zed/settings.json ~/.var/app/dev.zed.Zed/config/zed/settings.json
> ```
> Assim, editar no vault aplica direto no Zed.
