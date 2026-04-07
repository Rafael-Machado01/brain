#include <iostream>
using namespace std;
#define t 8

int v[t];

void read();
void maior();
void menor();
void ult();

int main() {
read();
maior();
menor();
ult();
}

void read() {
   for(int i=0; i < t; i++) {
      cout << "Digite um número ";
      cin >> v[i];
   }
}

void maior() {
   int m = v[0];
   for(int i=0; i < t; i++) {
      if(v[i] > m ) {
         m = v[i];
      }
   }
   cout << "O maior número do vetor é " << m << "\n";
}

void menor() {
   int me = v[0];
   for(int i=0; i < t; i++) {
      if(v[i] < me) {
         me = v[i];
      }
   }
   cout << "O menor número do vetor é " << me << "\n";
}

void ult() {
  int ult = v[t-1];
  int mult=1;
   for(int i=0; i < t; i++) {
      mult *= ult * v[i];
   }
   cout << "A multiplicação de todos os elementos pelo o ultimo elemento do vetor é " << mult << "\n";
}