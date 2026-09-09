---
tags:
  - projeto
  - feature
projeto: dev-sync
arquivo: auth.ts
nivel: simples
dominado: false
data: 2026-08-18
tipo: feature
---

# Instalação

## O que essa feature faz

Adiciona autenticação no projeto com Auth.js (next-auth v5): login, logout e sessão disponível no server.

## Passo a passo da lógica

1. Instalar o pacote (`next-auth@beta`)
2. Gerar a Secret no `.env`
3. Criar o arquivo de configuração (`auth.ts`)
4. Definir a rota de handler (`app/api/auth/[...nextauth]/route.ts`)

## Técnica / conceito por trás

```bash
pnpm add next-auth@beta
npx auth secret   # cria AUTH_SECRET no .env
```

`./auth.ts` — arquivo de configuração central:

```ts
import NextAuth from "next-auth"

export const { handlers, signIn, signOut, auth } = NextAuth({
  providers: [],
})
```

O que sai daí:

- `handlers` → expõe as rotas GET/POST do login
- `signIn` / `signOut` → ações de entrar/sair
- `auth` → ler a sessão em server components/actions

Rota handler em `app/api/auth/[...nextauth]/route.ts`:

```ts
import { handlers } from "@/auth"
export const { GET, POST } = handlers
```

> [!warning] Pegadinha
> Sem o `AUTH_SECRET` no `.env`, o next-auth não funciona em produção.

## Onde está no código

- `auth.ts`
- `app/api/auth/[...nextauth]/route.ts`

## Checklist de revisão

- [x] Sei explicar sem olhar o código
- [x] Sei reescrever do zero
- [x] Revisão após 1 semana

## Links relacionados

[[Prisma/Schemas|Schemas]]
