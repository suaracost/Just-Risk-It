#include "Menu.h"

#include <iostream>
#include <fstream>

// cosas que se necesitan para cambiar el color del texto
#define reset "\033[0m"
#define blue "\033[34m" 
#define red "\033[31m" 
#define green "\033[32m" 
#define yellow "\033[33m" 
#define magenta "\033[35m"
#define cyan "\033[36m"

void Menu::mapamundi()
{

  // Diseño de un mapa del mundo para portada
  
  std::cout<<"\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
      std::cout<<blue<<"\n Hecho por Alejandro Suarez y Nicolas Quintana"<<reset;  
  std::cout<<"\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
  std::cout<<yellow<<"\n                                                                                  RISK\n"<<reset;
  
  std::cout<<green<<"\n\t                                    %/ .&%&&&#/**&&&&%&&%&&&&&&%(          .%%(.                       ** *.\t";
  std::cout<<"\n\t                        *&&&. #  #&%%%#%&%        &&&&&&&&&&%&*                           %/       *%&&&&&&&&&%&%%/(%(    /,\t";
  std::cout<<"\n\t     .&&&&&&&&&&&&&&&&&&&%&&&&(*%&&&((&.*.#&%,    *&&&&&&&#/*               *%&&&&%&&%/.%(*%(%%&&&&%/&&&&&&&&&&&&&&&&&&&%%&&&&&&&&&&%&&&&&&&%%/.\t";
  std::cout<<"\n\t  *(&&&&&%&&&&&&&&&&&&&%&%&&&&&&%(** *   #%(      &&%/        ,/.         (&&&#.%&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&%&&&&&&&( .\t";
  std::cout<<"\n\t #%&/.     %&&&&&&&&&&&&&&&&&&.     ,%&&&*%*                             %#%&&   &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&%...,#  #&.\t";
  std::cout<<"\n\t          ,&&&&&&&&&&&&%&%&&&%%&* &&&&&&&&&/                     (%,&    (%,,*(%&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&,&&&&&&&&&&&/..      #&&\t";
  std::cout<<"\n\t          %&&&&&&&&&&&&&&&%%&&&&&&&&&&&#..(/                       .. &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&#%\t";
  std::cout<<"\n\t          %&&&&&&&&&&&&&&*(%(*/&&&&&&&%/*                           .&&&&&&&&&&&&&&/.&./&&&&* /%&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&% .\t";
  std::cout<<"\n\t        #&&&&&&&&&&&&&&&&&.%#,%&&&%                             ,%&&&%,  . #* #&&%%  *.  /&&% .&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&#    #/\t";
  std::cout<<"\n\t        &&&&&&&&&&&&&&&&&&&&&&&(                                 &&&*      *(  /% *&&&&&&&&&&,  &%&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&.( #&,    /*\t";
  std::cout<<"\n\t        .&&&&&&&&&&&&&&&&&&&&*                                   %&&&&&&&%(.           &&&&&&&&%&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&,  . #/(\t";
  std::cout<<"\n\t          &&&&&&&&%&#(%  *%,                                   *&&&&&&&&&&&&&%&&&&&%&%&&&&&&&# &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&#\t";
  std::cout<<"\n\t          (**&&&&&,       .,                                 &&&&&&&&&&&&&&&&&&&&&&&&&% %&&&%&&# *,./#%&&&&&&&&&&&&&&&&&&&&&&&&&&&&\t";
  std::cout<<"\n\t             (%&&&.  *%,   .(.                              &&&&&&&&&&&&&&&&&&&&&&&&&&&& &&&&&&&&&&&     #%&&&&&&&%(,&%&&&&&&%%/\t";
  std::cout<<"\n\t               ,&%%&&%*                                     %&&&&&&&&&&&&&&&&&&&&&&&&&&&&/ &&&&&&&         #&&&&%     /&&&&&&*      /*\t";
  std::cout<<"\n\t                     ,#&%                                  *&%&&&&&&&&&&&&&&&&&&&&&&&&&&&&&%%*              (%&(         &&%&&&      //\t";
  std::cout<<"\n\t                        %*##&&&&&&&&%                        *&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&%&&#             ,%*         &  *,        %*\t";
  std::cout<<"\n\t                           (&&&&&&&&&&&&%                       %(,*.  *%&&&&&&&&&&&&&&&&&&&&&#                        ,# (%      #%*\t";
  std::cout<<"\n\t                          &&&&&&&&&&&&&&&&*                              *%&&&&&&&&&&&%&&&&%#                             &&/  &&&&&,%*, #\t";
  std::cout<<"\n\t                        .&&&&&&&&&&&&&&&&&&&%&&/                         (%&&&&&&&&&&&&&&.                                %&#  .#& /&  .#//&&%&&%   .\t";
  std::cout<<"\n\t                           (&&&&&&&&&&&&&&&&&&&&&&&*                        *&&&&&&&&&&&&&%                                   ,(##,            #&%&&(\t";
  std::cout<<"\n\t                           ,&&&&&&&&&&&&&&&&&&&&&                          ,&&&&&&&&&&&&&%(                                                (    ,\t";
  std::cout<<"\n\t                             /&&&&&&&&&&&&&&&&&&/                          &&&&&&&&&&&&&&&  .(&,                                      /&&&%&&  *&&\t";
  std::cout<<"\n\t                                &&&&&&&&&&&&&&&&                           #&&&&&&&&&&&#    &%(                                    ,%&&&&&&&&&&&&&/\t";
  std::cout<<"\n\t                                (&&&&&&&&&&%#                               %&&&&&&&&&&/   /&&                                  %%&&&&&&&&&&&&&&&&%%\t";
  std::cout<<"\n\t                                %%&&&&&&&&&&.                                &&&&&&&&%                                          &%&&&&&&&&&&&&&&&&&&\t";
  std::cout<<"\n\t                                ,&&&&&&&&%%                                   &&&&&%                                            &&&&%(,.*%%&&&&&&%#\t";
  std::cout<<"\n\t                                .%&&&&&%%                                                                                                  &&&&&/\t";
  std::cout<<"\n\t                                 &&&&%(\t";
  std::cout<<"\n\t                                  &&&&\t";
  std::cout<<"\n\t                                  #%&%*\t";
  std::cout<<"\n\t                                    /&%\t\n"<<reset;
  
  std::cout<<"\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

};

