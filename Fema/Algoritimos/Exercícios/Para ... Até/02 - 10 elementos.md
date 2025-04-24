Faça um algoritimo que tenha um vetor que leia 10 elementos reais e mostre :
a raiz quadradra de cada elemento 
o cubo de cade elemento.
```
ALGORITIMO DOIS;
VAR

INICIO
PARA(I <- 0, I <= 9, I <- I + 1)
{
IMPRIMA "Digite um número :";
LEIA V[I];
SE(V[I] < 0)
ENTÃO V[I] <- V[I] * -1;
Imprima "A raiz é", sqrt(V[I]);
Imprima "O cubo é", pow(V[I],3);
}
FIM
```


