---
tags: [ideia, backlog, index]
tipo: ideia
---

# Ideias de notas para criar

> [!info] Como usar
> Este arquivo reúne sugestões de notas que **ainda não existem** no vault. Os assuntos já documentados (**AuthJS, Prisma Instalação/Schemas, EdgeStore online, FeedBack de formulário, Componente Reutilizável, useState/useRef, Map/Filter, etc.**) foram propositalmente **excluídos** para não duplicar.
> Quando criar uma nota baseada numa ideia, mude o status da linha para `feito`.

---

## Next.js / App Router — aplicável ao rodeoArena

| Status  | Ideia | Por que criar |
|---------|-------|---------------|
| [ ] | **Server Actions + Zod** — validação server-side com erros por campo (`useActionState` + `errors: Record<string,string>`) | O projeto ainda valida "na mão"; registrar o padrão com schema único e mensagens PT-BR |
| [ ] | **Migrações Prisma** — `migrate dev/deploy/status`, alterar tipo de coluna (ex.: `String` → `DateTime`/`Float`) | Hoje o `Round` usa campos como `String`; registrar o fluxo de migração e rollback |
| [ ] | **Prisma driver adapters** — Prisma 7 + `@prisma/adapter-pg` + `connectionString`/`DATABASE_URL` | Setup diferente do padrão; documentar como funciona |
| [ ] | **Agregações Prisma** — `count`, `groupBy`, `orderBy`, `take` para dashboard/ranking | O dashboard ordena em memória hoje; registrar como agregar no banco |
| [ ] | **FK e constraint errors no Prisma** — P2003, P2002, P2025, `onDelete: Cascade`, transações | Excluir registros com vínculos hoje quebra com 500; documentar tratamento |
| [ ] | **Tailwind v4 — design tokens com `@theme`** | O tema rodeo usa tokens customizados (`globals.css`); registrar o padrão de cores/fonts |
| [ ] | **shadcn/ui + Base UI — componentes controlados** (Dialog, Dropdown, Select, Table) | Diferente do Radix; registrar props `value`/`onValueChange` e `render` |
| [ ] | **Estados de formulário — `useFormStatus` (pending/disabled)** | Denota loading nos botões de submit sem estado manual |
| [ ] | **Server Components + data fetching** — páginas `async`, `Promise.all`, serialização RSC, `revalidatePath` | O projeto faz várias requisições paralelas em páginas; documentar o padrão idempotente |
| [ ] | **Error/loading/not-found boundaries** — `error.tsx`, `loading.tsx`, `not-found.tsx` | O `skeleton.tsx` existe, mas nenhuma rota têm loading |
| [ ] | **Estrutura de pastas e convenções** (actions, components, constants, types, lib) | Decidir regras (ex.: `cities` vs `citys`) para o projeto inteiro |
| [ ] | **Git — fluxo de branch/PR prático** (feature branch, commits, template de PR) | O repositório já usa esse fluxo; transformar em nota reutilizável |

## Faculdade

| Status  | Ideia | Por que criar |
|---------|-------|---------------|
| [ ] | **Banco de Dados — Chaves estrangeiras e integridade referencial na prática** | Aulas têm `Chaves.md` e `Relacionamentos.md`, mas sem prática de FK com erros reais (delete/update) |
| [ ] | **Banco de Dados — Normalização (1FN, 2FN, 3FN)** | Não existe nenhuma nota sobre normalização |
| [ ] | **Algoritmo — Complexidade de algoritmos (Big-O)** | Aulas focam estrutura básica; falta análise de custo |
| [ ] | **POO — Herança e composição (com exemplos do próprio vault)** | Há pastas de código (`herança/`) mas faltam notas equivalentes às de Encapsulamento |
| [ ] | **POO — Polimorfismo** | Complemento obrigatório de herança (não documentado) |
| [ ] | **Gestão de Projetos — Scrum: papéis, eventos e artefatos** | Existem os PDFs "8.1" e "8.3"; consolidar em uma nota |

## Youtube / conteúdo

| Status  | Ideia | Por que criar |
|---------|-------|---------------|
| [ ] | **"Construindo Software do zero" — Casos de Uso aplicados ao rodeoArena** | Série já tem 2 notas; aplicar os casos de uso ao projeto real |
| [ ] | **Design Patterns (GoF) — os 5 que mais aparecem em CRUDs** | Single Responsibility, Factory, Observer, Strategy, Repository — em projetos web |
| [ ] | **Arquitetura: como dividir Server vs Client Components** | Tema recorrente em dev rel— no Next.js |

## Ferramentas

| Status  | Ideia | Por que criar |
|---------|-------|---------------|
| [ ] | **OpenCode — comandos e fluxo de trabalho** (fora do setup que já existe) | A pasta `Ferramentas/OpenCode` tem config; registrar atalhos úteis do dia a dia |
| [ ] | **Obsidian — queries com Dataview** | O vault usa wikilinks/tags; automatizar índices por tag |

---

### Regra de ouro

- Antes de criar, busque no vault (`Ctrl+Shift+F`) — incluindo o `.trash` — para garantir que não há conteúdo parecido.
- Links de "para onde pertence": coloque cada nota na pasta do tema (ex.: `Cursos/NextJs/...`, `Analise Desenvolvimento de Sistemas/Banco de Dados/Aulas/...`).