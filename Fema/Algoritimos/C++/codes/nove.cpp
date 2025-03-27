#include <iostream>
using namespace std;
int count = 1;
int main() {
   while(count <= 20) {
      float s,sn;
     cout << "\n Digite o salário atual: \n";
     cin >> s;
     sn = s * 1.05;
       cout << "O novo salário é: " << sn, " \n" ;
      count++;
   }
}
