#include <iostream>
using namespace std;

#define t 6
int v[t];

void read();

int main() {
 read();
}

void read() {
   int s=0;
   for(int i=0; i < t; i++) {
      cout << "Digite um número ";
      cin >> v[i];
      s += v[i];
   }
   cout << "A soma do vetor é " << s;
   cout << "A média do vetor é "<< s/t;
}