#include <iostream>
using namespace std;

int main() {
   struct dma 
   {
      int dia;
      int mes;
      int ano;
   };
   dma data;
   cout << "Digite o dia ";
   cin >> data.dia;
   cout << "Digite o mes";
   cin >> data.mes;
   cout << "Digite o ano ";
   cin >> data.ano;
   cout << data.dia << data.mes << data.ano;
}