void Menu::menu()
{
  mapamundi();
  bool iniciado = false;
  std::regex pattern("^turno .*$");
  std::regex pattern2("^guardar .*.txt$");
  std::regex pattern3("^inicializar_archivo .*.txt$");
  std::regex pattern4("^.*.txt$");
  std::regex pattern5("^.*.bin$");
  Partida p;
  
  // Menu de todos los comandos

  std::string comando, tu, tuJ, gu, guN, ab, abN;
  std::cout<<"\n";
  
  while(comando.compare("salir") != 0) // while para ingresar comandos
  {
    std::cout<<"$ "; 
    std::getline(std::cin, comando); // se lee la linea completa ingresada por el usuario
    
    if(comando.size() > 5)
    {
      tu = comando.substr(0, 5);
      if (tu.compare("turno") == 0)
      {
        tuJ = comando.substr(6);
      }
    }

    if(comando.size() > 7)
    {
      gu = comando.substr(0, 7);
      if (gu.compare("guardar") == 0)
      {
        guN = comando.substr(8);
      }
    }

    if(comando.size() > 19)
    {
      ab = comando.substr(0, 19);
      if (ab.compare("inicializar_archivo") == 0)
      {
        abN = comando.substr(20);
      }
    }
  
    if(comando.compare("") == 0);

    // condicionales de inicializar 

    else if (comando.compare("inicializar") == 0) 
    {
      p = inicio();
      iniciado = true;
    }

    else if (comando.compare("inicializar ?") == 0)
    {
      std::cout<< "La forma correcta de utilizar este comando es: inicializar\n"<<std::endl;
      
    }

    // condicionales de turno 

    else if (comando.compare("turno ?") == 0)
    {
      std::cout<<"La forma correcta de utilizar este comando es: turno <id_jugador>\n"<<std::endl;
    }

    else if (std::regex_match(comando, pattern)) 
    {
      bool enc = false;
      std::list<Jugador>::iterator miIt;
      for (miIt = p.jugadoresP.begin(); miIt != p.jugadoresP.end(); miIt++)
      {
        if(tuJ.compare(miIt->nombreJugador) == 0)
          enc = true;
      }

      if(iniciado == false)
      {
        std::cout<<"El juego no ha sido inicializado\n\n";
      }
      else 
      {
        if (enc == true)
        {
          if (tuJ.compare(p.turnos.front()) != 0)
          {
            std::cout<<"No es el turno de "<<tuJ<<" es el turno de "<<p.turnos.front()<<"\n\n";
          }
          else if (tuJ.compare(p.turnos.front()) == 0)
          {
            p.turno();
          }
        }
        else if (enc == false)
        {
          std::cout<<"El jugador "<<tuJ<<" no hace parte de esta partida\n\n";
        }

      }
    }

    // condicionales de guardar 

    else if (std::regex_match(comando, pattern2))
    {
      bool guardado = p.guardarNormal(guN);
      
      if (guardado == true)
        std::cout<<"\nSe ha guardado la partida en "<<guN<<"\n\n";

      else if (guardado == false)
        std::cout<<"\nNo se ha podido guardar la partida, intente nuevamente\n\n";
    }

    else if (comando.compare("guardar ?") == 0)
    {
      std::cout<<"La forma correcta de utilizar este comando es: guardar <nombre_archivo>\n"<<std::endl;
    }

    // condicionales de guardar_comprimido 
      
    else if (comando.compare("guardar_comprimido") == 0)
    {
      std::cout<<"Posibles salidas: Juego no inicializado, Comando correcto y Error al Guardar\n"<<std::endl;
    }

    else if (comando.compare("guardar_comprimido ?") == 0)
    {
      std::cout<<"La forma correcta de utilizar este comando es: guardar_comprimido <nombre_archivo>\n"<<std::endl;
    }

    // condicionales de inicializar_archivo

    else if (std::regex_match(comando, pattern3))
    {
      //revisa si es un archivo .txt
      if(std::regex_match(abN, pattern4))
      {
        abrirNormal(abN);

        std::cout<<"\nSe ha abierto el archivo "<<abN<<"\n\n";
        iniciado = true;
      }
      //revisa si es un archivo .bin
      else if(std::regex_match(abN, pattern4))
      {
        bool abierto; // = p.abrirComprimido(abN);

        if(abierto == true)
        {
          std::cout<<"\nSe ha abierto el archivo "<<abN<<"\n\n";
          iniciado = true;
        }
        else if(abierto == false)
          std::cout<<"\nNo se ha podido abrir el archivo, intente nuevamente\n\n";
      }
      else  
        std::cout<<"El archivo no tiene la extensión correcta, intente nuevamente\n\n";
    }

    else if (comando.compare("inicializar_archivo ?") == 0)
    {
      std::cout<<"La forma correcta de utilizar este comando es: inicializar_archivo <nombre_archivo>\n"<<std::endl;
    }

    // condicionales de costo_conquista 

    else if (comando.compare("costo_conquista") == 0)
    {
      std::cout<<"Posibles salidas: Juego no inicializado, Juego terminado y Comando correcto\n"<<std::endl;
    }

    else if (comando.compare("costo_conquista ?") == 0)
    {
      std::cout<<"La forma correcta de utilizar este comando es: costo_conquista <territorio>\n"<<std::endl;
    }

    // condicionales de conquista_mas_barata 

    else if (comando.compare("conquista_mas_barata") == 0)
    {
      std::cout<<"Posibles salidas: Juego no inicializado, Juego terminado y Comando correcto\n"<<std::endl;
    }

    else if (comando.compare("conquista_mas_barata ?") == 0)
    {
      std::cout<<"La forma correcta de utilizar este comando es: conquista_mas_barata\n"<<std::endl;
    }

    // condicional de help

    else if(comando.compare("ayuda") == 0)
    {
      std::cout<<"Los comandos disponibles son:"
               <<"\n - inicializar: inicia el juego donde le va a preguntar al usuario la cantidad de jugadores, luego pregunta el nombre de cada uno de los jugadores para poder identificarlos durante la partida. Después, por turnos, cada jugador seleccionará en que territorio desea ubicar sus unidades de ejército."
               <<"\n - turno: Describe que puede hacer el jugador en este turno como: Fortificar terriorio, Atacar un territorio Vecino o Obtener nuevas unidades" 
               <<"\n - salir: termina la ejecución del programa." 
               <<"\n - guardar: guarda toda la partida en un archivo de texto plano" 
               <<"\n - guardar_comprimido: guarda toda la partida en un archivo binario" 
               <<"\n - inicializar_archivo: inicializa el juego con los datos contenidos en el archivo <nombre_archivo>" 
               <<"\n - costo_conquista: calcula el costo y la secuencia de territoriors conquistados para lograr controlar un territorio elegido." 
               <<"\n - conquista_mas_barata: calcula de todos los territorios posibles aquel que pueda sacrificar el menor número de unidades perdidas"
               <<"\n - limpiar: limpia la interfaz y todos los comandos que se han hecho antes\n"<<std::endl;
        
    }

    else if(comando.compare("limpiar") == 0)
    {
      std::system("clear");
      mapamundi();
    }

    // condicional de salir
      
    else if (comando.compare("salir") == 0)
    {
      std::cout<<"Gracias por jugar RISK!\n"<<std::endl; //aunque el enunciado dice que no tiene salida decidimos poner este mensaje 
    }

    // condicional en caso de que no se ingrese un comando válido

    else
      std::cout<<red<<"El comando "<<reset<<comando<<red<<" no pudo ser reconocido, intente nuevamente\n"<<reset<<std::endl;
  }
};

