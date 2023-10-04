#include "Partida.h"

#include <iostream>

// cosas que se necesitan para cambiar el color del texto
#define reset "\033[0m"
#define blue "\033[34m" 
#define red "\033[31m" 
#define green "\033[32m" 
#define yellow "\033[33m" 
#define magenta "\033[35m"
#define cyan "\033[36m"

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

  std::system("clear");
  
  //while(aux < 42) 
  // 
  while(aux < 6)
  {
    bool puede = false, enc = false;
    std::list<Jugador>::iterator miIt;
    
    for (miIt = jugadoresP.begin(); miIt != jugadoresP.end(); miIt++)
    {      
      if(turnos.front() == miIt->nombreJugador)
      {        
        while(puede == false)
        {          
          mostrarTerritoriosDisponibles();
          
          std::string sele, aux2 = miIt->colorJugador;

          if(aux2.compare("azul") == 0)
          {
            std::cout<<blue;
          }
          else if(aux2.compare("rojo") == 0)
          {
            std::cout<<red;
          }
          else if(aux2.compare("verde") == 0)
          {
            std::cout<<green;
          }
          else if(aux2.compare("amarillo") == 0)
          {
            std::cout<<yellow;
          }
          else if(aux2.compare("magenta") == 0)
          {
            std::cout<<magenta;
          }
          else if(aux2.compare("cyan") == 0)
          {
            std::cout<<cyan;
          }

          std::cout<<"\nEs el turno de "<<miIt->nombreJugador<<" para elegir territorio\n";
          std::cout<<"\nQue territorio desea elegir? "<<reset;
          std::getline(std::cin, sele);

          std::system("clear");
          
          std::list<Territorio>::iterator miIt2;
          for(int i=0; i<6; i++)
          {
            for (miIt2 = contiP[i]->territoriosC.begin(); miIt2 != contiP[i]->territoriosC.end(); miIt2++)
            {
              if(sele.compare(miIt2->nombreTerritorio) == 0 && miIt2->tomado == false)
              {
                miIt2->tomado = true;
                miIt2->numTropas = 1;
                miIt2->duenio = miIt->nombreJugador;
                int canti = miIt->cantiTropas;
                miIt->cantiTropas = canti - 1; 
                puede = true;
                enc = true;

                std::cout<<"El territorio "<<sele<<" es de "<<miIt->nombreJugador<<"\n";

              }
              else if (sele.compare(miIt2->nombreTerritorio) == 0 && miIt2->tomado == true)
              {
                std::cout<<"El territorio "<<sele<<" ya fue selecionado por "<<miIt2->duenio<<"\n\n";
                enc = true;
              }
            }
          }
          
          if (aux == 0)
          {

          }
          else if (enc == false)
          {
            std::cout<<"No se pudo encontrar el territorio "<<sele<<"\n\n";
          } 
        }
      }
    }

    std::string turn = turnos.front();
    turnos.pop();
    turnos.push(turn);
    aux++;
  }

  bool finito = false;
  int conta = 0, auxi = 0;
  std::string sele2;

  //while(finito == false) 
  // 
  while(auxi < 6)
  {
    std::list<Jugador>::iterator miIt3;

    for (miIt3 = jugadoresP.begin(); miIt3 != jugadoresP.end(); miIt3++)
    { 
      if(turnos.front() == miIt3->nombreJugador)
      { 
        if(miIt3->cantiTropas > 0)
        {
          std::string manda = miIt3->nombreJugador;
          mostrarTerritoriosPropios(manda);
          
          bool puede2 = false;

          while(puede2 == false)
          {
            std::cout<<"\nEs el turno de "<<miIt3->nombreJugador<<" para asignar mas tropas\n";
            std::cout<<"\nQue territorio desea elegir? ";
            std::getline(std::cin, sele2);
            
            std::list<Territorio>::iterator miIt4;
            for(int i=0; i<6; i++)
            {
              for (miIt4 = contiP[i]->territoriosC.begin(); miIt4 != contiP[i]->territoriosC.end(); miIt4++)
              {
                if(sele2.compare(miIt4->nombreTerritorio) == 0 && miIt4->duenio ==  miIt3->nombreJugador)
                {
                  bool puede3 = false;
                  while (puede3 == false)
                  { 
                    int mandar;
                    std::cout<<"\nCuantas tropas quiere agregar? (tiene "<<miIt3->cantiTropas<<" tropas) ";
                    std::cin>>mandar;
                    if (mandar <= miIt3->cantiTropas)
                    { 
                      int nueva = miIt4->numTropas;
                      miIt4->numTropas = nueva + mandar;

                      int canti = miIt3->cantiTropas;
                      miIt3->cantiTropas = canti - mandar;

                      puede3=true;
                    }
                    else
                    {
                      std::cout<<"\nNo tiene suficientes tropas\n";
                    }
                  }
                  puede2 = true;
                  auxi++;

                  std::system("clear");
                  std::cout<<"El territorio "<<sele2<<" de "<<miIt3->nombreJugador<<" ahora tiene "<<miIt4->numTropas<<" tropas\n";
                }
                else
                {
                  
                }
              }
            }

            if(puede2 == false)
              std::cout<<"El territorio "<<sele2<<" no existe o no es tuyo\n";
          }
        }
        else
        {
          std::cout<<"\nEl jugador "<<miIt3->nombreJugador<<" ya no tiene mas tropas\n";
          auxi++;
          conta++;
        }
      }
    }
    std::string turn = turnos.front();
    turnos.pop();
    turnos.push(turn);

    if (conta == num)
      finito = true;
  }
}

