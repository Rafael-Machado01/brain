```
ALGORITIMO QUINZE;
VAR
A,PT : INTEIRO;
INICIO
IMPRIMA "Digite quantos metros quadrados quer iluminar :";
LEIA A;
ENQUANTO(A != 0) 
FAÇA
A <- A *2;
PT <- A ** 18;
IMPRIMA "A potencia seria de :", PT;
IMPRIMA "Digite quantos metros quadrados quer iluminar :";
fim