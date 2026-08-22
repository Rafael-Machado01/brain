# Brain

Vault de conhecimento pessoal no [Obsidian](https://obsidian.md). Estrutura organizada para estudos de Análise e Desenvolvimento de Sistemas, cursos online e leitura de livros.

## Estrutura

```
brain/
├── _index.md                              ← Home page do vault
├── Templates/                             ← Modelos para novas notas
│   ├── aula.md
│   ├── livro.md
│   ├── daily.md
│   └── projeto.md
├── Livros/                                ← Estudo de livros
│   ├── _index.md                          ← Índice da seção
│   ├── Atual/                             ← Livros em andamento
│   ├── Concluidos/                        ← Livros finalizados
│   └── Fila/                              ← Fila de leitura
├── Analise Desenvolvimento de Sistemas/   ← Anotações da faculdade
│   ├── Algoritmo/
│   ├── Banco de Dados/
│   ├── Linguagem/
│   ├── Matematica/
│   ├── Lógica/
│   ├── Computação/
│   ├── Gestão de Projetos/
│   └── Estatística/
├── Cursos/                                  ← Cursos online
│   ├── NextJs/
│   ├── TipsCode/
│   ├── Udemy/
│   └── Vercel/
└── projects/                              ← Projetos pessoais
```

## Como usar

### Configuração inicial (Obsidian)

1. Abra o vault no Obsidian
2. Vá em **Configurações → Core plugins → Templates** → ative se não estiver
3. Vá em **Configurações → Templates** → defina a pasta como `Templates/`
4. Vá em **Core plugins → Daily Notes** → ative
5. Vá em **Configurações → Daily Notes** → defina a pasta como `` (raiz) ou crie uma pasta `Diario/`

### Criando notas de aula

1. Pressione `Ctrl+P` → "Templates: Insert template"
2. Escolha o template `aula`
3. Preencha o frontmatter:
   ```yaml
   ---
   tags: [aula, algoritmo, codigo]
   disciplina: "Algoritmo"
   tipo: aula
   ---
   ```
4. Salve o arquivo na pasta da disciplina, ex: `Analise Desenvolvimento de Sistemas/Algoritmo/Aulas/`

### Criando notas de livros

1. Crie uma nova nota em `Livros/Atual/`
2. Insira o template `livro` (`Ctrl+P` → "Templates: Insert template")
3. Preencha o frontmatter:
   ```yaml
   ---
   tags: [livro]
   autor: "Robert C. Martin"
   titulo: "Código Limpo"
   status: lendo
   progresso: 30
   rating: 5
   data_inicio: "2026-08-17"
   data_fim: ""
   tipo: livro
   ---
   ```
4. Adicione resumos por capítulo e insights com callouts:
   ```markdown
   ### Capítulo 1 — Um Código Imprimível

   > [!tip] Ideia-chave
   > Um código limpo é lido muito mais vezes do que é escrito.

   ## Notas e insights
   - Seção de código com exemplos
   - Princípios de nomenclatura
   ```
5. Ao terminar, mova para `Livros/Concluidos/` e atualize o `status: concluido`

### Status possíveis para livros

| Status | Significado |
|--------|-------------|
| `fila` | Ainda não começou |
| `lendo` | Em andamento |
| `pausado` | Temporariamente parado |
| `concluido` | Finalizado |

### Usando links internos (wikilinks)

O Obsidian usa `[[nome da nota]]` para criar links:

```markdown
Veja mais em [[Variáveis]]
Conceito relacionado: [[Encapsulamento]]
```

Para link com texto customizado:

```markdown
[[Variáveis|Variáveis em C++]]
```

### Usando tags

Tags são definidas no frontmatter ou inline:

```yaml
tags: [aula, algoritmo, codigo]
```

Ou no corpo do texto:

```markdown
Estudei #algoritmo hoje
```

### Buscando notas

- `Ctrl+P` → "Open quick switcher" → digite o nome da nota
- `Ctrl+Shift+F` → busca global no vault
- Clique em "Tags" no painel lateral para ver todas as tags

### Graph View

Clique no ícone de grafo no painel esquerdo para ver as conexões entre todas as notas. Filtrado por tag para ver apenas uma disciplina.

## Tags

| Tag | Uso |
|-----|-----|
| `#aula` | Notas de aula da faculdade |
| `#livro` | Notas de leitura de livros |
| `#exercicio` | Exercícios práticos |
| `#projeto` | Documentação de projetos |
| `#resumo` | Resumos e revisões |
| `#codigo` | Notas com exemplos de código |
| `#faculdade` | Conteúdo da faculdade |
| `#curso` | Conteúdo de cursos online |
| `#diario` | Diário de estudos |

## Templates

| Template | Para que serve |
|----------|---------------|
| `aula` | Notas de aula com resumo, conceitos-chave e código |
| `livro` | Notas de livro com progresso, capítulos e insights |
| `daily` | Diário de estudos com tarefas e reflexões |
| `projeto` | Documentação de projetos com TODO list |
| `feature` | Lógicas de features de projetos, com checklist de revisão |
