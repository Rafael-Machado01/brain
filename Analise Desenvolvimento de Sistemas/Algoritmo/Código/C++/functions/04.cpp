#include <iostream>
using namespace std;
#define l 3
#define c 3

int m[l][c];

void read();
void soma();
void portres();

int main() {
read();
soma();
portres();
}

void read() {
   for(int i=0; i < l; i++) {
      for(int j=0; j < c;j++) {
         cout << "Digite um número ";
         cin >> m[i][j];
      }
   }
}

void soma() {
   int s=0;
   for(int i=0; i < l; i++) {
      for(int j=0; j < c; j++) {
         if(m[i][j] % 2 == 0) {
            s += m[i][j];
         }
      }
   }
   cout << "A soma de todos os elementos pares é " << s << "\n";
}

void portres() {
   int cont=0;
   for(int i=0; i < l; i++) {
      for(int j=0; j < l; j++) {
         if(m[i][j] % 3 == 0){
            cont++;
         }
      }
   }
   cout << "A quantidade de elementos divisiveis por tres é "<< cont << "\n";
}