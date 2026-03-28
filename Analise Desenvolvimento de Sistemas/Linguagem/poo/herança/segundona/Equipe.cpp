#include <iostream>
using namespace std;

#include "./Cargo.h"
#include "Funcionario.h"
#include "Funcoes.h"

int main()
{

  Cargo c1;
  c1.imprimir();

  Cargo c2(2, "Sub Tenente");
  c2.imprimir();

  Funcionario f1;
  f1.imprimir();

  Funcionario f2(2, "Begosso", 15000, Cargo(5, "Diretor de TI"));
  f2.imprimir();
  f2.aumento();
  f2.imprimir();
  int x = 50;
  f2.aumento(x);
  f2.imprimir();
  lerFuncionario(f2);
}