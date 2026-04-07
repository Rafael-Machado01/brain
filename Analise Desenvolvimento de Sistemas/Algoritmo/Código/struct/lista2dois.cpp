#include <iostream>
using namespace std;
#define t 5

struct dados {
   int num1;
   int num2;
   bool status;
};
dados v[t];

void read();
void result();

int main() {
   read();
   result();
}

void read() {
   for(int i=0;i<t;i++) {
      cout << "Digite o primeiro número" << " : " << endl;
      cin >> v[i].num1;
      cout << "Digite o segundo número" << " : " << endl;
      cin >> v[i].num2;
   }
}

void result() {
   for(int i=0; i<t; i++) {
      if(v[i].num1 + v[i].num2 >= 5) {
         v[i].status = true;
      }else {
         v[i].status = false;
      }
      cout << "\n O elemento " << i+1 << " Tem a soma de " << v[i].num1 + v[i].num2 << " O status é " << v[i].status << endl;
   }
}