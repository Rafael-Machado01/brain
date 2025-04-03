#include  <iostream>
#include  <math.h>
using namespace std;

int main() {
   int A,PT;
   cout << "Digite quantos metros quadrados voce quer iluminar :";
   cin >> A;
   while(A != 0) {
      
      PT = A * 18;
      cout << "Voce precisara de " << PT << "ws de potencia."<< endl;
      cout << "Digite quantos metros quadrados voce quer iluminar :" << endl;
      cin >> A;
   }
}