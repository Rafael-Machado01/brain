Uma estrutura de repetição dá poder para nosso código pode executar quantas vezes quiser, infinitamente ou por ações de usuários.

# Repita até - While

```
Repita 
	Intrução 1
	Intrução 2
	Intrução N
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
	intrução 1
	intrução 2
	intrução N
}
````

Por exemplo um for que conta até dez.

````
Para(I=0;I<10;I++) {
IMPRIMA I;
}
````
