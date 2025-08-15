#include <iostream>
using namespace std;
#define N 6
int v[N];

void read();
int soma();

int main() {
 read();
 cout << "Soma é" << soma();
}

void read() {
   for(int i=0; i < N; i++) {
      cout << "Digite um número ";
      cin >> v[i];
   }
}

int soma() {
   int s=0;
    for(int i=0; i < N; i++) {
      if(v[i] % 2 != 0) {
         s += v[i];
      }
   }
   return s;
}