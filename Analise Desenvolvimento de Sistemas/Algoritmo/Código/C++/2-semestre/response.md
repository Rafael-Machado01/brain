1) Escreva os valores que serão impressos nas duas instruções cout:
main(){
int i=3, j=5;
int *p = &i;
cout << p << endl; Resposta: endereço de memória
cout << *p * 2 + j; Resposta: 11

2) Leia a sequência de instruções abaixo:
int i = 10;
int *pti;
pti = &i;
Escreva V ou F:
a) pti armazena o endereço de i (V) ENDEREÇO DE MEMORIA
b) *pti é igual a 10 (V)  VALOR DA VARIAVEL
c) Ao executar *pti = 20; i passará a ter o valor 20 (V) ATRIBUIÇÃO AO VALOR DA VARIAVEL
d) Ao alterar o valor de i, *pti será modificado (v) SIM POIS APONTA PARA O CONTEÚDO DE I
e) pti é igual a 10 (F) falso pti aponta endereço

3)Digite o programa abaixo e mostre a saída de cada cout desse programa:
main(){
int x=10;
int *p;
p = &x;
cout << "X = " << x; //Resposta: 10
cout << "\n&x = " << &x;//Resposta:Endereço de x

4) Digite o programa abaixo e mostre a saída de cada cout desse programa:
main(){
int x=10;
int *p;
p = &x;
cout << "X = " << x; //Resposta: 10
cout << "\nP = " << p;//Resposta: endereço de x
cout << "\n*P = " << *p;//Resposta: 10

5) Digite o programa abaixo e mostre a saída de cada cout desse programa:
1 main(){
2 int x=10;
3 int *p;
4 p = &x;
5 cout << "X = " << x; // Resposta: 10 ..
6 *p = 12;
7 cout << "\n*P = " << *p;// Resposta: 12 .....
8 cout << "\nX = " << x 12

6) Digite o programa abaixo e mostre a saída de cada cout desse programa:
main(){
int i = 10;
int *p;
p = &i;
*p = 5;
cout << "\n i = "<< i; //Resposta: 5___________
cout << "\n *p = " << *p; //Resposta: 5_______
cout << "\n p = " << p; //Resposta: endereço de i

7) Digite o programa abaixo e mostre a saída de cada cout desse programa:
main(){
/*Um ponteiro só pode receber o endereço de uma variável do mesmo tipo do ponteiro*/
int *p, *p1, x = 10;
float y = 20;
p = &x;
cout << "\n*p = " << *p; //Qual será a saída? Resposta: 10 ______
p1 = p; //Estes dois ponteiros são inteiros, assim esta atribuição e válida.
cout << "*p1 = " << *p1; //Qual sera a saida? Resposta: NULL ______
p = &y; //ERRADO, pois p é um ponteiro INT e y é uma variável FLOAT.
