// Escreva um programa em C++ que leia dois números 
// inteiros. Envie-os para uma função que vai 
// verificar e retornar o menor valor. 
// Utilize prototipação de função.

#include <iostream>
using namespace std;
int menor(int a,int b);
int main() {
  int x,z;
  cout << "Digite o primeiro número" << endl;
  cin >> x;
  cout << "Digite o segundo número" << endl;
  cin >> z;
 int resultado =  menor(x,z);
 cout << "O menor número é: " << resultado << endl;
}

int menor(int a,int b) {
  if(a < b) {
    return a;
  }else {return b;}
}