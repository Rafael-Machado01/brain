#include <iostream>
using namespace std;

#define T 3

struct Cliente {
    int id;
    string nome;
    string endereco;
    string cidade;
    string uf;
};

void read(Cliente v[]);
void view(Cliente v[]);
void search(Cliente v[],int x);
void add(Cliente v[],Cliente t[],Cliente a[]);

int main() {
    Cliente v[T],t[T],a[T];
    int x;
    read(v);
    view(v);
    cout << "Digite o ID para buscar." << endl;
    cin >> x;
    search(v,x);
    add(v,t,a);
}

void read(Cliente v[]) {
    for(int i=0; i < T; i++) {
        cout << "Digite o id:" << endl;
        cin >> v[i].id;
        cout << "Digite o nome:" << endl;
        getline(cin,v[i].nome);
        cin.ignore();
        cout << "Digite o endereço:" << endl;
        getline(cin,v[i].endereco);
        cin.ignore();
        cout << "Digite a cidade:" << endl;
        getline(cin,v[i].cidade);
        cin.ignore();
        cout << "Digite a UF:" << endl;
        cin >> v[i].uf;
    }
}

void view(Cliente v[]) {
    for(int i=0; i < T; i++) {
        cout << "ID: " << v[i].id << endl;
        cout << "Nome: " << v[i].nome << endl;
        cout << "Endereço: " << v[i].endereco << endl;
        cout << "Cidade: " << v[i].cidade << endl;
        cout << "UF: " << v[i].uf << endl;
    }
}

void search(Cliente v[], int x) {
    int inicio=0,fim=T-1,meio=0;
    for(int i=0; i < T; i++) {
        meio = (inicio + fim) / 2;
        if(v[meio].id > x) {
            fim = meio - 1;
        }else if(v[meio].id < x ) {
            inicio = meio+1;
        }
        if(v[meio].id == x) {
            cout << "Encontrado!" << endl;
            cout << "ID:" << v[meio].id << " Nome: " << v[meio].nome << " Endereço: "  << v[meio].endereco << " Cidade: "  << v[meio].cidade << " UF: " << v[meio].uf << endl;
            break;
        }
        if(inicio > fim) {
            cout << "Id inexistente." << endl;
            break;
        }
    }
}

void add(Cliente v[],Cliente t[],Cliente a[]) {
    for (int i = 0; i < T; i++) {
        
    }
}
