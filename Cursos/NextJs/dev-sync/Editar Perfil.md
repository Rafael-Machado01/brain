---
tags:
  - projeto
  - feature
projeto: dev-sync
arquivo: actions.ts formEdit.tsx
nivel: complicado
dominado: false
data: 2026-08-22
tipo: feature
---

# Editar Perfil

## O que essa feature faz
Ela permite que os usuários editem as informações de perfil no nosso projeto.

## Passo a passo da lógica

1. Receber dados do formulário 
2. Comparar com os original 
3. Verificar mudanças
4. Mandar para o prisma

## Técnica / conceito por trás
Vamos receber ele por form de um formState, e criar um objeto que recebe nossos dados atuais, comparar quais houves mudanças e atualizar.

## Onde está no código

- `app/actions.ts`

## Pegadinhas que me confundiram

- Não verificar as mudanças, isso permitia usuario fazer requisição vazia.

## Checklist de revisão

- [ ] Sei explicar sem olhar o código
- [ ] Sei reescrever do zero
- [ ] Revisão após 1 semana

## Links relacionados

