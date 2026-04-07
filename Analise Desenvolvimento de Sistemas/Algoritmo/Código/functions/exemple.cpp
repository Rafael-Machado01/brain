#include <iostream>
using namespace std;

void f1() {
   cout << "Hello World" << "\n";
}

void f2(int n) {
   cout << "Valor do argumento :" << n << "\n";
}

int f3() {
   int i=10;
   return i;
}

int f4(int i, int j) {
   int s = i * j;
   return s;
}



int main() {
   int x;
   f1(); // Função sem retorno e sem argumento
   f2(5); // Função sem retorno e com argumento
   x=f3(); // Função com retorno e sem argumento x recebe o valor de i
   cout << x << "\n";
   x=f4(2,1); // Função com retorno e com argumento 
   cout << x << "\n";
}