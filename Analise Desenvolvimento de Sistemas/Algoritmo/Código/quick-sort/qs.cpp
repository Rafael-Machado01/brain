#include <iostream>
using namespace std;

int* quick_sort(int lista[], int tamanho) {

    if (tamanho <= 1) {
        int* resultado = new int[tamanho];
        if (tamanho == 1) resultado[0] = lista[0];
        return resultado;
    }

    int pivo = lista[0];

    int menores[tamanho];
    int maiores[tamanho];

    int qtd_menores = 0;
    int qtd_maiores = 0;

    for (int i = 1; i < tamanho; i++) {
        if (lista[i] < pivo) {
            menores[qtd_menores++] = lista[i];
        } else {
            maiores[qtd_maiores++] = lista[i];
        }
    }

    int* menores_ordenados = quick_sort(menores, qtd_menores);
    int* maiores_ordenados = quick_sort(maiores, qtd_maiores);

    int* resultado = new int[tamanho];

    int posicao = 0;

    for (int i = 0; i < qtd_menores; i++) {
        resultado[posicao++] = menores_ordenados[i];
    }

    resultado[posicao++] = pivo;

    for (int i = 0; i < qtd_maiores; i++) {
        resultado[posicao++] = maiores_ordenados[i];
    }

    delete[] menores_ordenados;
    delete[] maiores_ordenados;

    return resultado;
}