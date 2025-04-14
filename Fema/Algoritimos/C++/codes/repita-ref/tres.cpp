#include <iostream>
#include <math.h>
using namespace std;

int main() {
   float s=0,d=37,n=1,m=38;
   while(n <= 37) {
      d = d * m;
      s = s + d / n;
      n = n + 1;
      m = m -1;
   }
  cout << "O somatório é :" << s;
}