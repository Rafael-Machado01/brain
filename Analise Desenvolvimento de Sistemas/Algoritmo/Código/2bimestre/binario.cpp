#include <iostream>
using namespace std;

int main() {
  int v[10],x;
  for(int i= 0; i < 10; i++) {
    cout << "Digite os códigos em sequencia." << endl;
    cin >> v[i];
  }
  cout << "Digite o código para a busca: " << endl;
  cin >> x;
  int inicio=0,fim=10,m=0;
  for(int i=0; i < 10; i++) {
    m = (inicio + fim) / 2;
    if(inicio > fim) {
      cout << "Código inexistente." << endl;
      break;
    }
    if(v[m] < x) {
      inicio = m+1;
    }
    if(v[m] > x ) {
      fim = m-1;
    }
    if(v[m] == x) {
      cout << "Código está no index " << m+1 << endl;
      break;
    }
  }
}