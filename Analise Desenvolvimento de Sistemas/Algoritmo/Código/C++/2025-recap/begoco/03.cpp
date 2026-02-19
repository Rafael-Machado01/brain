// Implemente um programa que leia 10 números inteiros do teclado ou finaliza a leitura quando dois inteiros consecutivos 
// forem digitados e envie-os para uma função que vai verificar e retornar o menor valor lido.
// Em seguida, envie-os para outra função que vai verificar e retornar o maior valor lido.
// Ao final, o programa deverá imprimir o maior, o menor, a média e a soma dos números digitados.

#include <iostream>
using namespace std;

int menor(int v[], int tam) {
  int x=v[0];
  for(int i=0; i < tam; i++) {
    if(v[i] < x) {
      x = v[i];
    }
  }
  return x;
}

int maior(int v[],int tam) {
  int x=v[0];
  for(int i=0; i < tam; i++) {
    if(v[i] > x) {
      x = v[i];
    }
  }
  return x;
}

int main() {
  int v[10],sum=0,cont=0;;
 for(int i=0;i < 10; i++) {
  cout << "Digite um número. Posição: " << "[" << i+1 << "]" << endl;
  cin >> v[i];
     cont++;
  sum += v[i];
  if(v[i] != 0 && v[i] == v[i-1] + 1) {
    cout << "Números consecutivos digitados!" << endl;
    break;
  }
 }
 int resultMen = menor(v,cont);
 int resultMai = maior(v,cont);
 
 cout << "O menor entre os números é " << resultMen << endl;
 cout << "O maior entre os números é " << resultMai << endl;
 cout << "A média entre os números é " << sum / 10 << endl;
}

