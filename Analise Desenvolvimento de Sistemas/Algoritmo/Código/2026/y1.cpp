// Escreva um programa que gerencia uma lista de alunos.
// Aluno: RA Nome Quatro notas bimestrais, e frequencia.
// Outra função deverá calcular e retornar média final para função main()
// Outra função retorna para o main : o Nome e média do aluno com maior média da turma e do menor. E com o maior índice de frequencia.

#include <iostream>
using namespace std;
#define T 2

struct Aluno
{
  int ra;
  string nome;
  float n1;
  float n2;
  float n3;
  float n4;
  int freq;
};

void read(Aluno v[])
{
  for (int i = 0; i < T; i++)
  {
    cout << "Digite o RA:" << endl;
    cin >> v[i].ra;
    cout << "Digite o Nome:" << endl;
    cin.ignore();
    getline(cin, v[i].nome);
    cout << "Digite a Nota do Primeiro Semestre: " << endl;
    cin >> v[i].n1;
    cout << "Digite a Nota do Segundo Semestre: " << endl;
    cin >> v[i].n2;
    cout << "Digite a Nota do Terceiro Semestre: " << endl;
    cin >> v[i].n3;
    cout << "Digite a Nota do Quatro Semestre: " << endl;
    cin >> v[i].n4;
    cout << "Digite o a frequencia: " << endl;
    cin >> v[i].freq;
  }
}

void average(Aluno v[], float m[])
{
  float x = 0;
  for (int i = 0; i < T; i++)
  {
    x = (v[i].n1 + v[i].n2 + v[i].n3 + v[i].n4) / 4;
    m[i] = x;
  }
}

void quests(Aluno v[], float m[], string *nMaior, string *nMenor, string *nIndice, int *mFreq, float *maior, float *menor)
{
  *maior = m[0],
  *menor = m[0];
  *mFreq = v[0].freq;
  *nMaior = v[0].nome;
  *nMenor = v[0].nome;
  *nIndice = v[0].nome;

  for (int i = 0; i < T; i++)
  {
    if (m[i] > *maior)
    {
      *maior = m[i];
      *nMaior = v[i].nome;
    }
    if (m[i] < *menor)
    {
      *menor = m[i];
      *nMenor = v[i].nome;
    }
    if (v[i].freq > *mFreq)
    {
      *mFreq = v[i].freq;
      *nIndice = v[i].nome;
    }
  }
}

int main()
{
  Aluno v[T];
  float m[T];
  string nMaior, nMenor, nIndice;
  int mFreq;
  float maior, menor;
  read(v);
  average(v, m);
  for (int i = 0; i < T; i++)
  {
    cout << "A média do Aluno " << i + 1 << " é " << m[i] << endl;
  }
  quests(v, m, &nMaior, &nMenor, &nIndice, &mFreq, &maior, &menor);
  cout << "O Aluno com a maior média é: " << nMaior << " Com a média de " << maior << endl;
  cout << "O Aluno com a menor média é: " << nMenor << " Com a média de " << menor << endl;
  cout << "O Aluno com mais frequencia é: " << nIndice << "Com a frequencia de " << mFreq << endl;
}
