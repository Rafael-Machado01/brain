Que leia um vetor de 10 elementos reais e mostre o valor absouluto deste valor.

````
ALGORITIMO UM;
VAR
V[10]: REAL;
INICIO
Para(I <- 0, I <= 9, I <- I + 1) {
	 Imprima "Digite um número :";
	 Leia V[I];
	 SE(V[I] < 0)
	 ENTÃO V[I] <- V[I] * -1;
 IMPRIMA "O valor absoluto é", v[i];
}
FIM
````
