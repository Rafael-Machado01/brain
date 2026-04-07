#include <iostream>
#include <cmath>
using namespace std;

#define t 10
float v[t];

void read();
void soma();
void multi();
void raiz();

int main() {
 read();
 soma();
 multi();
 raiz();
}

void read() {
   for(int i=0;i < t; i++) {
      cout << "Digite um número ";
      cin >> v[i];
   }
}

void soma() {
   int s=0;
   for(int i=0; i < t; i++) {
      if(v[i] >= 10){
         s += v[i];
      }
   }
   cout << "A soma de todos os números maiores ou iguais á 10 é " << s << "\n";
}

void multi() {
   int m;
   for(int i=0; i < t; i++) {
      if(v[i] > 0) {
         m = m * v[i];
      }
   }
   cout << "A multiplicação de números maiores que zero é " << m << "\n";
}

void raiz() {
   for(int i=0; i < t; i++) {
      if(v[i] > 3) {
         cout << "A raiz quadrada de " << v[i] << " é " << sqrt(v[i]) << "\n"; 
      }
   }
}