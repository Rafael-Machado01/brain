#include <iostream>
#include <math.h>
using namespace std;

int main() {
   float r=1,v=0;
   while(r <= 20.0) {
      v = 4.0 / 3.0 * 3.14 * (r * r * r);
      cout << "O valor do raio e: " << r << " E o volume da esfera e: " << v << endl;
      r = r + 0.5;
   }
   
}
