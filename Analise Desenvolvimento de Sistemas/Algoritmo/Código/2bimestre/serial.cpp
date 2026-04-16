#include <iostream>
using namespace std;
#define T 2
struct Clientes
{
  int codigo;
  char nome[30];
  char endereco[35];
  char cidade[25];
  char uf[2];
};
void registro(Clientes v[])
{
  for (int i = 0; i < T; i++)
  {
    cout << "Digite o código: " << endl;
    cin >> v[i].codigo;
    cout << "Digite o nome:" << endl;
    cin >> v[i].nome;
    cout << "Digite o endereço: " << endl;
    cin >> v[i].endereco;
    cout << "Digite a cidade:" << endl;
    cin >> v[i].cidade;
    cout << "Digite a UF:" << endl;
    cin >> v[i].uf;
  }
}

void imprimir(Clientes v[])
{
  for (int i = 0; i < T; i++)
  {
    cout << "Código:" << v[i].codigo << endl;
    cout << "Nome: " << v[i].nome << endl;
    cout << "Endereço: " << v[i].endereco << endl;
    cout << "Cidade: " << v[i].cidade << endl;
    cout << "UF:" << v[i].uf << endl;
  }
}

void busca(Clientes v[], int x)
{
  bool encontrou = false;
  for (int i = 0; i < T; i++)
  {
    if (v[i].codigo == x)
    {
      cout << "Encontrado! " << endl;
      cout << v[i].nome << v[i].endereco << v[i].cidade << v[i].uf << endl;
      encontrou = true;
      break;
    }
    if (x < v[i].codigo)
    {
      encontrou = false;
      break;
    }
  }
  if (!encontrou)
  {
    cout << "Código não existe." << endl;
  }
}

int main()
{
  Clientes v[T];
  int x = 0;
  registro(v);
  imprimir(v);
  cout << "Digite o código que deseja buscar:" << endl;
  cin >> x;
  busca(v, x);
}