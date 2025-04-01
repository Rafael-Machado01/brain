#include <iostream>
using namespace std;

int main() {
   float S=0;
   int N=480,D=10;
   while(D <= 39) {
      S = S + N / D;
      N = N - 5;
      D = D + 1;
   }
   cout << "A soma é " << S;

}