Partida Menu::inicio()
{
  int id;
  
  std::cout<<"\nIngrese el id de la partida (solo ingrese numeros): ";
  std::cin>>id;

  Partida p = Partida(id);

  return(p);
}

Partida Menu::abrirNormal(std::string nombreArchivo)
{
  std::string linea;
  std::ifstream archivo(nombreArchivo);

  int numJugadores = 0, numPaises;
  std::string seccionActual;

  int idP = 0;
  Continente *contiP[6];
  std::list<Jugador> jugadoresP;
  std::queue<std::string> turnos;

  if (archivo.is_open())
  {
    while (std::getline(archivo, linea))
    {
      if (linea.find("Numero de jugadores:") != std::string::npos)
      {
        std::string nume = linea.substr(linea.find(":") + 2);
        numJugadores = std::stoi(nume);
      }
      else if (linea == "- Territorios")
      {
        seccionActual = "Territorios";
        numPaises = 0;
      }
      else if (linea == "- Jugadores")
      {
        seccionActual = "Jugadores";
      }
      else if (linea == "- Turnos")
      {
        seccionActual = "Turnos";
      }
      else
      {
        if (seccionActual == "Territorios")
        {
          if (linea.find(")") != std::string::npos)
          {
            std::string nombreContinente = linea.substr(linea.find(")") + 2);
            contiP[numPaises] = new Continente(nombreContinente, 0);
            numPaises++;
          }
          /*else
          {
            std::string nombreTerritorio = linea.substr(0, linea.find(","));
            linea = linea.substr(linea.find(",") + 1);

            std::string duenio = linea.substr(0, linea.find(","));
            linea = linea.substr(linea.find(",") + 1);
            
            std::string numT = (linea.substr(0, linea.find(",")));
            linea = linea.substr(linea.find(",") + 1);
            int numTropas = std::stoi(numT);

            std::string toma = (linea.substr(0, linea.find(",")));
            int tomado = std::stoi(toma);
            
            Territorio nuevoTerritorio = Territorio(nombreTerritorio, duenio, numTropas, tomado);

            contiP[numPaises]->territoriosC.push_back(nuevoTerritorio);
          }*/
        }
        else if (seccionActual == "Jugadores")
        {
          std::string nombreJugador = linea.substr(0, linea.find(","));
          linea = linea.substr(linea.find(",") + 1);

          std::string colorJugador = linea.substr(0, linea.find(","));
          linea = linea.substr(linea.find(",") + 1);

          std::string cantiT = (linea.substr(0, linea.find(",")));
          int cantiTropas = std::stoi(cantiT);

          Jugador nuevoJugador(nombreJugador, colorJugador, cantiTropas);

          jugadoresP.push_back(nuevoJugador);
        }
        else if (seccionActual == "Turnos")
        {
          std::getline(archivo, linea);
          turnos.push(linea);
        }
      }
    }

    archivo.close();
  }
  
  //Partida p; // = Partida(idP, contiP, jugadoresP, turnos);

  /*for(int i=0; i<6; i++)
  {
    std::list<Territorio>::iterator it;
    std::cout<<contiP[i]->nombreContinente<<std::endl;
    for(it=contiP[i]->territoriosC.begin(); it!=contiP[i]->territoriosC.end(); it++)
    {
      std::cout<<it->nombreTerritorio<<"-"<<it->duenio<<"-"<<it->numTropas<<"-"<<it->tomado<<std::endl;
    }
  }

  std::list<Jugador>::iterator it;
  for(it=jugadoresP.begin(); it!=jugadoresP.end(); it++)
  {
    std::cout<<it->nombreJugador<<"-"<<it->colorJugador<<"-"<<it->cantiTropas<<std::endl;
  }

  while(!turnos.empty())
  {
    std::cout<<turnos.front()<<std::endl;
    turnos.pop();
  }*/

  //return p;
}