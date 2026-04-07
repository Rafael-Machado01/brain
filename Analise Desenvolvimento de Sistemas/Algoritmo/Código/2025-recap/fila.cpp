#include <iostream>
using namespace std;

#define T 5 // Definindo o tamanho da fila.

int f[T],inicio,fim; // Definindo variável de inicio e fim (globals);

int main() {

}

void iniciar() {
    inicio = 0;
    fim = -1;
    // É um reset na fila limpa tudo.
}

void inserir(int valor) {
    if(fim < T - 1) { // Verifica se há espaço na fila.
        fim++;
        f[fim] = valor // Inserir o valor no final da fila.
    } else {
        cout << "\n Fila Cheia";
    }
}

void consultar() {
    if(inicio > fim) {
        cout << "\n Fila Vazia "
    } else {
        cout << "O inicio da fila é: " << f[inicio];
    }
} // Verifica qual é o proximo da fila.

void remover() {
    if(inicio > fim) {
        cout << "\n Fila Vazia"
    }else {
        inicio++;
        if(inicio > fim) {
            iniciar();
        }
    }
} // Limpar.
