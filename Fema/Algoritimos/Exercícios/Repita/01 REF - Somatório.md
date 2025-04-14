```
ALGORITIMO UM;
VAR
CONT,S,D,N : REAL;
INICIO
CONT = 1;
S = 0;
D = 5;
N = 1;
REPITA
	S = S + N / D;
	D = D + 3;
	N = N + 1;
	CONT = CONT + 1;
ATE(CONT > 100);
FIM
````


