#include <iostream>
using namespace std;
#define TM 10
#define TMM 2
#define VE 10

int m[TM][TMM],v[VE];
void read();
void media();
void notas();

int main() {
read();
media();
notas();
}

void read() {
   for(int i=0; i < TM; i++) {
          cout << "Digite a primeira nota ";
         cin >> m[i][0];
         cout << "Digite a segunda nota ";
         cin >> m[i][1];
      }
   }

void media() {
   int me=0,s=0;
   for(int i = 0; i < TM; i++) {
  s = m[i][0] + m[i][1];
  me = s / 2;
      v[i]=me;
   }
}

void notas() {
   for(int i=0;i< VE; i++) {
      if(v[i] >= 7) {  
                  cout << "Aluno " << i << " Aprovado" << "\n";
      }else {
         cout << "Aluno " << i << " Reprovado" << "\n";
      }
   }
}