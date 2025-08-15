#include <iostream>
using namespace std;
#define t 10

float v[t],X;

int soma(int X) {
   int s=0;
   for(int i = 0; i < t; i++) {
      if(v[i] > X) {
         s+= v[i];
      }
   }
   return s;
}
void read();
void media();

int main() {
   cout << "Digite o número de X";
   cin >> X;
   read();
   cout << "A soma dos números maiores que X é " <<  soma(X);
   media();

}

void read() {
   for(int i = 0; i < t; i++) {
      cout << "Digite o número para o vetor";
      cin >> v[i];
   }
}



void media() {
   int m=0,s=0;
   for(int i = 0; i < t; i++) {
      s += v[i];
   }
    m = s / t;
    cout << "A média dos números é " << m;
}