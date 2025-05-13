#include <iostream>
#include <math.h>
using namespace std;

int main() {
   int i,n,contp,conti,menor,maior;
   for(i=0;i < 10; i++) {
      cout << "Digite um número: ";
      cin >> n;
      if(n % 2 == 0) {
         contp++;
      }else {
         conti++;
      }
      if(i == 0) {
         maior = n;
         menor = n;
      }
      if(menor > n) {
         menor = n;
      }else {
         maior = n;
      }
   }
   cout << "Quantidade de números par é :" << contp;
   cout << "Quantidade de números impar é :" << conti;
   cout << "O número maior é o :" << maior;
   cout << "O número menor é o :" << menor;
}