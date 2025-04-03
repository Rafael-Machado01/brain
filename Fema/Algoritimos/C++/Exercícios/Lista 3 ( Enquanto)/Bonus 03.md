```
ALGORITIMO BONUS
VAR
I,CONT,CONT20,MAIOR : INTEIRO
FLOAT P;
INICIO
CONT=1;
CONT20 = 1;
MAIOR=0;
P=0.0;

IMPRIMA "Digite a idade."
LEIA I;

ENQUANTO(I != 0)
FAÇA
	CONT <- CONT + 1;
	SE(I > MAIOR) 
	ENTÃO MAIOR <- I
	SE (I < 20)
	ENTÃO CONT20 <- CONT20 + 1;
	IMPRIMA "Digite a idade."
	LEIA I;
	
M <- I / CONT;
P <- (CONT / CONT20) *100;

IMPRIMA "A quantidade de alunos na sala é :", CONT;
IMPRIMA "A media das idades dos alunos é", M;
IMPRIMA "A porcentagem de alunos com menos de 20 é :", P;
IMPRIMA "A Maior idade é", MAIOR;
FIM


