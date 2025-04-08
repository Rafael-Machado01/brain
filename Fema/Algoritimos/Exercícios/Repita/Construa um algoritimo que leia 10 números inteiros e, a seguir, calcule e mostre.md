A multiplicação entre todos os números lidos;

O resto da divisão do quinto numero lido, por 7;

A soma entre os números positivos.

```
ALGORITIMO UM;
VAR
CONT, N,M,S,R,Q : INTEIRO;
INICIO
CONT <- 1;
N <- 0;
M <- 1
S <- 0;
R <- 0;

REPITA 
	IMPRIMA "Digite o número :"
	LEIA N;
	M <- M * N;
	SE (CONT = 5)
	ENTÃO Q <- N / 7
	R <- N - (7 * Q); 
	SE  (N > 0)
	ENTÃO S <- S + N;
	CONT++;
ATE(CONT > 10);

IMPRIMA "A multiplicacao de todos os numeros é ", M;
IMPRIMA "O quinto número divido por 7 o resto é ", R;
IMPRIMA "A soma de todos os números positivos é ", S;
FIM
```

