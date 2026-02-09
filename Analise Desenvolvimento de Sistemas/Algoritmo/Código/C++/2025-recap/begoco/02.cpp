// Leia 10 números inteiros ou finaliza a leitura quando dois inteiros consecutivos forem digitados.
// Imprima: o maior, o menor, a média e a soma dos digitados.

#include <iostream>
using namespace std;

int main() {
int v[10],maior=v[0],menor=v[0],sum=0,cont=0;
  for(int i=0;i < 10; i++) {
    cout << "Digite um número" << endl;
    cin >> v[i]; 
    if(v[i] != 0 and v[i] == v[i-1] + 1) {
      cout << "Sequencia digitada!" << endl;
      break;
    }
    else {
       if(v[i] > maior) {
        maior = v[i];
      }if(v[i] < menor) {
        menor = v[i];
      }
      sum += v[i];
      cont++;
    }
  } 
   cout << "O maior número é " << maior << endl;
  cout << "O menor número é" << menor << endl;
  cout << "A média dos números é "  << sum / cont << endl;
  cout << "A soma é " << sum << endl; 
}