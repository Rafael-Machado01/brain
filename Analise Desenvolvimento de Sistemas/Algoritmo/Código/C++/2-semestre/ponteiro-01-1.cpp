// Faça um vetor e crie um ponteiro e mostre o endereço de cada item.
#include <iostream>
using namespace std;
#define T 5
int v[5],*ponter=0;
int main() {
    for(int i=0; i<T; i++) {
        cout << "Digite o valor para a posição " << i+1 << " : " << endl;
        cin >> v[i];
    }
    for(int i=0;i<T; i++) {
        ponter= &v[i];
        cout << "A posição " << i+1 << "contém o conteúdo : " << *ponter << " e o endereço de memória é :" << ponter << endl;
    }
}
