---
tags:
  - projeto
  - feature
projeto: dev-sync
arquivo: auth-user.ts
nivel: simples
dominado: true
data: 2026-08-18
tipo: feature
---

# Verificar se esta logado hook

## O que essa feature faz
É uma função que verifica se o usuario está logado e procura ele no banco de dados e retorna o objeto user completo
## Passo a passo da lógica

1. Recebe a função auth()
2. Verifica o retorno de session?.user?.id
3. Se tiver logado ele procura o user no banco de dados e retorna

## Técnica / conceito por trás

```
import { auth } from "@/auth";
import type { User } from "../types/User";
import { prisma } from "./prisma";

export default async function getCurrentUser(): Promise<User | null> {
  const session = await auth();

  if (!session?.user?.id) {
    return null;
  } // se não tiver logado retorna null e quem o chamou resolve este cenário

  const user = await prisma.user.findUnique({
    where: {
      id: session.user.id,
    },
  }); // se estiver logado retorna o usuario no banco

  return user;
}

```


## Onde está no código

- `app/lib/auth-user.ts`

## Pegadinhas que me confundiram

- Achar que cada componente que precisar de autenticação precisava verificar ele mesmo.

## Checklist de revisão

- [x] Sei explicar sem olhar o código
- [x] Sei reescrever do zero
- [ ] Revisão após 1 semana

## Links relacionados

