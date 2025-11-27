#include<iostream>
using namespace std;
void iniciar();
void inserir(int,bool);
void consultar();
void remover();
void proximo();
void imprimir();
void trueimprimir();
void parimprimir();
#define t 10
struct dados{
int n;
bool status;
};
dados f[t];
int inicio, fim;
int main(){
iniciar();
inserir(10,true);
inserir(15,false);
inserir(5,false);
inserir(9,true);
inserir(4,true);
inserir(20,true);
inserir(50,true);
consultar();
proximo();
imprimir();
trueimprimir();
parimprimir();



}
//----------------
void iniciar(){
inicio = 0;
fim = -1;
}
//----------------
void inserir(int valor,bool s){
if(fim < t-1){
fim++;
f[fim].n = valor;
f[fim].status = s;
}
else
{
cout << "\nFila Cheia";

}
}
//----------------
void remover(){
if(inicio > fim){
cout << "\nFila Cheia";
}
else
{
inicio++;
if(inicio > fim){
iniciar();
}
}
}
//----------------
void consultar(){
if(inicio > fim){
cout << "\nFila Vazia";
}
else
{
cout << "\nTopo da Fila: " <<
f[inicio].n << " " << f[inicio].status;

}
}

void proximo() {
    if(inicio > fim) {
        cout << "\n Fila Vazia";
    }
    else if(inicio == fim){
        cout << "\n Fila com um elemento Não há proximo";
    }
    else {
        cout << "\n Proximo da fila:" << f[inicio + 1].n << " " << f[inicio +1].status;
     }
}

void imprimir() {
    if(inicio > fim) {
        cout << "\n Fila Vazia";
    }
    else {
        for(int i = inicio; i <= fim; i++){
            cout << f[i].n << " " << f[i].status << endl;
        }
    }

}
void trueimprimir() {
    if(inicio > fim) {
        cout << "\n Fila Vazia";
    }
    else {
        for(int i = inicio; i <= fim; i++) {
            if(f[i].status == true) {
                cout << f[i].n << endl;
            }
        }
    }
}

void parimprimir() {
    if(inicio > fim) {
        cout << "\n Fila Vazia";
    }
    else {
        cout << "Numeros par :" << endl;
        for(int i = inicio; i <= fim; i++) {
            if(f[i].n %2 ==0) {
                cout << f[i].n << endl;
            }
        }
    }
}
