---
tags:
  - projeto
  - feature
projeto: ""
arquivo: ""
nivel: simples
dominado: true
data: 2026-08-18
tipo: feature
---

# Logout

## O que essa feature faz
Permite usuários logados com o OAUTH deslogarem

## Passo a passo da lógica

1.Atrele um botão que dispara a função de deslogar

## Onde está no código

- `app/components/ui/navbar`

## Exemplos
```tsx
import {signOut} from "auth"
<button onClick={() => await signOut()}>
```

Deve usar [[Renderização ternária]] para aparecer quando estiver logado.

## Checklist de revisão

- [x] Sei explicar sem olhar o código
- [x] Sei reescrever do zero
- [ ] Revisão após 1 semana

## Links relacionados

[[Provider Google]] [[Provider GitHub]] [[Cursos/NextJs/Prisma/Instalação|Instalação]] [[Verificar se esta logado hook]] [[Renderização ternária]]