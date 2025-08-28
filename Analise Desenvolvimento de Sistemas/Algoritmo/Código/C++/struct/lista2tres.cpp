#include <iostream>
#include <cmath>
using namespace std;
#define t 10

struct dados {
   float n1;
   int n2;
};

dados v[t];

void read();
void square();
void sum();

int main() {
   read();
   square();
   sum();
    cout << "A multiplicação entre os últimos elementos do vetor é " << v[9].n1 * v[9].n2;
}

void read() {
   for(int i=0; i < t; i++) {
      cout << "Digite o valor Real" << " : " << endl;
      cin >> v[i].n1;
      cout << "Digite o valor Inteiro" << " : " << endl;
      cin >> v[i].n2;
   }
}

void square() {
   for(int i=0;i<t;i++) {
      if(v[i].n1 >= 0) {
         cout << "A raiz quadrada de " << v[i].n1 << " é " << sqrt(v[i].n1) << endl;
      }else {
         cout << "O número da posição " << i+1 << " foi pulado por não ser maior que zero." << endl;
      }
   }
}

void sum() {
   int sum = 0;
   for(int i=0;i < t; i++) {
      sum += v[i].n2;
   }
   cout << "A soma entre todos os valores Inteiros é " << sum << endl;
}
