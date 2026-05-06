#include <iostream>
using namespace std;

struct Cidade {
    int id;
    string name,uf;
};

struct Cliente {
    int id,telefone;
    string name,endereco;
    int idCidade;
};

struct Veiculo {
    string placa,modelo,marca;
    int ano;
    Cliente *idCliente;
};

struct Servico {
    int id;
    string descricao;
    float maoDeObra;
};

struct Peca{
    int id,qtdeEstoque,minimoEstoque;
    string descricao;
};

struct Mecanico {
    int id,telefone;
    string nome,especialidade;
};

struct Ordem {
    int id,qtdePeca;
    string data;
    Veiculo *placa;
    Mecanico *idMecanico;
    Servico *idServico;
    Peca *idPeca;

};

int main() {
    Cidade c[2];
    Cliente u[2];
    for (int i=0; i < 2; i++) {
        cout << "Digite o id da cidade " << endl;
        cin >> c[i].id;
        cout << "Digite o nome da cidade" << endl;
        cin >> c[i].name;
        cout << "Digite a UF:" << endl;
        cin >> c[i].uf;
    }
    u[0].id = 1;
    u[1].id = 2;
    u[0].name = "Bernardo";
    u[1].name = "Ju";
    u[0].idCidade = 1;
    u[1].idCidade = 2;
    for (int i=0; i < 2; i++) {
        cout << "ID:" << u[i].id << endl;
        cout << "Nome:" << u[i].name << endl;
        cout << "Endereço:" << u[i].endereco << endl;
        cout << "Telefone:" << u[i].telefone << endl;
        cout << "Cidade" << c[u[i].idCidade].name << endl;
        cout << "UF:" << c[u[i].idCidade].uf << endl;
    }
}