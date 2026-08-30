---
tags:
  - projeto
  - feature
projeto: dev-sync
arquivo: prisma.ts
nivel: intermediario
dominado: true
data: 2026-08-18
tipo: feature
---

# Instalação

## O que essa feature faz

Cria um projeto Prisma pronto para a conexão com o Supabase.

## Passo a passo da lógica

1. Instalar o Prisma (CLI + adapter do Postgres)
2. Dar um `init`
3. Adicionar `.env` com a connection string do banco de dados
4. Criar o `prisma.ts` (cliente singleton)
5. Criar schemas e rodar migration

## Técnica / conceito por trás

```bash
pnpm add @prisma/client@7.9.1 @prisma/adapter-pg@7.9.1
pnpm add -D prisma@7.9.1
pnpm add dotenv
pnpm prisma init --no-skills               # cria prisma/schema.prisma e .env
pnpm prisma generate
```

`.env`:

```bash
DATABASE_URL="postgresql://usuario:senha@host:5432/postgres"
```

`prisma.ts`:

```ts
import { PrismaPg } from "@prisma/adapter-pg"; // Para bancos postgrees
import { PrismaClient } from "@/generated/prisma/client";

const adapter = new PrismaPg({
  connectionString: process.env.DATABASE_URL!,
});

export const primsa = new PrismaClient({
  adapter,
});
// Isso permite fazermos await prisma.findMany etc..


```


``
```tsx
prisma.config.ts

import "dotenv/config";
import { defineConfig, env } from "prisma/config";

export default defineConfig({
  schema: "prisma/schema.prisma",
  migrations: {
    path: "prisma/migrations",
  },
  datasource: {
    url: env("DIRECT_URL"),
  },
});

```

> [!important] Por que exportar uma instância única?
> Em dev, o hot reload do Next cria uma instância nova do PrismaClient a cada reload e estoura as conexões do banco. Um único `export const prisma` evita isso.

## Onde está no código

- `prisma/schema.prisma`
- `lib/prisma.ts` (ou onde o projeto guarda)

## Checklist de revisão

- [x] Sei explicar sem olhar o código
- [x] Sei reescrever do zero
- [x] Revisão após 1 semana

## Links relacionados

[[Prisma/Schemas|Schemas]]
