## A empresa Igual Diferente S/A deseja conceder um aumento salarial de 5% para todos os seus 20 funcionários.

```
ALGORITIMO NOVE;
VAR
CONT : INTEIRO;
S,SN : REAL;
INICIO
CONT <- 1;
ENQUANTO (CONT <= 20)
FAÇA IMPRIMA "Digite salário";
LEIA S;
SN <- S *1.05;
IMPRIMA "Seu salário com aumento é", SN;
FIM;