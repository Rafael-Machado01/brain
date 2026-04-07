// Crie um sistema escolar. Deve conter alunos e livros da biblioeteca.
// Aluno é composto por RA Nome 4notas livro frequencia.
// Livro é composto por Código Título Autor e qtde disponiveis.
// Funções: ler media imprimir emprestar e devolver
// Regras para emprestar :
// - Verificar se aluno e livro existe. Alunos que reprovaram não é liberado pegar livros.
// - Vereficar se há copías disponiveis e se aluno já tem livro emprestado.
// - Dimunir numero de copia e salvar no aluno qual livro emprestou.
// Regras de devolver:
// - Vereficar se o aluno tem livro emprestado.
// Quests:
// - Nome do aluno com maior média.
// - Nome do aluno com menor média.
// - Nome do aluno com maior frequência.
// - Livro com maior número de cópias.
// - Livro com menor número de cópias.
// - Total de cópias na biblioteca.

#include <iostream>
using namespace std;
#define T 5
struct Aluno
{
  int ra;
  string nome;
  float n1, n2, n3, n4, media, freq;
};

struct Livro
{
  int cod, und;
  string titulo, autor;
};

void registroAluno(Aluno a[]);
void registroLivro(Livro l[]);
void imprimirAluno(Aluno a[]);
void emprestar(Aluno a[], Livro l[]);

int main()
{
  Aluno a[T];
  Livro l[T];
  registroAluno(a);
  registroLivro(l);
  imprimirAluno(a);
  emprestar(a, l);
}

void registroAluno(Aluno a[])
{
  for (int i = 0; i < T; i++)
  {
    cout << "Registro de Alunos - FEMA" << endl;

    cout << "Digite o RA do Aluno: " << endl;
    cin >> a[i].ra;

    cout << "Digite o Nome do Aluno: " << endl;
    cin.ignore();
    getline(cin, a[i].nome);

    cout << "Digite a Nota do primeiro bimestre: " << endl;
    cin >> a[i].n1;

    cout << "Digite a Nota do segundo bimestre: " << endl;
    cin >> a[i].n2;

    cout << "Digite a Nota do terceiro bimestre: " << endl;
    cin >> a[i].n3;

    cout << "Digite a Nota do quarto bimestre: " << endl;
    cin >> a[i].n4;

    cout << "Digite o indice de frequencia: " << endl;
    cin >> a[i].freq;

    a[i].media = (a[i].n1 + a[i].n2 + a[i].n3 + a[i].n4) / 4;
  }
}

void registroLivro(Livro l[])
{
  for (int i = 0; i < T; i++)
  {
    cout << "Registro de Livros - FEMA" << endl;

    cout << "Digite o código do Livro: " << endl;
    cin >> l[i].cod;

    cout << "Digite o Título do Livro: " << endl;
    cin.ignore();
    getline(cin, l[i].titulo);

    cout << "Digite o Nome do Autor do Livro:" << endl;
    cin.ignore();
    getline(cin, l[i].autor);

    cout << "Digite a Quantidade de Unidades Disponíveis: " << endl;
    cin >> l[i].und;
  }
}

void imprimirAluno(Aluno a[])
{
  cout << "Alunos Cadastrados - FEMA " << endl;
  for (int i = 0; i < T; i++)
  {
    cout << "RA: " << a[i].ra << endl;
    cout << "Nome: " << a[i].nome << endl;
    cout << "Nota do Primeiro bimestre: " << a[i].n1 << endl;
    cout << "Nota do Segundo bimestre: " << a[i].n2 << endl;
    cout << "Nota do Terceiro bimestre: " << a[i].n3 << endl;
    cout << "Nota do Quarto bimestre: " << a[i].n4 << endl;
    cout << "Indice de Frequencia: " << a[i].freq << endl;
  }
}

void imprimirLivro(Livro l[])
{
  cout << "Livros Cadastrados - FEMA" << endl;
  for (int i = 0; i < T; i++)
  {
    cout << "Código do Livro: " << l[i].cod << endl;
    cout << "Título do Livro: " << l[i].titulo << endl;
    cout << "Autor do Livro: " << l[i].autor << endl;
    cout << "Quantidade de Unidades disponíveis: " << l[i].und << endl;
  }
}

void emprestar(Aluno a[], Livro l[])
{
}