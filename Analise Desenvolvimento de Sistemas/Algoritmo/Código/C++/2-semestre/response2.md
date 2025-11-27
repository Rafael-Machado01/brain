Leia o código abaixo e assinale para cada IF qual será a saída do programa:
main(){
int *p, *p1, x=10, y=20;
p = &x;
p1 = &y;
if(p == p1){
cout << "Ponteiros iguais\n";} ( )
else{
cout << "Ponteiros diferentes\n";} (X )
if(*p > *p1){
cout << "O conteúdo de p é maior que o conteúdo de p1\n";} ( )
else{
cout << "O conteúdo de p NÃO é maior que o conteúdo de p1\n";} ( X)

. Leia o código abaixo e responda:
a. Qual será o resultado da operação *p - *q? Escreva em “Resposta”.
b. Analise o if(p == &i) e assinale a saída correta.
main(){
int i=3, j=5;
int *p=&i, *q=&j;
cout << "*p - *q = " << *p-*q; //Resposta:2____________ -2
if(p == &i){
cout <<"\nSao iguais";}// ( X)
else{
cout << "\nSao diferentes";} ( )

 Escreva os valores que serão impressos nas duas instruções cout:
main(){
int a = 1234;
int *pa;
pa = &a;
cout << "\nO valor de: pa = &a \202 ===> " << pa; Resposta:endereço de memória ______________
cout << "\nO valor de: *pa \202 ===> " << *pa; Resposta:1234_______________

. Leia o código-fonte abaixo e escreva nas linhas pontilhadas a saída do programa.
main (){
int *ponteiro, vetor[4] = {5, 10, 20, 30};
ponteiro = &vetor[0];
ponteiro+= 2;
cout << "Valor apontado: " << *ponteiro; Resposta: 5 ……..……................…..
ponteiro++;
cout << "\nValor apontado: " << ponteiro; Resposta: endereço de 10 .. 20
