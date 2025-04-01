#include <iostream>
using namespace std;

int main() {
   float S=0,Y=1;
   while (Y <= 200) {
      S = S + 1 / Y;
      Y = Y + 1;
   }
   cout << "A soma é :" << S;
}