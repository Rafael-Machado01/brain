#include <iostream>
using namespace std;
#define t 20

struct dados {
   int age;
   float  wage;
};

dados v[t];

void read();
void average();
void bigger();
void ifs();

int main() {
read();
average();
bigger(); 
ifs(); 
}

void read() {
   for(int i=0; i < t; i++) {
      cout << "Digite a idade do funcionário " << i+1 << " : " << endl;
      cin >> v[i].age;
      cout << "Digite o salário do funcionário " << i+1 << " : " << endl;
      cin >> v[i].wage; 
   }
}

void average() {
   float s50 =0;
   for(int i=0;i<t;i++) {
      if(v[i].age >= 50) {
         s50 += v[i].wage;
      }
   } if (s50 != 0){
      cout << "A media de funcionários maiores que 50 anos é " << s50 / t << endl;
   }
   else {
         cout << "Nenhum funcionário tem mais de 50 anos.";
      }
}

void bigger(){
   float big=0;
   int age=0;
   for(int i=0;i<t;i++) {
      if(v[i].wage > big) {
         big = v[i].wage;
         age = v[i].age;
      }
   }
   cout << "A idade da pessoa com o maior salário é" << age << " e o salário é " << big << endl;
}

void ifs() {
   int cont=0;
   for(int i=0;i<t;i++) {
      if(v[i].wage >= 500 && v[i].age <= 1000) {
         cont++;
      }
   }
   if(cont == 0 ) {
      cout << "Não existe ninguém nesta faixa salarial " <<endl;
      }else {
         cout << "A quantidade de pessoas nesta faixa salarial é " << cont << endl;
      }
}