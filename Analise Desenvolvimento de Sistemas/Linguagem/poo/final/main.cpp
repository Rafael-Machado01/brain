#include <iostream>
using namespace std;

#include "./Pais.h"
#include "Atleta.h"
#include "Competicao.h"
#include "Modalidade.h"
#include "Participacao.h"
int main()
{
  Pais brasil(1, "Brasil");
  Atleta at(1, "Rafael", 18, 70, brasil);
  Competicao olimp(1, "Jogos do Brasil", "São Paulo", "2024", "2025");
  Modalidade mod(1, "Corrida", olimp);
  Participacao p(1, at, mod, "2025", 1, 100);
  p.imprimir();
  at.imprimir();
}