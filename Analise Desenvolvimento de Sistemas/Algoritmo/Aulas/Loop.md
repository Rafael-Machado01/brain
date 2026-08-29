---
tags: [aula, algoritmo, codigo]
disciplina: "Algoritmo"
tipo: aula
---

Uma estrutura de repetição dá poder ao nosso código, que pode executar quantas vezes quiser, infinitamente ou por ações de usuários.

# Repita até - While

```
Repita 
	Instrução 1
	Instrução 2
	Instrução N
Até (Condição)
````

Por exemplo um contador, que vai imprimir até o número 10.
```
CONT <- 0;
Repita
	IMPRIMA CONT;
	CONT <- CONT + 1;
ATÉ (CONT > 10);
````


# Para até - For

````
Para(variável; condição; incremento ou decremento) {
	Instrução 1
	Instrução 2
	Instrução N
}
````

Por exemplo um for que conta até dez.

````
Para(I=0;I<10;I++) {
IMPRIMA I;
}
````
