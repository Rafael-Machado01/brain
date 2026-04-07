#include <iostream>
using namespace std;
#define t 3
int a[t][t];
// Aqui são Protótipos para que podemos escrever as funções depois do main
void read();
void dp();
void soma();

int main() {
   read();
   dp();
   soma();
}

void read() {
   for(int i=0; i < t; i++) {
      for(int j=0; j<t; j++) {
         cout << "Digite um número ";
         cin >> a[i][j];
      }
   }   
}

void dp() {
   for(int i=0; i < t; i++) {
      for(int j=0; j < t; j++) {
         if(i==j) {
            cout << a[i][j];
         }
      }
   }
}

void soma() {
   int s=0;
   for(int i=0; i < t; i++) {
      for(int j=0; j < t; j++) {
         if(i > j) {
            s += a[i][j];
         }
      }
   }
   cout << "Soma = " << s << "\n";
}
