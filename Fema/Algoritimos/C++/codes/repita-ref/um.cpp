#include <iostream>
#include <math.h>
using namespace std;

int main() {
   float d=5,n=1,cont=1,s=0;
   while(cont <= 100) {
      s = s + n / d;
      d = d + 3;
      n = n + 1;
      cont = cont + 1;
   }
   cout << "A soma é :" << s;
}