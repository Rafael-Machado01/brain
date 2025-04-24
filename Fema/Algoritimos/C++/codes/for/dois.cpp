#include <iostream>
#include <math.h>
using namespace std;

int main() {
   float v[10];
   for(int i=0; i < 10; i++) {
      cout << "Digite um número : ";
      cin >> v[i];
      if(v[i] < 0) {
         cout << "Não exite raízes negativas.";
      }else {
         cout << "A raiz quadrada é" << sqrt(v[i])  << "\n";
      }
      cout << "Ao cubo é " << cbrt(v[i])  << "\n";
   }
}