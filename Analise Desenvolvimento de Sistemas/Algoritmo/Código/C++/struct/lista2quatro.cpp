#include <iostream>
using namespace std;
#define t 15

struct dados {
   float sell;
   float cost;
};

dados v[t];

void read();

int main() {
   read();
}

void read() {
   for(int i=0;i<t;i++) {
      cout << "Digite o custo do produto " << i+1 << endl;
      cin >> v[i].cost;
      v[i].sell = v[i].cost * 1.50;
       cout << "Produto " << i+1 << " Valor de venda é " << v[i].sell << endl;
   }
}
