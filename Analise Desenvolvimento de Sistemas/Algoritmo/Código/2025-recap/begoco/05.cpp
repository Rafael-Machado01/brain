// Escreva um programa em C++ que leia dez números 
// inteiros, envie-os para uma função que vai verificar
// e retornar o menor valor. 
// Utilize prototipação de função.

#include <iostream>
using namespace std;
int menor(int v[]);
int main() {
  int v[10];
  for(int i=0; i < 10; i++) {
    cout << "Digite um número: " << endl;
    cin >> v[i];
  }
  int resultado = menor(v);
  cout << "O menor número do vetor é " << resultado << endl;
}

int menor(int v[]) {
  int menor = v[0];
  for(int i=0; i < 10; i++) {
     if(v[i] < menor) {
    menor = v[i];
  }q
  }
    return menor;
}