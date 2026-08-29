---
tags:
  - aula
  - faculdade
  - conjuntos
disciplina: Matematica
data: 2026-08-18
tipo: aula
---

# SubConjuntos e Partes

## Resumo
Pegue todos os subconjuntos; as partes é o conjunto de todos os subconjuntos. Após achar as partes, faça um Hasse.
## Conceitos-chave

SubConjunto Partes Hasse

## Código / Exemplos

```
a={a,b,c}

subconjunto = { ∅,a,b,c,(a,b),(a,c),(a,b,c)}

P(a)=  {∅,a,b,c,(a,b),(a,c),(a,b,c)}

P(A,c)
 {a,b,c}
            /   |   \
       {a,b}  {a,c}  {b,c}
         / \     |     / \
       {a}  \   {b}   /  {c}
          \   \  |  /   /
                ∅
```

## Links relacionados

[[Conjuntos]]