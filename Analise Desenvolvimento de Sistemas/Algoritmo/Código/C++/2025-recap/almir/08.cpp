// Elabore um programa em C/C++ para ler uma matriz VALOR 4x4 Calcule:
// • A soma dos valores ímpares armazenados na matriz;
// • A quantidade de elementos com menor que 100;
// • A média dos valores pares maiores que 30 armazenados na matriz;
// • A soma dos valores das colunas (guarde a soma em um vetor)
// • A média dos valores das linhas ((guarde o resultado em um vetor)
// • O maior e o menor valor armazenado.

#include <iostream>
using namespace std;

#define T 4

int m[T][T],vRows[1],vCols[1];

void init();
void requests();
int main() {
  init();
  requests();
}

void init() {
  for(int i=0; i < T; i++) {
    for(int j=0; j < T; j++) {
      cout << "Digite o valor:";
      cin >> m[i][j];
    }
  }
}

void requests() {
  int sumImpar=0,contCem=0,sumPar=0,contPar=0,maior=0,menor=m[0][0],sumRows = 0,sumCols=0;
  for(int i=0; i < T; i++) {
    for(int j=0; j < T; j++) {
      if(m[i][j] % 2 != 0) {
        sumImpar += m[i][j];
      }
      if(m[i][j] < 100) {
        contCem++;
      }
      if(m[i][j] % 2 == 0 && m[i][j] > 30) {
        sumPar += m[i][j];
        contPar++;
      }
      if(m[i][j] > maior) {
        maior = m[i][j];
      }
      if(m[i][j] < menor) {
        menor = m[i][j];
      }
      sumRows += m[i][j];
      sumCols += m[i][j];
    }
    vRows[0] = sumRows;
      vCols[0] = sumCols;
  }
  cout << "A soma dos números impares é " << sumImpar << endl;
  cout << "A quantidade de números menores que 100 é " << contCem << endl;
  cout << "A média dos números pares maiores que 30 é " << sumPar / contPar << endl;
  cout << "A soma dos números das colunas é " << sumCols << endl;
  cout << "A média dos números das linhas é " << sumRows / T << endl;
  cout << "O maior número da matriz é " << maior << endl;
  cout << "O menor número da matriz é " << menor << endl;
}

