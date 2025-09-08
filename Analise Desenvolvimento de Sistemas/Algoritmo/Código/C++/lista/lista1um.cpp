#include <iostream>
using namespace std;
#define t 10

struct dados {
   int n;
   bool s;
};
dados v[t];
int inicio,fim;

void iniciar();

int main() {
   inserir(10,true)
}

void iniciar() {
   inicio = 0;
   fim = -1; 
}

void inserir(int valor,bool s) {
   if(fim < t-1) {
      fim++;
      v[fim].n = valor;
      v[fim].s = status;
   }
   else {
      cout << "A fila está cheia." << endl;
   }
}

