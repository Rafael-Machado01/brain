#include <iostream>
using namespace std;
#define t 2

struct dados {
   string modelo;
   int year;
   int value;
};

dados v[t];
void read();
void menor();
void models();
void data();
int main() {
read();
menor();
data();
models();
}

void read() {
   for(int i=0;i<t;i++) {
      cout << "Digite o modelo do veiculo " << i+1 << " : " << endl;
      cin >> v[i].modelo;
      cout << "Digite o ano de fabricação do veiculo " << i+1 << " : " << endl;
      cin >> v[i].year;
      cout << "Digite o valor do veiculo " << i+1 << " : " << endl;
      cin >> v[i].value;
   }
}

void menor() {
   int var=0,cont=0;
    cout << "Digite o valor " << ": " << endl;
      cin >> var;
   for(int i=0;i<t;i++) {
     
      if(v[i].value < var) {
         cont++;
      }
   }if (cont != 0) {
      cout << "A quantidade de veículos que tem o valor menor que " << var << " é " << cont << endl;
   }else {
      cout << "Nenhum veiculo e mais barato que " << var << endl;
   }
}

void data() {

   int mn = v[0].year,mv= v[0].year,index=0,indexmv=0;
   for(int i=0;i<t;i++) {
      if(v[i].year > mn) {
         index = i;
      } if(v[i].year < mv) {
         indexmv = i;
      }
   }
   cout << "Dados do veiculo mais novo é " << v[index].modelo << " do ano " <<  v[index].year << " com o preço de "<< v[index].value << endl;
   cout << "Dados do veiculo mais velho é " << v[indexmv].modelo << " do ano " <<  v[indexmv].year << " com o preço de "<< v[indexmv].value << endl;
}
void models() {
   string model;
   cout << "Digite o modelo " << ": " << endl;
   cin >> model;
   for (int i=0;i<t;i++) {
      if(v[i].modelo == model) {
         cout << "Dados do veiculo  " << v[i].modelo << " do ano " <<  v[i].year << " com o preço de "<< v[i].value << endl;
      }
   }
}