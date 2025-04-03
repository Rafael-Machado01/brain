#include <iostream>
#include <math.h>
using namespace std;

int main() {
   float P;
   cout << "Digite o seu peso :";
   cin >> P;
   while(P != 0){
      cout << "Se voce ganhar 15 porcento de seu peso, voce tera" << P *1.15 << "kg." << endl;
      cout << "Se voce perder 20 porcento de seu peso, voce tera" << P *0.80 << "kg." << endl;
      cout << "Digite o seu peso :";
      cin >> P;
   }

}