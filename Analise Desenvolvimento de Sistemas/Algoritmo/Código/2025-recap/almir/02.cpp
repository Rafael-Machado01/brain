// Elabore um programa em C/C++ que receba a idade de M pessoas, calcule e imprima a média de idade deste grupo.

#include <iostream>
using namespace std;
#define M 5

int v[M],sum;

int main() {
  for(int i=0; i < M; i++) {
    cout << "Digite a idade da pessoa " << i+1 << endl;
    cin >> v[i];
    sum += v[i];
  }
  cout << "A média das idades destas pessoas é " << sum / M << endl;
}