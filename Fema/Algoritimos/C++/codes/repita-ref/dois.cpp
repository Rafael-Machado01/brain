#include <iostream>
#include <math.h>
using namespace std;

int main() {
   float n=10,d=480,s=0,cont=1;
   while( cont <= 30 ) {
      s = s + d / n;
      d = d - 5;
      n = n + 1;
      cont = cont + 1;
   }
   cout << "A soma é :" << s;
}