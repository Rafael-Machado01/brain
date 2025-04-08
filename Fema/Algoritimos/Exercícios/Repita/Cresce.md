Chico tem 1,50 e cresce 2cm por ano, e ze tem 1,10 e cresce 3cm Construa que calule o algoritimo que calcule ate que ze seja maior.

```
ALGORITIMO DOIS;
VAR
A : Inteiro;
C,Z : Real;
INICO
C <- 1,50;
Z <- 1,10;
A <- 1;
REPITA
	C <- C + 0.02;
	Z <- Z + 0.03;
	A++;
ATE(Z > C);
IMPRIMA "Levou ", A, "anos, até zé ser maior que chico.";
FIM
