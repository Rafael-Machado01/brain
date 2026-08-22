---
tags:
  - aula
  - faculdade
disciplina: Matematica
data: 2026-08-18
tipo: aula
---

# Relação

## Resumo

### Primeiro: o que significa uma relação?

Quando aparece:

R = {(x,y) ∈ A×B | alguma condição}

você deve ler assim:

> **R é formada pelos pares ordenados (x,y) que pertencem a A×B e que também satisfazem a condição.**

Então existem sempre **duas coisas para verificar**:

1. O par (x,y) pertence a A×B?
2. O par satisfaz a condição da relação?

---

### Exemplo da apostila

Temos:

A={1,2} B={1,2,4,5,7}

E:

R={(x,y)∈A×B | y=x+1}

**1º passo: fazer A×B**

Pegamos **cada elemento de A** com **cada elemento de B**:

A×B={(1,1),(1,2),(1,4),(1,5),(1,7), (2,1),(2,2),(2,4),(2,5),(2,7)}

São 2×5=10 pares.

**2º passo: aplicar a condição**

A condição é y=x+1. Agora pegamos cada x de A.

Para x=1:
y=1+1=2 → temos (1,2)
Esse par está em A×B? **Sim.** Logo: (1,2)∈R

Para x=2:
y=2+1=3 → teríamos (2,3)
Mas **3 não está em B**.
Então: (2,3)∉A×B. Logo, não entra na relação.

Resultado:

R={(1,2)}

Atalho: nem precisava montar o A×B inteiro — basta calcular y para cada x de A e conferir se o y existe em B.

### Inversa (R⁻¹)

Basta inverter o par: (primeiro, segundo) → (segundo, primeiro).

```
R   = {(1,2)}
R⁻¹ = {(2,1)}
```

O domínio vira imagem e a imagem vira domínio. No [[Diagrama de Flechas]], é inverter o sentido das setas.

## Conceitos-chave

> [!important] Conceito Principal
> Uma relação é um subconjunto de A×B: só entram os pares ordenados que satisfazem a condição.

[[Conjuntos]] [[Como descobrir conjuntos]]

## Código / Exemplos

![[Pasted image 20260820191156.png]]
![[Pasted image 20260820191211.png]]

## Links relacionados

[[Diagrama de Flechas]] [[Plano Cartesiano]]
