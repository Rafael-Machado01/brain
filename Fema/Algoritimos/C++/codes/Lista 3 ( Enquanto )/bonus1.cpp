#include <iostream>
using namespace std;

int main() {
   float num=5,dem=10,s=0;
   while(num <= 32) {
      s = s + num / dem;
      num = num + 3;
      dem = num - 1;
   }
   cout << "A soma é " << s;
}