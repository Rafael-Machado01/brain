---
tags: [projeto, feature]
projeto: dev-sync
arquivo: tailwindData.ts
nivel: simples
dominado: false
data: "2026-08-18"
tipo: feature
---

# Constantes

## O que essa feature faz

Junta vários valores repetidos em um objeto ou array exportado — uma única fonte da verdade para o projeto.

## Passo a passo da lógica

1. Define o objeto
2. Cria os valores (classes CSS, rotas, textos que se repetem)

## Técnica / conceito por trás

Código repetitivo ou variáveis soltas: coloque em um array/objeto e exporte para seu projeto. Vantagens:

- Evita digitar errado classes Tailwind longas
- Mudou em um lugar, muda em todo o app
- Componente fica limpo, sem string gigante inline

## Onde está no código

- `app/constants/tailwindData`

```ts
const cssData = {
  centered: "flex items-center justify-center"
}

export default cssData;
```

Uso:

```tsx
import cssData from "@/app/constants/tailwindData";

<div className={cssData.centered}>Centralizar Div</div>
```

## Checklist de revisão

- [x] Sei explicar sem olhar o código
- [x] Sei reescrever do zero
- [ ] Revisão após 1 semana

## Links relacionados

[[Componente Reutilizável]]
