#include <iostream>
using namespace std;
#define T 10 // Define o tamanho da fila

struct dados {
    int n1;
    float n2;
};
int dados[T],inicio,fim;

void iniciar();
void inserir(int valor, float valor2);
void consultar();
void remover();
int main() {
    iniciar();
    inserir(10, 10.5);
     inserir(11, 11.5);
      inserir(12, 12.5);
    consultar();
    remover();
}

void iniciar() {
    inicio = 0;
    fim = -1;
}

void inserir(int valor, float valor2) {
    if(fim < T - 1){
        fim++;
        f[fim].n1 = valor;
        f[fim].n2 = valor2;

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

void imprimir1() {
   int sumN1 = 0;
   float sumN2 = 0;
    if(inicio > fim) {
    cout << "Fila vazia"
    }
    else {
        for(int i = inicio; i <= fim; i++) {
            sumN1 += f[i].n1;
            sumN2 += f[i].n2;
        }
        cout << "A soma de n1 é :" << sumN1 << endl;
        cout << "A soma de n2 é :" << sumN2 << endl;
    }
}

void imprimir2() {
    int mn1 = f[inicio].n1;
    float mn2 = f[inicio].n2;

    if(inicio > fim) {
        cout << "Fila Vazia"
    } else {
        for(int i = inicio; i <= fim; i++) {
            if(f[i].n1 > mn1) {
                mn1 == f[i].n1;
            }
            if(f[i].n2 > mn2) {
                mn2 = f[i].n2;
            }
        }
    }
}

void imprimir3() {
    int pos = 0;
    float menor = f[inicio].n2;
    if(inicio > fim) {
        cout << "Fila Vazia"
    }
    else {
        for(int i = inicio; i <= fim; i++) {
            if(f[i].n2 < menor) {
                menor = f[i].n2;
                pos = i;
            }
        }
        cout << "O menor valor de n2 é :" << menor << endl;
        cout << "Posição do menor valor de n2 é :" << pos << endl;
    }
}

void imprimir4() {
    if(inicio > fim) {
        cout << "Fila Vazia"
    }
    else {
        for(int i = inicio; i <= fim; i++) {
            cout << "n1: " << f[i].n1 << ", n2: " << f[i].n2 << endl;
        }
    }
}
