#include <iostream>
using namespace std;

#include "./funcionario.h"

int main() {
  Funcionario func1;
  func1.ler();
  func1.imprimir();


 /* Infrigindo o encapsulamento. Apenas metodos pode manipular atributo.
   cout << "Nome" << func1.nome << endl;
  func.salario = 5000;
  cout << "Novo salario:" << func.salario;
 */
 // Acessando por um metodo
 cout << "Nome: " << func1.getNome() << endl;

 func1.setId(45);

}