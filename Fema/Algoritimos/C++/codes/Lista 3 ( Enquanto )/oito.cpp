#include <iostream>
using namespace std;


int cont = 1;
int main(){
   
   while(cont <= 10) {
      int n1,n2,m,ca=0,cr=0,ce=0;
      cout << "Digite nota 01 \n";
      cin >> n1;
      cout << "Digite a segunda nota \n ";
      cin >> n2;
      m = (n1 + n2) /2;
      if(m >= 7){
         cout << "A média é " << m << " e você foi aprovado \n ";
         ca++;
      }else if(m < 3) {
         cout << "A média é " << m << " e você foi reprovado \n";
         cr++;
      }else {
         cout << "A média é " << m << " e você está de recuperação \n " ;
         ce++;
      }
      cont++;
   }
}