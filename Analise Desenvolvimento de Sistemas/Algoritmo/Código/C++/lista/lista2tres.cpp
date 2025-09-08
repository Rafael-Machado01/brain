#include <iostream>
using namespace std;

void imprimir1() {
   int s1 = 0; float s2 =0;
   if(inicio > fim) {
      cout << "Fila Vazia"
   }
   else {
      for(int i = inicio; i <= fim; i++) {
         s1 += f[i].n1;
         s2 += f[i].n2;
      }
   }
   cout << "A soma de N1 é " << s1 << endl;
   cout << "A soma de N2 é " << s2 << endl;
}

void imprimir2() {
   if(inicio > fim) {
      cout << "Fila Vazia"
   }
   else {
      for(int i = inicio; i <= fim; i++) {
         
      }
   }
}