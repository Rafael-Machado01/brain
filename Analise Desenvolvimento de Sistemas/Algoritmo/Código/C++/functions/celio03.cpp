#include <iostream>
using namespace std;
#define T 4

int m[T][T],N=0;

int soma(int N) {
   int si=0;
   for(int i=0;i < T; i++) {
      for(int j=0; j < T; j++) {
         if(m[i][j] % 2 != 0 && m[i][j] > N) {
            si += m[i][j];
         }
      }
   }
   return si;
}

void read();
int menor();
int maior();

int main() {
   cout << "Digite o valor N ";
   cin >> N;
   read();
   cout << "A soma dos elementos ímpares maior que N " << soma(N);
   cout << "O menor número da matriz é " << menor();
   cout << "O maior número da matriz é" << maior();
}

void read() {
   for(int i=0; i < T; i++) {
      for(int j=0;j < T; j++) {
         cout << "Digite um número ";
         cin >> m[i][j];
      }
   }
}

int menor() {
   int me=m[0][0];
   for(int i=0;i < T;i++) {
      for(int j=0; j < T;j++) {
         if(m[i][j] < me) {
            me = m[i][j];
         }
      }
   }
   return me;
}

int maior() {
   int ma=0;
   for(int i=0; i < T; i++) {
      for(int j=0;j< T;j++) {
         if(m[i][j] > ma) {
 ma = m[i][j];
         }
        
      }
   }
   return ma;
}