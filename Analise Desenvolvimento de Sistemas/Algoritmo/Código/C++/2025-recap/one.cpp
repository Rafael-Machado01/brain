// Menu 
// 1 - Cadastrar usuário
// 2 - Listar usuários
// 3 - Buscar usuário por nome
// 4 - Remover usuário
// 5 - Sair

// Salvar usuários em um .txt
// Ordene a lista por ordem alfabética.
// Não permita nomes vazios.

#include <iostream>
using namespace std;

#define T 3 // Definindo 3 usuários

struct user{
  string name;
  int age;
}; // Definindo a estrutura do usuário

user v[T];
void set();
void list();

int main() {
  set();
  list();
}

void set() {
  for(int i=0; i < T; i++) {
    cout << "Digite o nome do usuário."
    cin >> v[i].name;
    cout << "Digite a idade do usuário."
    cin >> v[i].age;
  }
}

void list() {
  for(int i=0; i < T; i++) {
      cout << "Usuário " << i+1 << endl;
      cout << v[i].name << " Tem " << v[i].age << " anos." << endl;
    }
}
 