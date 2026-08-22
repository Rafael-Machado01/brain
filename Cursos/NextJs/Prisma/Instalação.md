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
npm install prisma --save-dev   # CLI
npm install @prisma/client @prisma/adapter-pg
npx prisma init                 # cria prisma/schema.prisma e .env
```

`.env`:

```bash
DATABASE_URL="postgresql://usuario:senha@host:5432/postgres"
```

`prisma.ts`:

```ts
import { PrismaPg } from "@prisma/adapter-pg";
import { PrismaClient } from "@prisma/client";

const adapter = new PrismaPg({
    connectionString: process.env.DATABASE_URL!,
});

export const prisma = new PrismaClient({
    adapter,
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
- [ ] Revisão após 1 semana

## Links relacionados

[[Prisma/Schemas|Schemas]]
