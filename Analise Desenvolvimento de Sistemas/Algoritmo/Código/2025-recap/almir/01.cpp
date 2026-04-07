// Calcule o salario de 50 funcionários e o total de imposto descontado deles.
//• Para cada funcionário deve ser informado o salário base,
//• Que ele tem 16% de gratificação e paga 30% de imposto.

#include <iostream>
using namespace std;
#define T 50

float v[T];

int main() {  
  for(int i=0; i<T; i++) {
    cout << "Digite o salário do funcionário " << i+1 << endl;
    cin >> v[i];
    cout << "O funcionário " << i+1 << " tem de salario base de " << v[i] << " Com a gratificação de " << v[i] * 0.16 << " e paga " << v[i] *0.30 << " de imposto. " << endl;
    cout << "Salário final é de " << ((v[i] *0.16) + v[i]) - v[i] *0.30 << endl;
  }
}
