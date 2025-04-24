#include <iostream>
#include <math.h>
using namespace std;

int main() {
   int cont5=0;
   for(int i=0;i < 5; i++) {
     
      int v[10], r,ri;
      cout << "Digite um número :";
      cin >> v[i];
      r = v[i] / 5;
      if(r == 0) {
         cont5++;
      }
      ri = v[i] % 2;
      if(ri != 0) {
         cout << "Posição impar :" << i;
      }
   }
   cout << "Quantidade de números divisíveis por cinco." << cont5;
}