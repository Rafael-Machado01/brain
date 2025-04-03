# Calcule e mostre a quantidade de elementos divisiveis por 3

# Calcule emostre a quantidade de elementos impares e maiores que 11

```
ALGORITMO SETE;
VAR
CONT,CP3,CPI,N,RP3,RI : INTEIRO;
INICIO
CONT <- 1;
CP3 <- 0;
CPI <- 0;
ENQUANTO (CONT <= 10)
	FAÇA 
		IMPRIMA "Digite qualquer número inteiro.";
		LEIA N; 
		RP3 <- (N / 3) *3 // Verificando resto
		SE(RP3 == N)
			ENTÃO CP3 + 1;
		RI <- (N / 2) *2 // Verificando resto 
		SE (RI != N E N >= 11)
		ENTÃO CPI + 1;
     CONT <- CONT + 1;
FIM
````

