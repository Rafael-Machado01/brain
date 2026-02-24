// Leia um número inteiro e mostre o seu valor fatorial.
#include <iostream>
using namespace std;

int main() {
  int x,fator=1;
  cout << "Digite um número" << endl;
  cin >> x;
  if(x >= 0 ) {
   for(int i=x; x>1; x--) {
    fator = fator *x;
   }
  }else {
    cout << "Não é possivel fazer o fatorial de números menores que zero.";
  }
  cout << "O fatorial de " << x << " é " << fator << endl;
}
