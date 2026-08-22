---
tags:
  - aula
  - faculdade
disciplina: Matematica
data: 2026-08-18
tipo: aula
---

# Diagrama de Venn

## Resumo

Representação visual de conjuntos: cada conjunto é um círculo dentro de um retângulo (conjunto universo). A sobreposição dos círculos mostra a interseção.

## Conceitos-chave

> [!important] Conceito Principal
> Serve para visualizar união, interseção e diferença entre conjuntos sem precisar listar elementos.

- Retângulo = conjunto universo (U)
- Círculo = um conjunto
- Sobreposição = interseção (A∩B)
- Tudo coberto junto = união (A∪B)
- Fora do círculo, mas dentro do retângulo = complementar (Aᶜ)

> ⚠️ Não confundir com [[Diagrama de Flechas]]: o de flechas liga elementos de dois conjuntos com setas (relações); o de Venn mostra regiões de conjuntos.

## Código / Exemplos

```
U = {1,2,3,4,5,6,7}
A = {1,2,3}    B = {3,4,5}

   ┌───────────────────────────┐
   │ U                         │
   │   ●●●●                    │
   │  ●    ●●●●●               │
   │ ●  1,2 (3) ●●●●           │
   │  ●     ●  4,5 ●           │
   │   ●●●●●●●●●●              │
   └───────────────────────────┘

A∪B = {1,2,3,4,5}   → os dois círculos inteiros
A∩B = {3}           → só a sobreposição dos círculos
```

## Links relacionados

[[Conjuntos]] [[Operações com Conjuntos]]
