// Faça um programa em C/C++ para calcular a área de um triângulo retângulo. 
// Esse programa não pode permitir a entrada de dados inválidos, ou seja, medidas menores ou iguais a 0.

#include <iostream>
using namespace std;
float c1,c2;
int main() {
  cout << "Digite o valor do primeiro cateto " << endl;
  cin >> c1;
  if(c1 > 0.0) {
    cout << "Digite o valor do segundo cateto " << endl;
    cin >> c2;
    if(c2 > 0.0) {
      cout << "A area do triangulo retângulo é " << ((c1 * c2) / 2) << endl;
    }
  }
}