// Biblioteca - livro deverá ter: código, título, autor, copias.
//  Função para ler.
// Função para emprestimo do livro, conforme a rotina:
// - Usuário informa o código do livro.
// - Código irá para uma função para vereficar se existe cópia disponivel.
// - Em caso positivo, retire-se uma cópia disponível.

// Função que verifica :
// - Livro com mais cópias disponíveis.
// Total de cópias disponiveis na biblioteca.

#include <iostream>
using namespace std;

#define T 2

struct Livro
{
  int codigo, copias;
  string titulo, autor;
};
void ler(Livro v[])
{
  for (int i = 0; i < T; i++)
  {
    cout << "Digite o Código do Livro: " << endl;
    cin >> v[i].codigo;
    cout << "Digite o Título do Livro: " << endl;
    cin.ignore();
    getline(cin, v[i].titulo);
    cout << "Digite o Nome do Autor do Livro: " << endl;
    getline(cin, v[i].autor);
    cout << "Digite a quantidades de Cópias disponíveis: " << endl;
    cin >> v[i].copias;
  }
}

void emprest(Livro v[], int x)
{
  if (v[x].copias >= 1)
  {
    cout << "Emprestado!" << endl;
    v[x].copias = v[x].copias - 1;
  }
  else
  {
    cout << "Livro não disponível." << endl;
  }
}

void quests(Livro v[], int *total, int *idmenor)
{
  *total = 0;
  *idmenor = 0;
  int mais = v[0].copias;
  for (int i = 0; i < T; i++)
  {
    *total += v[i].copias;
    if (v[i].copias > mais)
    {
      *idmenor = i;
    }
  }
}
int main()
{
  Livro v[T];
  int x = 0, idmenor, total;
  ler(v);
  cout << "Digite o código do Livro: " << endl;
  cin >> x;
  emprest(v, x);
  quests(v, &idmenor, &total);
  cout << "O livro com menor números de cópias é " << v[idmenor].titulo << "Com " << v[idmenor].copias << " copias " << endl;
  cout << "O total de cópias disponíveis é " << total;
}
