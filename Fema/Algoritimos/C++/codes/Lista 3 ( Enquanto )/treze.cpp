#include <iostream>
using namespace std;

int main() {
   int cont=1,dem=1;
   float s=0.0;
   while (cont <= 99999999) {
         s = s + 4.0 / dem;
         dem = dem + 2;
         cont++;
         s = s - 4.0 / dem;
         dem = dem + 2;
      cont++;
   }
   cout << "O número de Pi é " << s << endl;
}