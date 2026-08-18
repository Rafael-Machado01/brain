---
tags: [aula, algoritmo, codigo]
disciplina: "Algoritmo"
tipo: aula
---

# Inteiro - Int
Número que não tenha virgula ou seja inteiro.
```
Exemplo: 1 2 123 4323
````


# Real - Float
Número quebrado, que tenha virgula ou algo preciso.

```
Exemplo: 0.2 2,3453,3  00.2,2
````

# Vetor - Array
Uma dimensão apenas, é uma variável que armazena vários dados. Declare quantidade de dados.

```
vetor[5] armazena_cinco_elementos
Exemplo: 1,2,3,4,5
Indice:  0 1 2 3 4
````

Ele possui índice, algo como uma referencia do dado armazenado, por exemplo o índice do numero 1 ali no exemplo é 0.

# Matriz 
Varias dimensões, com linhas e colunas. Também precisamos declarar quantidade de linhas e colunas.
````
linha 0 →   [1, 2, 3]
linha 1 →   [4, 5, 6]
linha 2 →   [7, 8, 9]
              ↑ ↑ ↑
            col 0 1 2

`````


```
matriz[2][2] armazena_quatro_elementos
Exemplo 1 2
        3 4
Indice: Depende da coluna e linha. Como batalha naval.
````

Cálculos com matriz, geralmente usam Diagonais.

# Unsigned 
Este não é bem uma variável é um atributo que podemos colocar antes de declarar a variável.

```
unsigned int x = 2 // x não pode ser negativo.
````

# Double
Usado para números que sejam precisos 

````
double = pi = 3,1415926535
````

# Bool 
Valores booleanos

```
bool a = true // Valores verdadeiros ou falsos.
````

# Char 
Para guardar apenas um caractere 

 ```
char letra = 'B' // Em aspas simples.
````

Podemos usar um vetor para guardar uma frase ou sequencia de caracteres 

````
char palavra[11] = "laranja" // Em Aspas Duplas.
````

## Melhor que vetor
É usar a biblioteca string.

```
#include <string>

string palavra = "teste" // Permite até fazer operacões como juntar strings.
````