Partida::Partida()
{
  //constructor vacio
}

void Partida::mostrarTerritoriosDisponibles()
{
  std::cout<<"\nEstos son los territorios disponibles:\n";
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

void Partida::mostrarTerritoriosPropios(std::string jug)
{
  std::cout<<"\nEstos son los territorios de: "<<jug<<"\n";
  
  for(int i=0; i<6; i++)
  {
    std::cout<<"\n"<<contiP[i]->nombreContinente<<":\n";
    int conta = 1;
    std::list<Territorio>::iterator miIt;
    for (miIt = contiP[i]->territoriosC.begin(); miIt != contiP[i]->territoriosC.end(); miIt++)
    {
      if(jug.compare(miIt->duenio) == 0)
      {
        std::cout<<conta<<". "<<miIt->nombreTerritorio<<"\t-->\tTropas: "<<miIt->numTropas<<"\n";
        conta++;
      }
    }
  }
}

void Partida::mostrarTerritoriosEnemigos(std::string jug)
{
  std::cout<<"\nEstos son los territorios de los enemigos de: "<<jug<<"\n";
  
  for(int i=0; i<6; i++)
  {
    std::cout<<"\n"<<contiP[i]->nombreContinente<<":\n";
    int conta = 1;
    std::list<Territorio>::iterator miIt;
    for (miIt = contiP[i]->territoriosC.begin(); miIt != contiP[i]->territoriosC.end(); miIt++)
    {
      if(jug.compare(miIt->duenio) != 0)
      {
        std::cout<<conta<<". "<<miIt->nombreTerritorio<<"\t-->\tTropas: "<<miIt->numTropas<<"\n";
        conta++;
      }
    }
  }
}

void Partida::turno()
{
  nuevasTropas();
  
  std::string deci;
  bool sigue = false;

  while(sigue == false)
  {
    std::cout<<"\nDesea atacar? (si o no) ";
    std::cin>>deci;

    if(deci.compare("si") == 0)
    {
      atacar();
      sigue = true;
    }
    else if (deci.compare("no") == 0)
    {
      sigue = true;
    }
    else
      std::cout<<"\nRespuesta no reconocida, intente nuevamente\n";
  }

  fortificar();

  std::string turn = turnos.front();
  turnos.pop();

  int conta = 0;

  for(int i=0; i<6; i++)
  {
    std::list<Territorio>::iterator miIt;
    for (miIt = contiP[i]->territoriosC.begin(); miIt != contiP[i]->territoriosC.end(); miIt++)
    {
      if(turn.compare(miIt->duenio) == 0)
      {
        conta++;
      }
    }
  }

  if (conta > 0)
    turnos.push(turn);
  else
    std::cout<<"\nEl jugador "<<turn<<" ha sido eliminado\n\n";

  std::string turnSig = turnos.front();

  int conta2 = 0;

  for(int i=0; i<6; i++)
  {
    std::list<Territorio>::iterator miIt2;
    for (miIt2 = contiP[i]->territoriosC.begin(); miIt2 != contiP[i]->territoriosC.end(); miIt2++)
    {
      if(turnSig.compare(miIt2->duenio) == 0)
      {
        conta2++;
      }
    }
  }

  if (conta2 == 0)
  {
    turnos.pop();
    std::cout<<"\nEl jugador "<<turnSig<<" ha sido eliminado\n\n";
  }

}

void Partida::nuevasTropas()
{
  //Calcular nuevas tropas 
  std::string jug = turnos.front();
  int conta = 0, nuevos;

  for(int i=0; i<6; i++)
  {
    std::list<Territorio>::iterator miIt;
    for (miIt = contiP[i]->territoriosC.begin(); miIt != contiP[i]->territoriosC.end(); miIt++)
    {
      if(jug.compare(miIt->duenio) == 0)
      {
        conta++;
      }
    }
  }

  nuevos = conta/3;

  std::cout<<"El jugador "<<jug<<" tiene "<< nuevos<<" nuevas tropas";

  mostrarTerritoriosPropios(jug);
  
  bool puede = false;
  std::string sele;

  //insertar las nuevas tropas
  while (puede == false)
  {
    std::cout<<"\nEn que territorio desea poner mas tropas? ";
    std::getline(std::cin, sele);

    std::list<Territorio>::iterator miIt3;
    for(int i=0; i<6; i++)
    {
      for (miIt3 = contiP[i]->territoriosC.begin(); miIt3 != contiP[i]->territoriosC.end(); miIt3++)
      {
        if(sele.compare(miIt3->nombreTerritorio) == 0 && jug.compare(miIt3->duenio) == 0)
        {
          int aux = miIt3->numTropas;
          aux = aux + nuevos;
          miIt3->numTropas = aux;

          std::system("clear");
          std::cout<<"\nEl territorio "<<sele<<" ahora tiene "<<miIt3->numTropas<<" tropas\n\n";

          puede = true;
        }
        else
        {
          
        }
      }
    }
    if(puede == false)
      std::cout<<"El territorio "<<sele<<" no existe o no es tuyo\n\n";
  }
}

void Partida::atacar()
{
  std::string jug = turnos.front();

  bool puede = false, puede2 = false, cancelar = false;
  std::string sele, sele2;

  mostrarTerritoriosPropios(jug);
  while (puede == false)
  {
    std::cout<<"\nDesde que territorio desea atacar? ";
    std::getline(std::cin, sele);

    std::list<Territorio>::iterator miIt3;
    for(int i=0; i<6; i++)
    {
      for (miIt3 = contiP[i]->territoriosC.begin(); miIt3 != contiP[i]->territoriosC.end(); miIt3++)
      {
        if(sele.compare(miIt3->nombreTerritorio) == 0 && jug.compare(miIt3->duenio) == 0 && miIt3->numTropas > 1)
        {
          std::system("clear");
          std::cout<<"\nEl jugador "<<miIt3->duenio<<" va a atacar desde "<<sele<<"\n\n";

          puede = true;
        }
        else if (sele.compare(miIt3->nombreTerritorio) == 0 && jug.compare(miIt3->duenio) == 0 && miIt3->numTropas < 1)
        {
          std::cout<<"\nEste territorio no puede atacar\n\n";
          cancelar = true;
        }
        else
        {
          
        }
      }
    }
    if(puede == false)
      std::cout<<"El territorio "<<sele<<" no existe o no es tuyo\n\n";
  }

  if(cancelar == true)
  {
    std::cout<<"\nSe ha cancelado el ataque";
  }
  else
  {
    mostrarTerritoriosEnemigos(jug);
    while (puede2 == false)
    {
      std::cout<<"\nQue territorio desea atacar? ";
      std::getline(std::cin, sele2);

      std::list<Territorio>::iterator miIt4;
      for(int i=0; i<6; i++)
      {
        for (miIt4 = contiP[i]->territoriosC.begin(); miIt4 != contiP[i]->territoriosC.end(); miIt4++)
        {
          if(sele2.compare(miIt4->nombreTerritorio) == 0 && jug.compare(miIt4->duenio) != 0)
          {
            std::system("clear");
            std::cout<<"\nEl jugador "<<miIt4->duenio<<" va a atacar "<<sele2<<"\n\n";

            puede2 = true;
          }
          else
          {
            
          }
        }
      }
      if(puede2 == false)
        std::cout<<"El territorio "<<sele2<<" no existe o es tuyo\n\n";
    }

    bool final = false;
    srand(time(0));

    while(final == false)
    {
      int dadoAtq = 1 + std::rand() % 6; // Genera un número entre 1 y 6
      std::cout<<"\nEl atacante saco un: "<<dadoAtq;
      int dadoDef = 1 + std::rand() % 6;
      std::cout<<"\nEl defensor saco un: "<<dadoDef<<"\n\n";

      if (dadoAtq>dadoDef)
      {
        std::list<Territorio>::iterator miIt5;
        for(int i=0; i<6; i++)
        {
          for (miIt5 = contiP[i]->territoriosC.begin(); miIt5 != contiP[i]->territoriosC.end(); miIt5++)
          {
            if(sele2.compare(miIt5->nombreTerritorio) == 0 && jug.compare(miIt5->duenio) != 0)
            {
              int aux = miIt5->numTropas;
              aux = aux - 1;
              miIt5->numTropas = aux;
              if (aux == 0)
              {
                miIt5->duenio = jug;
                miIt5->numTropas = 1;
                std::cout<<"El territorio "<<miIt5->nombreTerritorio<<" ahora es del jugador "<<jug<<"\n\n";
                final = true;
              }
            }
            else
            {
              
            }
          }
        }
      }
      else if (dadoAtq<dadoDef)
      {
        std::list<Territorio>::iterator miIt6;
        for(int i=0; i<6; i++)
        {
          for (miIt6 = contiP[i]->territoriosC.begin(); miIt6 != contiP[i]->territoriosC.end(); miIt6++)
          {
            if(sele.compare(miIt6->nombreTerritorio) == 0 && jug.compare(miIt6->duenio) == 0)
            {
              int aux = miIt6->numTropas;
              aux = aux - 1;
              miIt6->numTropas = aux;
              if (aux == 1)
              {
                std::cout<<"El territorio "<<miIt6->nombreTerritorio<<" ya no puede seguir atacando \n\n";
                final = true;
              }
            }
            else
            {
              
            }
          }
        }
      }
      else if(dadoAtq == dadoDef)
      {
        std::list<Territorio>::iterator miIt7;
        for(int i=0; i<6; i++)
        {
          for (miIt7 = contiP[i]->territoriosC.begin(); miIt7 != contiP[i]->territoriosC.end(); miIt7++)
          {
            if(sele.compare(miIt7->nombreTerritorio) == 0 && jug.compare(miIt7->duenio) == 0)
            {
              int aux = miIt7->numTropas;
              aux = aux - 1;
              miIt7->numTropas = aux;
              if (aux == 1)
              {
                std::cout<<"El territorio "<<miIt7->nombreTerritorio<<" ya no puede seguir atacando \n\n";
                final = true;
              }
            }
            else
            {
              
            }
          }
        }
      }

      std::string deci2;
      bool sigue2 = false;

      while(sigue2 == false)
      {
        std::cout<<"\nDesea terminar el ataque? (si o no) ";
        std::cin>>deci2;

        if(deci2.compare("si") == 0)
        {
          final = true;
          sigue2 = true;
        }
        else if (deci2.compare("no") == 0)
        {
          // revisar que le quedan mas de 1 tropas
          sigue2 = true;
        }
        else
          std::cout<<"\nRespuesta no reconocida, intente nuevamente\n";
      }
    }
  }
}

void Partida::fortificar()
{
  std::string jug = turnos.front();

  bool puede = false, puede2 = false;
  std::string sele, sele2;

  mostrarTerritoriosPropios(jug);
  while (puede == false)
  {
    std::cout<<"\nDesde que territorio desea Fortificar? ";
    std::getline(std::cin, sele);

    std::list<Territorio>::iterator miIt;
    for(int i=0; i<6; i++)
    {
      for (miIt = contiP[i]->territoriosC.begin(); miIt != contiP[i]->territoriosC.end(); miIt++)
      {
        if(sele.compare(miIt->nombreTerritorio) == 0 && jug.compare(miIt->duenio) == 0 && miIt->numTropas > 1)
        {
          std::system("clear");
          std::cout<<"\nEl jugador "<<miIt->duenio<<" va a Fortificar desde "<<sele<<"\n\n";

          puede = true;
        }
        else
        {
          
        }
      }
    }
    if(puede == false)
      std::cout<<"El territorio "<<sele<<" no existe o no es tuyo\n\n";
  }
  
  while (puede2 == false)
  {
    std::cout<<"\nQue territorio desea Fortificar? ";
    std::getline(std::cin, sele2);

    std::list<Territorio>::iterator miIt2;
    for(int i=0; i<6; i++)
    {
      for (miIt2 = contiP[i]->territoriosC.begin(); miIt2 != contiP[i]->territoriosC.end(); miIt2++)
      {
        if(sele2.compare(miIt2->nombreTerritorio) == 0 && jug.compare(miIt2->duenio) == 0)
        {
          std::system("clear");
          std::cout<<"\nEl jugador "<<miIt2->duenio<<" va a fortificar "<<sele2<<"\n\n";
          puede2 = true;
        }
        else
        {
          
        }
      }
    }
    if(puede2 == false)
      std::cout<<"El territorio "<<sele2<<" no existe o es tuyo\n\n";
  }

  // 

  bool puede3 = false;
  int trop;
  
  while (puede3 == false)
  {
    std::cout<<"\nCuantas tropas desea mandar? ";
    std::cin>>trop;

    std::list<Territorio>::iterator miIt3;
    for(int i=0; i<6; i++)
    {
      for (miIt3 = contiP[i]->territoriosC.begin(); miIt3 != contiP[i]->territoriosC.end(); miIt3++)
      {
        if(sele.compare(miIt3->nombreTerritorio) == 0 && trop < miIt3->numTropas)
        {
          std::list<Territorio>::iterator miIt4;
          for(int i=0; i<6; i++)
          {
            for (miIt4 = contiP[i]->territoriosC.begin(); miIt4 != contiP[i]->territoriosC.end(); miIt4++)
            {
              if(sele2.compare(miIt4->nombreTerritorio) == 0)
              {
                int quita = miIt3->numTropas;
                quita = quita - trop;
                miIt3->numTropas = quita;

                int da = miIt4->numTropas;
                da = da + trop;
                miIt4->numTropas = da;

                puede3 = true;

                std::cout<<"\nEl territorio "<<miIt3->nombreTerritorio<<" quedo con "<<miIt3->numTropas<<" tropas";
                std::cout<<"\nEl territorio "<<miIt4->nombreTerritorio<<" quedo con "<<miIt4->numTropas<<" tropas";
              }
            }
          }   
        }
        else
        {
          std::cout<<"\nNo se han podido enviar tropas, intente nuevamente\n\n";
        }
      }
    }
  }
}
