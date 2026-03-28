#include <iostream>
#include <string>
using namespace std;

#include "./TipoImovel.h"
#include "./Imovel.h"
#include "./Profissao.h"
#include "./Locador.h"
#include "./Locacao.h"

int main()
{
    TipoImovel tip0;            // Construtor padrão
    TipoImovel tip1(1, "Casa"); // Parametrizado

    Imovel imo0;
    Imovel imo1(1, tip1, "Tres de Maio", "Vila Ribeiro", "Assis", true);
    imo1.imprimir();

    Profissao pro(1, "Bombeiro");
    Locador loc(1, "Rafael", pro, "Assis", "São Paulo", 18, 10000);
    loc.imprimir();

    Locacao loca(1, "24-03-2025", 500000, imo1, loc);
    loca.imprimir();
}