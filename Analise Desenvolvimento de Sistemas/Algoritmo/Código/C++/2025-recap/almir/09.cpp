// Faça um algoritmo que receba uma sequencia de números finalizada pelo número 0, calcule e imprima:
// . a soma dos números pares;
// . a média dos números ímpares;
// . o percentual de números menores que 300;
// . a média dos números maiores que 25.

#include <iostream>
using namespace std;

int main() {
 int x=1;
  while(true) {
    int sumPar=0,sumImpar=0,contImpar=0,sum300=0,cont300=0;
    float sum25=0,cont25=0;
    cout << "Digite o número" << endl;
    cin >> x;
    if(x != 0) {
      if(x % 2 == 0) {
        sumPar += x;
      }else {
        sumImpar += x;
        contImpar++;
      }
      if(x < 300) {
        sum300 += x;
        cont300++;
      }
      if(x > 25) {
        sum25 += x;
        cont25++;
      }
    }
    else{
      break;
    }
    cout << "A soma dos números pares é " << sumPar << endl;
     cout << "A média dos números impares é " << sumImpar / contImpar << endl;
     cout << "O percentual de números menores que 300 é " << (sum25 * 100.0) / cont300;
     cout << "A média dos números maiores que 25 é " << sum25 / cont25 << endl;
  }
}