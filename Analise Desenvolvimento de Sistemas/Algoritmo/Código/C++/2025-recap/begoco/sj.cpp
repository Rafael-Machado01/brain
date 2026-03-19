// Lista de compras de mercado. Um item é composto pelo nome, fornecedor,qtde e preço.
// Leia a lista e em seguida o programa deverá calcular e retornar o valor total da lista de compras.
// Crie um função para vereficar e retornar as seguintes query. O nome e valor do item mais caro e do item mais barato.
// E o nome do produto com menor quantidade em estoque.
#include <iostream>
using namespace std;
#define T 2
struct Item {
  string nome;
  string fornecedor;
  int qtde;
  float valor;
};

void ler(Item lista[]) {
  for(int i=0; i < T;i++){
    cout << "Digite o nome do Produto." << endl;
    cin >> lista[i].nome;
    cout << "Digite o nome do Fornecedor." << endl;
    cin >> lista[i].fornecedor;
    cout << "Digite a Quantidade." << endl;
    cin >> lista[i].qtde;
    cout << "Digite o valor." << endl;
    cin >> lista[i].valor;
  }
}

float sum(Item lista[]) {
  float x=0.0;
  for(int i=0; i < T; i++) {
    x += lista[i].valor * lista[i].qtde;
  } 
  return x;
}

void conds(Item lista[],float *caro,float *barato,int *zero, string *nCaro, string *nBarato,string *nZero) {
  *caro = lista[0].valor;
  *nCaro = lista[0].nome;
  *barato = lista[0].valor;
  *nBarato= lista[0].nome;
  *zero = lista[0].qtde;
  *nZero = lista[0].nome;

  for(int i=1;i<T;i++){
    if(lista[i].valor > *caro) {
      *nCaro = lista[i].nome;
      *caro = lista[i].valor;
    }
    if(lista[i].valor < *barato) {
      *nBarato = lista[i].nome;
      *barato = lista[i].valor;
    }if(lista[i].qtde < *zero) {
      *nZero = lista[i].nome;
      *zero = lista[i].qtde;
    }
  }
}


int main() {
  float caro,barato;
  int zero;
  string nCaro,nBarato,nZero;
  Item lista[T];
  ler(lista);
  cout << "O valor total da lista é " << sum(lista) << endl;
  conds(lista,&caro,&barato,&zero,&nCaro,&nBarato,&nZero);
 cout << "O produto mais caro é " << nCaro << " com o preço de " << caro << endl;
 cout << "O produto mais barato é " << nBarato << " com o preço de " << barato << endl;
 cout << "O produto que menos tem no estoque é " << nZero << "consta: " << zero << endl;
}