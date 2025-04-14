#include <iostream>
using namespace std;

int main() {
   int n=0,m=1,cont=1,s=0;
   float q=0,r=0;
   while(cont <= 10) {
      cout << "Digite o número";
      cin >> n;
      m = m * n;
      if(cont == 5) {
         q = n / 7;
         r = n - 7 * q;
      }
      if(n > 0) {
         s = s + n;
      }
      cont = cont + 1;
   }
   cout << "A";
}