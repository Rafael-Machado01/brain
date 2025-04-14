```
ALGORITIMO TRES;
VAR
S,D,N,M : REAL;
INICIO
S = 0
D = 37
N = 1
M = 38
REPITA 
	S = S + D/N
	N = N + 1
	D = D * M ;
	M = M - 1;
ATÉ(N >= 37);
FIM