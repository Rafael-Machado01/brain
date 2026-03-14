#include <iostream>
using namespace std;
#include "categoria.h"
#include "produto.h"
#include "produtoGen.h"

int main() {
    Categoria cat2(2,"Bebidas");
    Produto prod2(1, "Suco de Laranja", cat2, 50,15);
    prod2.imprimir();
    cout << "Descriçao do produto 2: " << prod2.getDescricao() << endl;
       cout << "Id do produto 2: " << prod2.getId() << endl;
        cout << "ID da categoria do produto 2: " << prod2.getCategoria().getId() << endl;
        // Navegabilidade 
    
    prod2.setDesc("Suco de Melancia");
    prod2.setValor(23);
    Categoria aux; 
    aux = prod2.getCategoria();
    aux.setDescricao("Tropical");
    prod2.setCategoria(aux);
    prod2.imprimir();
}