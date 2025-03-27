# a) A média aritmética das duas notas de cada aluno;  
# b) A mensagem que está na tabela abaixo: 
 Até 3.0 Reprovado
 Entre 3.0 e 7.0 Exame 
 Acima de 7.0 Aprovado
  
## c) O total de alunos aprovado;
## d) O total de alunos reprovados; 
# e) O total de alunos de exame.

```
ALGORITIMO OITO;
VAR
CONT,CA,CE,CR,N1,N2,M
INICIO
CONT <- 1;
CA <- 0;
CE <- 0;
CR <- 0;
ENQUANTO (CONT <= 10)
FAÇA
	IMPRIMA "Digite Nota 1";
	LEIA N1;
	IMPRIMA "Digite Nota 2";
	LEIA N2;
	M <- (N1 + N2) / 2;
	SE (M < 3)
	ENTÃO IMPRIMA "Reprovado!";
	CR + 1;
	SE (M > 3 & < 7)
	ENTÃO IMPRIMA "Exame!";
	CE + 1;
	SE (M > 7)
	ENTÃO IMPRIMA "Aprovado!";
	CA + 1;
	CONT <- CONT + 1;
IMPRIMA "Quantidade de alunos reprovados:", CR;
IMPRIMA "Quantidade de alunos Aprovados:", CA;
IMPRIMA "Quantidade de alunos para Exame:", CE;
FIM
````
