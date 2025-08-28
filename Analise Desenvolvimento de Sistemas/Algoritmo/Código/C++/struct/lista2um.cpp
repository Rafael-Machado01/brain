#include <iostream>
using namespace std;
#define t 3

struct dados{
   float n1;
};

dados v[t];

void read();
void bigger();
void average();
void amount();

int main() {
   read();
   bigger();
   average();
   amount();
}

void read() {
   for(int i=0; i < t; i++) {
      cout << "Digite o valor " << " : " << endl;
      cin >> v[i].n1;
   }
}

void bigger() {
   float bigger = v[0].n1;
   for(int i=0; i<t; i++) {
      if(v[i].n1 > bigger) {
         bigger = v[i].n1;
      }
   }
   cout << "\n O maior valor entre todos os elementos é " << " : " << bigger << endl;
}
void average() {
   float sum_average = 0;
   for(int i=0; i<t; i++) {
      sum_average += v[i].n1;
   }
   cout << "\n A média entre todos os elementos é " << " : " << sum_average / t << endl;
}

void amount() {
   int cont = 0;
   for(int i=0; i < t; i++) {
      if(v[i].n1 >= 20 && v[i].n1 <= 50) {
         cont++;
      }
   }
   cout << "\n A quantidade de valores entre o intervalo é " << " : " << cont << endl;
}