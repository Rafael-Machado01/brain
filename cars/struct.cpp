// Exemplo de relacionamentos com struct.

#include <iostream>
using namespace std;

struct Cidade {
    int id;
    string nome;
    string uf;
};

struct Cliente {
    int id;
    string nome;
    string endereco;
    int telefone;
    Cidade *cidade_id;

};

int main() {
    Cidade v[10];
    Cliente c[10];
    cout << "Digite o ID do cliente: " << endl;
    cin >> c[0].id;
    cout << "Digite o nome do cliente: " << endl;
    cin >> c[0].nome;
    cout << "Digite o endereco do cliente: " << endl;
    cin >> c[0].endereco;
    cout << "Digite o telefone do cliente: " << endl;
    cin >> c[0].telefone;

    c[0].cidade_id = &v[0];
    // Então na função de cadastrar cliente passamos o valor do id x para o endereço &v[x];
}