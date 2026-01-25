// Desafio: Ser um "terminal" de fila de espera de algum estabelecimento.
// Por exemplo no menu podemos gerar nossa senha e ver qual foi a ultima senha chamada.
// Podemos também chamar a proxima senha.
// Sem limite de senhas. E em vez de números vamos chamar por nome.
// Podemos cancelar senhas caso há desistências.
// Buscar posição na fila.
// Limpar a fila.
// Fila preferencial e fila normal.
// Na função buscar e na ver a ultima senha chamada mostrar quanto tempo foi de espera ou está esperando.
// Após usar  a função de limpar vamos vemos o total a atendido e o tempo média de espera. (Gerar um .txt de relatório)


#include <iostream>
using namespace std;

char menu() {
  system("clear");
  cout << "\t\t Veyra - Fila de espera";
  cout << "\n\n\t\t Última senha chamada :"
  cout << "\n\n\t\t Opções":
  cout << "\n\n\t\t 1 - Pegue sua senha"
  cout << "\n\n\t\t 2 - Chamar senha"
  cout << "\n\n\t\t 3 - Cancelar senha"
  cout << "\n\n\t\t 4 - Busca de senha"
  cout << "\n\n\t\t 5 - Limpar a fila"
  char op;
  cin >> op;
  return toupper(op);
}

int main(){
  int sair = 0;
    while (sair == 0) {
        char op == menu();
          switch (op) {
            case '1': {
              newPass();
              break;
            };
            case '2': {
              nextPass();
              break;
            };
            case '3': {
              cancelPass();
              break;
            };
            case '4': {
              searchPass();
              break;
            };
            case '5': {
              resetQueue();
              break;
            };
            default: {
              cout << "\n\n\t\t Opção Inválida";
              system("pause");
              break;
            }
          }
    }
}