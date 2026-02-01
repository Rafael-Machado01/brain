// Faça um programa em C/C++ que leia o NOME do Morador e a QUANTIDADE
// de consumo de água gasto por 5 apartamentos durante um mês. Armazene os dados em dois vetores (vNome e vCons). 
// - imprimir o nome dos moradores que consumiram mais de 30 mts cúbicos;
// - calcular a média de consumo dos moradores que consumiram menos de 100 mts cúbicos mensais;
// - classificar os valores em ordem decrescente de consumo.

#include <iostream>
using namespace std;
#define T 5

string vNome[T];
float vCons[T];

void init();
void average();
void bubbleShort();

int main() {
    init();
    system("clear");
    average();
    bubbleShort();
    cout << "Lista de consumo dos moradores em ordem decrescente " << endl;
    for(int i = 0; i < T; i++) {
        cout << vNome[i] << " - " << vCons[i] << " m³" << endl;        
    }
}

void init() {
    for(int i=0; i < T; i++) {
        cout << "Digite o nome do morador do apto " << i+1 << endl;
        cin >> vNome[i];
        cout << "Digite o consumo mensal de " << vNome[i] << endl;
        cin >> vCons[i];
    }
}

void average() {
    float cont=0,sum=0.0;
    for(int i=0; i < T; i++) {
        if(vCons[i] < 100) {
            cont++;
            sum += vCons[i];    
        }
    }
    if(cont != 0) {
            cout << "A média dos moradores que consumiram menos que 100 m³ é " << sum / cont << endl;
        }else{
            cout << "Nenhum morador consumiu menos que 100 m³" << endl;
        }
}

void bubbleShort(){
        for(int i=0;i < T; i++) {
            for(int j=i+1; j < T; j++) {
                if(vCons[i] < vCons[j]) {
                float swapCons = vCons[i]; // Passando o valor de i que é menor que j para swap
                string swapNome = vNome[i];

                vCons[i] = vCons[j]; // Passando o valor de j para o i
                vCons[j] = swapCons; // Passando o valor de swap para o j
                
                vNome[i] = vNome[j];
                vNome[j] = swapNome;
                }
            }
        }
}

