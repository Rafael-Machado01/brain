#include <iostream>
using namespace std;

#include "./Pais.h"

int main()
{
  Pais brasil(1, "Brasil");
  Atleta at(1, "Rafael", 18, 70, brasil);
}