// Elabore um algoritmos que verifique e mostre os números entre 1000 e 2000
// (inclusive) que, quando divididos por 11, produzam resto igual a 5.

#include <iostream>
using namespace std;

int main() {
  for(int i=1000; i <= 2000; i++) {
    if(i % 11 == 5) {
      cout << "Número que quando é divido por 11 e o resto igual a 5 :" << i;
    }
  }
}