// Faça uma função que leia 3 números inteiros e retorne o menor valor, o maior valor e a media. 
#include <iostream>
using namespace std;

void abc(int a,int b, int c) {
  int menor = a;
  int maior = a;
  if (menor > b) menor = b;
  if (menor > c) menor = c;
  if (maior < b) maior = b;
  if (maior < c) maior = c;
  cout << "O maior número é" << maior;
  cout << "A media é" <<  (a + b + c) / 3;
  cout << "O menor número é" << menor;
}

int main() {
  int a=0,b=0,c=0;
  cout << "Digite o valor de A" << endl;
  cin >> a;
  cout << "Digite o valor de B" << endl;
  cin >> b;
  cout << "Digite o valor de C" << endl;
  cin >> c;
  abc(a,b,c);
}