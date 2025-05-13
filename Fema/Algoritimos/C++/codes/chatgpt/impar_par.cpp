#include <iostream>
#include <math.h>
using namespace std;
int main() {
   int n=0;
   cout << "Digite um número :";
   cin >> n;
   if (n % 2 == 0) {
      cout << "Este número é par";
   }else {
      cout << "Este número é impar";
   }
}