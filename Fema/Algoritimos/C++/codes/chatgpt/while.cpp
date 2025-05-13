#include <iostream>
#include <math.h>
using namespace std;

int main() {
   int n=1,s=0,contv=0;
   while(n != 0) {
      cout << "Digite um número :";
      cin >> n;
      s = s + n;
      contv++;
   }
   cout << "A media é " << s / contv << "\n";
   cout << "Quantidade de números digitados é " << contv << "\n";
   cout << "A soma total de todos os números digitados são " << s << "\n";
}