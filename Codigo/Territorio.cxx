#include "Territorio.h"

#include <iostream>

Territorio::Territorio(std::string nombreTer)
{
  nombreTerritorio = nombreTer;
  numTropas = 0;
  tomado = false;
}

Territorio::Territorio(std::string nombreTer, std::string duenioTer, int numTropasTer, bool tomadoTer)
{
  nombreTerritorio = nombreTer;
  duenio = duenioTer;
  numTropas = numTropasTer;
  tomado = tomadoTer;
}