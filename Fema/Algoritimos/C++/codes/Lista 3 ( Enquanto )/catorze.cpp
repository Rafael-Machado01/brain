#include <iostream>
#include <math.h>
using namespace std;

int main() {
   float s,p,sn;
   cout << "Digite o valor de salário :";
   cin >> s;
   while(s != -1) {
      cout << "Digite o valor do percentual de aumento :";
      cin >> p;
      sn = s + s * p / 100.0;
      cout << "O novo salário é: " << sn << endl;
      cout << "Digite o valor de salário :";
      cin >> s;
   }
}