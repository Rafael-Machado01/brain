#include <iostream>
using namespace std;
struct dados {
      int cod;
      float sal;
      int nrf;
   };

dados v[50];

void read();
void media();
void maior();
void menor();


int main() {
   read();
   media();
   maior();
   menor();
}

void read() {
   for(int i=0; i < 50; i++) {
      cout << "Codigo do funcionario";
      cin >> v[i].cod;
      cout << "Digite o salario";
      cin >> v[i].sal;
      cout << "Digite o numero de filhos";
      cin >> v[i].nrf;
   }
}

void media() {
   float ssal = 0;
   int snrf = 0;
   for(int i=0;i<50;i++) {
       ssal += v[i].sal;
   snrf += v[i].nrf;
   }
   cout << "A média de salario é " << ssal / 50;
   cout << "A média do número de filhos é " << snrf /50;
}

void maior() {
   float maior = 0;
   int maiorcod = v[0].cod;
   for(int i=0; i < 50; i++) {
     if(v[i].sal > maior) {
      maior = v[i].sal;
      maiorcod = v[i].cod;
     }
   }
    cout << "O funcionario com maior salario é " << maiorcod << maior;
}

void menor() {
   float menor = 0;
   int menorcod = v[0].cod;
   for(int i=0; i < 50; i++) {
     if(v[i].sal < menor) {
      menor = v[i].sal;
      menorcod = v[i].cod;
     }
   }
   cout << "O funcionario com menor salario é " << menorcod << menor;
}

void maiornf() {
   maiorf = 0;
   for(int i=0; i < 50; i++) {
      if(v[i].nrf > maior) {
         maiorf = v[i].nrf
      }
   }
   cout << "O funcionário com maior números de filhos é " << maiorf;
}