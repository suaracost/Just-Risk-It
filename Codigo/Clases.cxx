#include "Clases.h"

#include <iostream>

// cosas que se necesitan para cambiar el color del texto
#define reset "\033[0m"
#define blue "\033[34m" 
#define red "\033[31m" 
#define green "\033[32m" 
#define yellow "\033[33m" 
#define magenta "\033[35m"
#define cyan "\033[36m"

Carta::Carta(std::string nombre, std::string tipo, std::string descri)
{
  nombreCarta = nombre;
  tipoCarta = tipo;
  descripcion = descri;
}

Territorio::Territorio(std::string nombreTer)
{
  nombreTerritorio = nombreTer;
  tomado = false;
}

Continente::Continente(std::string nombreCon) : territoriosC()
{
  nombreContinente = nombreCon;

  //Nombre de todos los territorios
  std::string ADN[9] = {"Alaska","Alberta","America Central","Estados Unidos Orientales","Groenlandia","Territorio Noroccidental","Ontario","Quebec","Estados Unidos Occidentales"};
  std::string ADS[4] = {"Argentina","Brasil","Peru","Venezuela"};
  std::string  EU[7] = {"Gran Bretana","Islandia","Europa del Norte","Escandinavia","Europa del Sur","Ucrania","Europa Occidental"};
  std::string  AF[6] = {"Congo","Africa Oriental","Egipto","Madagascar","Africa del Norte","Africa del Sur"};
  std::string  AS[12] = {"Afghanistan","China","India","Irkutsk","Japon","Kamchatka","Medio Oriente","Mongolia","Siam","Siberia","Ural","Yakutsk"};
  std::string  AST[4] = {"Australia Oriental","Indonesia","Nueva Guinea","Australia Occidental"};
  
    if (nombreContinente.compare("America Del Norte") == 0) //se asigna el territorio correspondiente a cada continente
    {
      for (int i = 0; i < 9; i++)
      {
        Territorio aux = Territorio(ADN[i]);
        territoriosC.push_back(aux);
      }    
    }
      
    else if (nombreContinente.compare("America Del Sur") == 0)
    {
      for (int i = 0; i < 4; i++)
      {
        Territorio aux = Territorio(ADS[i]);
        territoriosC.push_back(aux);
      } 
    }
      
    else if (nombreContinente.compare("Europa") == 0)
    {
      for (int i = 0; i < 7; i++)
      {
        Territorio aux = Territorio(EU[i]);
        territoriosC.push_back(aux);
      } 
    }

    else if (nombreContinente.compare("Africa") == 0)
    {
      for (int i = 0; i < 6; i++)
      {
        Territorio aux = Territorio(AF[i]);
        territoriosC.push_back(aux);
      } 
    }
      
    else if (nombreContinente.compare("Asia") == 0)
    {
      for (int i = 0; i < 12; i++)
      {
        Territorio aux = Territorio(AS[i]);
        territoriosC.push_back(aux);
      } 
    }
      
    else if (nombreContinente.compare("Australia") == 0)
    {
      for (int i = 0; i < 4; i++)
      {
        Territorio aux = Territorio(AST[i]);
        territoriosC.push_back(aux);
      }
    }
  
}

Jugador::Jugador(std::string nombreJug, std::string colorJug, int cantiTrop) : territoriosPropios(), cartasPropias() 
{
  nombreJugador = nombreJug;
  colorJugador = colorJug;
  cantiTropas = cantiTrop;
}

