S = 5/10 + 8/9 + 11/8 ... até 32.
```
ALGORITIMO NOVECENTOS;
VAR
NUM,DEM,S : REAL;
INICIO
NUM <- 5;
DEM <- 10;
S <- 0;
ENQUANTO (NUM <= 32)
	FAÇA
	S <- S + DEM / NUM;
	NUM <- NUM + 3;
	DEMO <- DEM - 1;
Imprima "A soma é :", S;
FIM
```


