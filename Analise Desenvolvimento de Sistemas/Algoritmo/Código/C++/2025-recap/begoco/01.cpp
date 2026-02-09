// Leia um número inteiro envie para a função e verifique se é múltiplo de 3.

#include <iostream>
using namespace std;

void triple(int a) {
  if(a % 3 == 0) {
    cout << "O número é múltiplo de 3." << endl;
  }else {
    cout << "O número não é múltiplo de 3." << endl;
  }
}

int main() {
  int x=3;
  triple(x);
}