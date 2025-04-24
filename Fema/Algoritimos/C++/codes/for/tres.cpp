#include <iostream>
#include <math.h>
using namespace std;

int main() {
   int n=0;
   float v[10];
   cout << "Digite um número :";
   cin >> n;
   for(int i=0; i < 10; i++) {
      v[i] = i * n;
      cout << v[i] << "\n";
   }
}