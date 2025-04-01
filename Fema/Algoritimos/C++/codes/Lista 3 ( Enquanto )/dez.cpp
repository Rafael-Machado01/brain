#include <iostream>
using namespace std;

int main() {
   float S = 0,N1 = 5, N2 = 1;
   while (S < 32) {
      S = S + N1 / N2;
      N1 = N1 + 3;
      N2++;
   }
   cout << "S = " << S;
}