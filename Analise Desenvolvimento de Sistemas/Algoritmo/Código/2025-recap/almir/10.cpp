// Faça um programa que leia uma lista de 40 números inteiros, não repetidos, e armazene-o em um vetor. 
// A seguir, o programa deve ler uma lista de números terminada pelo número 0 (que não entrará nos cálculos).
// Para cada número da lista, o programa deve verificar se ele está no vetor. 
// Ao final do programa, deve ser mostrado o número de vezes que cada número do vetor foi encontrado.

#include <iostream>
using namespace std;

#define T 40

int v[T];
int ran[20] = {42, 7, 89, 15, 63, 28, 94, 3, 56, 71, 9, 37, 60, 81, 24, 5, 98, 11, 46, 30};

void init();
int main() {
  init();
}

void init() {
  for(int i=0; i < T; i++) {
    cout << "Digite um número para a posição " << i+1 << ". -- Não pode ser números repetidos " << endl;
    cin >> v[i];
    if(v[i])
    if(v[i-1] == v[i]){
      cout << "Número igual digitado.";
      break;
    }
  }
}