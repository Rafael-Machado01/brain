// Escreva um programa que leia as seguintes informações dos clientes de uma empresa:
// CPF, nome, idade, salário.
// A leitura desses dados deve ser realizada em uma função específica.
// Apos a leitura das informações, enviar os dados para outra função que vai calcular e retornar:
// - O nome e a idade do cliente mais velho
// - O nome e o salário do cliente com maior salário
// Considere que a empresa possui 1000 clientes.

#include <iostream>
using namespace std;

#define T 3

struct Funcionario {
  string cpf;
  string nome;
  int idade;
  float salario;
};

void ler(Funcionario v[]) {
  for(int i=0;i < T;i++) {
    cout << "Digite o CPF do Funcionário " << i+1 << " : " <<  endl;
    cin.ignore();
    getline(cin,v[i].cpf);
    
    cout << "Digite o Nome do Funcionário " << i+1 << " : " << endl;
    getline(cin,v[i].nome);

    cout << "Digite a Idade do Funcionário " << i+1 << " : " << endl;
    cin >> v[i].idade;

    cout << "Digite o Salário do Funcionário " << i+1 << " : " << endl;
    cin >> v[i].salario;
  }
}

void results(Funcionario v[],int *iVelho, string *nVelho, float *sMaior, string *nMaior) {
  *iVelho = v[0].idade;
  *nVelho = v[0].nome;
  *sMaior = v[0].salario;
  *nMaior = v[0].nome;
  for(int i=1;i < T;i++) {
    if(v[i].idade > *iVelho ) {
      *iVelho = v[i].idade;
      *nVelho = v[i].nome;
    }
    if(v[i].salario > *sMaior) {
      *sMaior = v[i].salario;
      *nMaior = v[i].nome;
    }
  }
}

int main() {
  int iVelho;
  string nVelho,nMaior;
  float sMaior;
  Funcionario v[T];
  ler(v);
  results(v,&iVelho,&nVelho,&sMaior,&nMaior);

  cout << "O funcionário mais velho cadastrado é: " << nVelho << " tem " << iVelho << " anos." << endl;
  cout << "O funcionário mais bem remunerado cadastrado é " << nMaior << " com o salario de " << sMaior << endl;
}

