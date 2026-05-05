#include <iostream>
using namespace std;

struct Cidade {
    int id;
    string name,uf;
};

struct Cliente {
    int id,telefone;
    string name,endereco;
    Cidade *idCidade;
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
    Veiculo v[2];
    Mecanico m[2];
    Peca p[2];
    Ordem o[2];
}