#include <iostream>
using namespace std;

int main() {
    int idade=0;
    cout << "Digite a idade: ";
    cin >> idade;
    int *ponter = &idade; // Declarando ponteiro
    cout << "A idade digitada foi " << *ponter << " o endereço de memória é " << ponter << endl;
    // só a variavel ponter mostra o endereço
    // com * mostra o conteúdo

}
