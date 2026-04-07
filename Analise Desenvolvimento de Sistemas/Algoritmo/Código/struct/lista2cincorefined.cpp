#include <iostream>
using namespace std;
#define t 5

struct dados {
   int age;
   float sal;
};

dados v[t];

void read();
void average();
void big();
void conts();

int main() {
   read();
   average();
   big();
   conts();
}

void read() {
   for(int i=0; i < t; i++) {
      cout << "Digite a idade do funcionário " << i+1 << " : " << endl;
      cin >> v[i].age;
      cout << "Digite o salário do funcionário" << i+1 << " : " << endl;
      cin >> v[i].sal;
   }
}

void average() {
   float sum50 = 0;
   int cont50=0;
   for(int i=0;i<t;i++){
   if(v[i].age >= 50) {
      sum50 += v[i].sal;
      cont50++;
   }
   }
   if(sum50 != 0) {
      cout << "A media de salário dos funcionários que tem mais de 50 anos é : " << sum50 / cont50  << endl; 
   }
}

void big() {
   float big = 0;
   int  bigage = 0;
   for(int i=0;i<t;i++) {
      if(v[i].sal > big) {
         big = v[i].sal;
         bigage= v[i].age;
      }
   } 
      cout << "A pessoa com o maior salário tem " << bigage << " anos " << "com o salário de " << " : " << big << endl;
   
}


void conts() {
   int cont=0;
   for(int i=0;i<t;i++) {
      if(v[i].sal >= 500 && v[i].sal <= 1000) {
         cont++;
      }
   }
   if(cont != 0) {
      cout << "Quantidade de pessoas que tem um salário entre R$500 há R$1000 é " << ":" << cont << endl;
   }
   else {
      cout << "Não exite pessoas que tem um salário entre R$500 há R$1000";
   }
}