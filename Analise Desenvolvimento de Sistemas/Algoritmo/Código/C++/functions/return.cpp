#include <iostream>
using namespace std;

int soma(int a,int b) { // Aqui ele recebe n1 e n2.
   int s;
   s += a + b;
   return s;
}

int main() {
int n1 = 5;
int n2 = 5;
int x = soma(n1,n2); // Chamando a função passando parâmetros aqui || Também podemos colocar os números diretos aqui.
cout << x;
}

