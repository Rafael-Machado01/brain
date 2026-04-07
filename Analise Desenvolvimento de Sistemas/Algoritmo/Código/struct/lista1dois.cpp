#include <iostream>
using namespace std;
#define t 2

struct dados {
   char name [20];
   float note1;
   float note2;
};

dados v[t];

void read();
void result();

int main() {
 read();
 result();
}

void read() {
   for(int i=0; i < t;i++) {
      cout << "Digite o nome do Aluno" << " : " << endl;
      cin >> v[i].name;
      cout << "Digite a primeira Nota" << " : " << endl;
      cin >> v[i].note1;
      cout << "Digite a segunda Nota"<< " : " << endl;
      cin >> v[i].note2;
   }
}

void result() {
   float sun_average = 0;
   for(int i=0; i < t; i++) {
      sun_average += v[i].note1 + v[i].note2;
      if(sun_average / 2 >= 7) {
         cout << "\n Aluno " << v[i].name << " Aprovado!" << endl;
      }else if(sun_average / 2 < 7 && sun_average / 2 >= 5) {
         cout << "\n Aluno " << v[i].name << " Exame" << endl;
      }else {
         cout << "\n Aluno " << v[i].name << " Reprovado!" << endl;
      }
   }
}

