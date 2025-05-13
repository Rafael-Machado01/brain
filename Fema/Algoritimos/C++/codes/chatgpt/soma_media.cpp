#include <iostream>
#include <math.h>
using namespace std;

int main() {
   float s,n,m,i;
   for(i = 0; i < 5; i++){
      cout << "Digite um número";
      cin >> n;
      s = s + n;
      m = s / 5 ;
   }
   cout << "A soma de todos os números é " << s;
   cout << "A media entre os números é " << m;
}