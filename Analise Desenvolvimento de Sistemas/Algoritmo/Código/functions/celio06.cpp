#include <iostream>
using namespace std;
#define l 5
#define c 2
 
float m[5][2],m3=0,kwh=0;
void read();

void agua(int m3) {
   for(int i=0;i < l;i++) {
     cout << "Residencia " << i << " Deve " << m3 * m[i][0] << " na conta de água." << "\n";
   }
} 

void energia(int kwh) {
   for(int i=0;i < l;i++) {
     cout << "Residencia " << i << " Deve " << kwh * m[i][1] << " na conta de luz." << "\n";
   }
}



int main() {
   cout << "Digite o valor do m³";
   cin >> m3;
   cout << "Digite o valor do KwH ";
   cin >> kwh;
   read();
   agua(m3);
   energia(kwh);
}

void read() {
   for(int i=0; i < l;i++) {
       cout << "Digite o valor do consumo de água";
       cin >> m[i][0];
       cout << "Digite o valor do consumo de energia";
       cin >> m[i][1];
   }
}


