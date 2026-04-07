// Escreva um programa que crie um vetor de caracteres nome 1 contendo um nome de uma pessoa e atribua esse nome 
// a outro vetor nome2.

#include <iostream>
#include <string.h>
using namespace std;

int main() {
  char nome1[10] = "Rafael";
  char nome2[10] = "";
  strcopy(nome2,nome1);
  cout << "Vetor nome2: " << nome2;
}