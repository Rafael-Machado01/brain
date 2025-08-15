#include <iostream>
using namespace std;
#define l 30
int q[l],p[l];

void read();
void calc();

int main() {
read();
calc();
}

void read() {
   for(int i=0;i < l;i++) {
      cout << "Digite a quantidade do produto " << i << "\n";
      cin >> q[i];
      cout << "Digite o preço do produto " << i << "\n";
      cin >> p[i];
   }
}

void calc() {
   for(int i=0;i < l; i++) {
      cout << "O valor de estoque do produto " << i << "  " << q[i] * p[i] << "\n";
   }
}
