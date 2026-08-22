---
tags:
  - projeto
  - feature
projeto: dev-sync
arquivo: auth.ts
nivel: simples
dominado: true
data: 2026-08-18
tipo: feature
---

# Provider GitHub

## O que essa feature faz
Permite que podemos fazer login e logout pelo github.

## Passo a passo da lógica

1. Crie um app no OAUTH do github.
2. Pegue a secret e adicione no .env 
3. Adicione a callback url
4.  Adicione o provider na config

## Técnica / conceito por trás

![[Pasted image 20260821192732.png]]

```
1. Crie um app no OAUTH do github.
2. Pegue a secret e adicione no .env 
   
3. Adicione a callback url
[origin]/api/auth/callback/github

adicione no auth.ts

import NextAuth from "next-auth"
import GitHub from "next-auth/providers/github"
 
export const { handlers, signIn, signOut, auth } = NextAuth({
  providers: [GitHub],
})
```

## Checklist de revisão

- [x] Sei explicar sem olhar o código
- [x] Sei reescrever do zero
- [ ] Revisão após 1 semana

## Links relacionados

[[Cursos/NextJs/AuthJs/Instalação]]