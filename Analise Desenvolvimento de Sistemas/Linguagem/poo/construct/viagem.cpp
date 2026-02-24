#include <iostream>
using namespace std;
#include "./viagem.h"

int main() {
  Viagem v1;
   Viagem v2(10, "Assis/São Paulo", 3, 200, 640);
  v1.imprimir();
  v2.imprimir();
}