Partida::Partida(int idP) : jugadoresP(), cartasP(), turnos()
{
  idPartida = idP;

  contiP[0] = new Continente("America Del Norte"); //llenar el arreglo con los continentes 
  contiP[1] = new Continente("America Del Sur");
  contiP[2] = new Continente("Europa");
  contiP[3] = new Continente("Africa");
  contiP[4] = new Continente("Asia");
  contiP[5] = new Continente("Australia");

  int num, numTrop;
  
  do
  {
  std::cout<<"\nIngrese la cantidad de jugadores: ";
  std::cin>>num;
  } while (num < 3 || num > 6);

  if (num == 3)
  {
    numTrop = 35;
  }
  else if (num == 4)
  {
    numTrop = 30;
  }
  else if (num == 5)
  {
    numTrop = 25;
  }
  else if (num == 6)
  {
    numTrop = 20;
  }

  for (int i=0; i<num; i++)
  {
    std::string nom;
    std::cout<<"\nIngrese el nombre del jugador: ";
    std::cin>>nom;

    std::string color;
    if (i == 0)
    {
      color = "azul";
      std::cout<<blue<<"Jugador "<<i<<" : "<<nom<<reset<<"\n";
    }

    else if (i == 1)
    {
      color = "rojo";
      std::cout<<red<<"Jugador "<<i<<" : "<<nom<<reset<<"\n";
    }

    else if (i == 2)
    {
      color = "verde";
      std::cout<<green<<"Jugador "<<i<<" : "<<nom<<reset<<"\n";
    }

    else if (i == 3)
    {
      color = "amarillo";
      std::cout<<yellow<<"Jugador "<<i<<" : "<<nom<<reset<<"\n";
    }

    else if (i == 4)
    {
      color = "magenta";
      std::cout<<magenta<<"Jugador "<<i<<" : "<<nom<<reset<<"\n";
    }

    else if (i == 5)
    {
      color = "cyan";
      std::cout<<cyan<<nom<<"Jugador "<<i<<" : "<<reset<<"\n";
    }
    
    Jugador j = Jugador(nom, color, numTrop);

    jugadoresP.push_back(j); // se crea la lista de jugadores

    turnos.push(nom); // se va creando la cola
  }

  //elegir territorios

  int aux = 0;
  while (aux <42)
  {
    bool puede = false, enc = false;
    std::list<Jugador>::iterator miIt;
    for (miIt = jugadoresP.begin(); miIt != jugadoresP.end(); miIt++)
    {
      if(turnos.front() == miIt->nombreJugador)
      {
        while(puede == false)
        {
          std::system("clear");
          
          mostrarTerritoriosDisponibles();
          
          std::string sele;
          
          std::cout<<"\nEs el turno de "<<miIt->nombreJugador<<" para elegir territorio\n";
          std::cout<<"\nQue territorio desea elegir? ";
          std::cin>>sele;

          std::list<Territorio>::iterator miIt2;
          for(int i=0; i<6; i++)
          {
            for (miIt2 = contiP[i]->territoriosC.begin(); miIt2 != contiP[i]->territoriosC.end(); miIt2++)
            {
              if(sele.compare(miIt2->nombreTerritorio) == 0 && miIt2->tomado == false)
              {
                miIt2->tomado = true;
                miIt2->numTropas = 1;
                miIt->cantiTropas = miIt->cantiTropas - 1; 
                miIt->territoriosPropios.push_back(*miIt2);
                puede = true;
                enc = true;
                std::cout<<"El territorio "<<sele<<" es de "<<miIt->nombreJugador<<"\n";

              }
              else if (sele.compare(miIt2->nombreTerritorio) == 0 && miIt2->tomado == true)
              {
                std::cout<<"\nEl territorio "<<sele<<" ya fue selecionado por otro jugador";
                enc = true;
              }
            }
          }

          if (enc == false)
          {
            std::cout<<"\nNo se pudo encontrar el territorio "<<sele<<"\n";
          } 
        }
      }
    }

    std::string turn = turnos.front();
    turnos.pop();
    turnos.push(turn);
  }
}

void Partida::mostrarTerritoriosDisponibles()
{
  Continente* aux[6];
  for(int i=0; i<6; i++)
  {
    aux[i] = contiP[i];
  }

  std::cout<<"Estos son los territorios disponibles:\n";
   for(int i=0; i<6; i++)
  {
    std::cout<<"\n"<<contiP[i]->nombreContinente<<":\n";
    int conta = 1;
    std::list<Territorio>::iterator miIt;
    for (miIt = contiP[i]->territoriosC.begin(); miIt != contiP[i]->territoriosC.end(); miIt++)
    {
      if(miIt->tomado == false)
      {
        std::cout<<conta<<". "<<miIt->nombreTerritorio<<"\n";
        conta++;
      }
    }
  }
}