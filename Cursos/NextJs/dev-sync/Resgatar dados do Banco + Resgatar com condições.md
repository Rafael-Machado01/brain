---
tags:
  - projeto
  - feature
projeto: ""
arquivo: ""
nivel: simples
dominado: true
data: 2026-08-22
tipo: feature
---
# Resgatar dados do Banco + Resgatar com condições

## O que essa feature faz
Retorna dados do nosso backend
## Passo a passo da lógica

1. Em uma função pegar os dados e retornalá
2. Caso há uma condição passar por atributo e retornalá

## Onde está no código

- `app/actions.ts`

## Exemplo

```tsx
export default async function getAllPosts() {
return await prisma.posts.findMany({
include: { // relações
      user: true,
      likes: true,
      comments: {
        include: {
          user: true,
        },
      },
    },
    orderBy: { // ordedandto da mais recente a mais antiga
      createdAt: "desc",
    },
})
}

// Com condição nessa em especifico apenas de um usuario 


export async function getUserPosts(userId: string) {
  return await prisma.post.findMany({
    where: { userId }, // passe a condição para o where
    include: {
      user: true,
      likes: true,
      comments: true,
    },
    orderBy: {
      createdAt: "desc",
    },
  });
}


```

## Checklist de revisão

- [x] Sei explicar sem olhar o código
- [x] Sei reescrever do zero
- [ ] Revisão após 1 semana

## Links relacionados

