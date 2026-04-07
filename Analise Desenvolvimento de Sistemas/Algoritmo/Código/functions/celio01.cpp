#include <iostream>
using namespace std;
#define N 6

int v[N];

void read();
void impar();

int main() {
int v[N];   read();
   impar();
}

void read() {
   for(int i=0; i < N; i++) {
      cout << "Digite um número: ";
      cin >> v[i];
   }
}

void impar() {
   int s=0;
   for(int i=0; i < N; i++) {
      if(v[i] % 2 != 0) {
         s += v[i];
      }
   }
   cout << "O somatório dos números impares é " << s;
}