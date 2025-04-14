```
ALGORITIMO DOIS;
VAR
CONT,S,D,N : REAL;
INICIO
CONT = 1;
S = 0;
D = 480;
N = 10;
REPITA 
	S = S + D / N;
	D = D - 5;
	N = N + 1;
	CONT = CONT + 1;
ATE(CONT > 30)
FIM
````
