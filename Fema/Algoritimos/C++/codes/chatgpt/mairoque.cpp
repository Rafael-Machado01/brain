#include <iostream>
#include <math.h>
using namespace std;

int main() {
   int n1,n2;
   cout << "Digite o primeiro número :";
   cin >>    n1;
   cout << "Digite o segundo número :";
   cin >> n2;
   if(n1 == n2) {
      cout << "Os números são iguais.";
   }else {
       if(n1 < n2){
      cout << "O segundo número é o maior";
   }else {
      cout << "O primeiro número é o maior";
   }
   }  
}