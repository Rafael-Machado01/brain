#include <iostream>
#include <cmath>
using namespace std;
#define t 5

struct dados {
   float raio;
   float peri;
   float area;
};

dados v[t];

void read();

int main() {
   read();
   for(int i=0;i < t; i++) {
      cout << "O circulo "<<  i+1 << " Tem o perímetro de " << v[i].peri << " E a area de  " << v[i].area << endl;
   }
}

void read() {
   for(int i=0;i<t;i++) {
      cout << "Digite o raio do circulo " << i+1 << endl;
   cin >> v[i].raio;
   v[i].peri = 2 * M_PI * v[i].raio;
   v[i].area = M_PI * pow(v[i].raio,2);
   }
}