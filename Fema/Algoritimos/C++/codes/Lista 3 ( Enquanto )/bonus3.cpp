#include <iostream>
#include <math.h>
using namespace std;

int main() {
   int I,CONT=1,Maior=0,CONT20,CONTI=0,M;
   cout << "Digite a idade do aluno :";
   cin >> I;
   while(I != 0) {
      CONT++;
      CONTI = CONTI + I;
      if(I > Maior) {
         Maior = I;
      }
      if(I < 20) {
         CONT20++;
      }
      cout << "Digite a idade do aluno :";
        cin >> I;
      
   }
  M = CONTI / CONT;
   cout << "A quantidade de alunos é: " << CONT << endl;
   cout << "A média de idade é: " << M << endl;
   cout << "A maior idade é: " << Maior << endl;
   cout << "Existem " << CONT20 << " alunos com menos de 20 anos." << endl;

}     