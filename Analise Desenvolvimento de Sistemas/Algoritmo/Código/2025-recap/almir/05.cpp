// Faça um programa em C/C++ que receba uma sequência de números finalizada pelo número 0, calcule e imprima:
// • a média dos números menores que 300.
// • o percentual de números maiores que 100;
// • a média dos números pares;
// • a soma dos números ímpares;

#include <iostream>
using namespace std;

int main() {
  int x=1, s3=0, c3=0, sp=0, cp=0, si=0, ct=0, c1=0;
  while(true){
    cout << "Digite um número" << endl;
    cin >> x;
    if(x == 0) break;
    if(x < 300) {
      s3 += x;
      c3++;
    }
    if(x > 100) {
      c1++;
    }
    if(x % 2 == 0) {
      sp += x;
      cp++;
    }else {
      si += x;
    }
      ct++;
  }
  cout << "A média dos números menores que 300 é " << s3 / c3 << endl;
  cout << "O percentual dos números maiores que 100 é " << (c1 * 100.0) / ct << "%" <<  endl;
  cout << "A média dos números pares é " << sp / cp << endl;
  cout << "A soma dos números impares é " << si << endl;
}