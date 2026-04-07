#include <iostream>
using namespace std;
#define N 10

int v[N];
void read();
void index();
void negative();

int main() {
read();
index();
negative();
}

void read() {
   for(int i=0; i < N; i++) {
      cout << "Digite um número ";
      cin >> v[i];
   }
}

void index() {
   int cont=0;
   for(int i=0; i < N;i++) {
      if(v[i] > i) {
         cont++;
      }
   }
   cout << "A quantidade de números maiores que seus índices é " << cont;
}

void negative() {
   int contn=0;
   for(int i=0; i < N; i++) {
      if(v[i] < 0) {
         contn++;
      }
   }
   cout << "A quantidade de números negativos é " << contn;
}