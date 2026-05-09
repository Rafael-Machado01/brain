#include <iostream>
using namespace std;
#define T 1

// Structs

struct Cidades {
    int id;
    string nome,uf;
};

struct Servicos {
    int id;
    string descricao;
    float mao_de_obra;
};

struct Pecas {
    int id;
    string descricao;
    int qtde,min_estoque,max_estoque;
    float preco;
};

struct Clientes {
    int id,telefone, id_cidade;
    string nome,endereco;

};


// Structs

// Functions

void setCidade(Cidades c[]);
void setServicos(Servicos s[]);
void setPecas(Pecas p[]);
void setClientes(Clientes u[]);

// Functions

int main() {
    // Initialize

    Cidades c[T];
    Servicos s[T];
    Pecas p[T];
    Clientes u[T];

    // Initialize

    // Functions
    setCidade(c);
    setServicos(s);
    setPecas(p);
    setClientes(u);
    // Functions
}

// Setters

void setCidade(Cidades c[]) {
    for (int i=0; i < T; i++) {
        cout << "=-= Cadastro de Cidades - " << "Posição: " << i  << " =-="<< endl;
        cout << "Digite o id:  " << endl;
        cin >> c[i].id;
        cout << "Digite o nome:" << endl;
        cin.ignore();
        getline(cin,c[i].nome);
        cout << "Digite o UF: " << endl;
        cin >> c[i].uf;
    }
}

void setServicos(Servicos s[]) {
    for (int i=0; i < T; i++) {
        cout << "=-= Cadastro de Serviços - " << "Posição: " << i  << " =-="<< endl;
        cout << "Digite o id: " << endl;
        cin >> s[i].id;
        cout << "Digite a Descrição: " << endl;
        cin.ignore();
        getline(cin, s[i].descricao);
        cout << "Digite o valor de Mão de Obra: " << endl;
        cin >> s[i].mao_de_obra;
    }
}

void setPecas(Pecas p[]) {
    for (int i=0; i < T; i++) {
        cout << "=-= Cadastro de Peças - " << "Posição: " << i  << " =-="<< endl;
        cout << "Digite o id: " << endl;
        cin >> p[i].id;
        cout << "Digite a Descrição: " << endl;
        cin.ignore();
        getline(cin, p[i].descricao);
        cout << "Digite a Quantidade em estoque " << endl;
        cin >> p[i].qtde;
        cout << "Digite o Estoque minimo" << endl;
        cin >> p[i].min_estoque;
        cout << "Digite o Estoque maximo" << endl;
        cin >> p[i].max_estoque;
        cout << "Digite o Preço unitário" << endl;
        cin >> p[i].preco;
    }
}

void setClientes(Clientes u[]) {
    for (int i=0; i < T; i++) {
        cout << "=-= Cadastro de Clientes - " << "Posição: " << i  << " =-="<< endl;
        cout << "Digite o id: " << endl;
        cin >> u[i].id;
        cout << "Digite o Nome: " << endl;
        cin.ignore();
        getline(cin, u[i].nome);
        cout << "Digite o endereço: " << endl;
        cin.ignore();
        getline(cin,u[i].endereco);
        cout << "Digite o Telefone" << endl;
        cin >> u[i].telefone;
        cout << "Digite o Id da Cidade" << endl;
        cin >> u[i].id_cidade;
    }
}


// Setters

// Includes

// Includes