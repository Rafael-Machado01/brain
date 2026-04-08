#include <iostream>
using namespace std;
#define T 3

struct Selecao
{
  int codigo, jogos, vitorias, empates, derrotas, saldo, gols;
  string nome;
};

void ler(Selecao v[])
{
  for (int i = 0; i < T; i++)
  {
    cout << "Digite o id:" << endl;
    cin >> v[i].codigo;
    cout << "Digite o nome:" << endl;
    cin >> v[i].nome;
    v[i].jogos = 0;
    v[i].vitorias = 0;
    v[i].empates = 0;
    v[i].derrotas = 0;
    v[i].saldo = 0;
    v[i].gols = 0;
  }
}

void partida(Selecao v[], int x, int xGols, int y, int yGols)
{
  int iX = 0, iY = 0;
  for (int i = 0; i < T; i++)
  {
    if (x == v[i].codigo)
    {
      iX = i;
    }
    if (y == v[i].codigo)
    {
      iY = i;
    }
  }
  if (xGols > yGols)
  {
    v[iX].vitorias++;
    v[iY].derrotas++;
  }
  else if (yGols > xGols)
  {
    v[iY].vitorias++;
    v[iX].derrotas++;
  }
  else
  {
    v[iX].empates++;
    v[iY].empates++;
  }
  v[iX].gols += xGols;
  v[iY].gols += yGols;
  v[iX].saldo += xGols;
  v[iX].saldo -= yGols;
  v[iY].saldo += yGols;
  v[iY].saldo -= xGols;
  v[iX].jogos++;
  v[iY].jogos++;
}

void quests(Selecao v[], int p[], string *pMaior, string *mSaldo, int *total)
{
  int Maior = 0, Saldo = 0;
  for (int i = 0; i < T; i++)
  {
    *total += v[i].gols;
    p[i] += v[i].vitorias * 3;
    p[i] += v[i].empates;
  }
  for (int i = 0; i < T; i++)
  {
    if (p[i] > Maior)
    {
      *pMaior = v[i].nome;
    }
    if (v[i].saldo > Saldo)
    {
      *mSaldo = v[i].nome;
    }
  }
}

int main()
{
  Selecao v[T];
  int p[T] = {0}, total = 0;
  string pMaior, mSaldo;
  ler(v);
  int x, xGols, y, yGols;
  cout << "Digite o código da seleção X:" << endl;
  cin >> x;
  cout << "Digite a quantidades de Gols da seleção X: " << endl;
  cin >> xGols;
  cout << "Digite o código da seleção Y:" << endl;
  cin >> y;
  cout << "Digite a quantidades de Gols da seleção Y:" << endl;
  cin >> yGols;
  partida(v, x, xGols, y, yGols);
  quests(v, p, &pMaior, &mSaldo, &total);
  cout << "Seleção com mais pontos é : " << pMaior << endl;
  cout << "Seleção com melhor saldo de gols é:" << mSaldo << endl;
  cout << "Total de gols marcados é " << total;
}
