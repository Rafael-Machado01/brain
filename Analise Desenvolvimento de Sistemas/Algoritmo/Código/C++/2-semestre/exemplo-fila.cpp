#include <iostream>
using namespace std;
#define T 5 // Define o tamanho da fila
int f[T],inicio,fim;

void iniciar();
void inserir(int valor);
void consultar();
void remover();
int main() {
    iniciar();
    inserir(10);
     inserir(11);
      inserir(12);
    consultar();
    remover();
}

void iniciar() {
    inicio = 0;
    fim = -1;
}

void inserir(int valor) {
    if(fim < T - 1){
        fim++;
        f[fim] = valor; // Colocar o numero no final da fila
    }
    else {
        cout << "\n Fila Cheia";
    }
}

void consultar() {
    if(inicio > fim) {
        cout << "\n Fila Vazia";
    }
    else {
        cout << "O topo da fila é:" << f[inicio];
    }
}

void remover() {
    if(inicio > fim) {
        cout << "\n Fila Cheia";
    }
    else {
        inicio++;
        if(inicio > fim) {
            iniciar();
        }
    }
}
