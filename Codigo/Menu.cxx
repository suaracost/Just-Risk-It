#include "Menu.h"
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
  
  // Menu de todos los comandos

  std::string comando;
  std::cout<<"\n";
  
  while(comando.compare("salir") != 0) // while para ingresar comandos
  {
    std::cout<<"$ "; 
    std::getline(std::cin, comando); // se lee la linea completa ingresada por el usuario

    if(comando.compare("") == 0);

    // condicionales de inicializar 

    else if (comando.compare("inicializar") == 0) 
    {
      std::cout<<"Posibles salidas: Juegos en curso e Inicializacion Satisfactoria\n"<<std::endl;
    }

    else if (comando.compare("inicializar ?") == 0)
    {
      std::cout<< "La forma correcta de utilizar este comando es: inicializar\n"<<std::endl;
    }

    // condicionales de turno 

    else if (comando.compare("turno") == 0) 
    {
      std::cout<<"Posibles salidas: Juego no inicializado, Juego terminado, Jugador no valido, Jugardor fuera de turno y Turno terminado Correctamente\n"<<std::endl;
    }

    else if (comando.compare("turno ?") == 0)
    {
      std::cout<<"La forma correcta de utilizar este comando es: turno <id_jugador>\n"<<std::endl;
    }

    // condicionales de guardar 

    else if (comando.compare("guardar") == 0)
    {
      std::cout<<"Posibles salidas: Juego no inicializado, Comando correcto y Error al Guardar\n"<<std::endl;
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

    else if (comando.compare("inicializar_archivo") == 0)
    {
      std::cout<<"Posibles salidas: Juego en curso y Archivo vacio o incompleto\n"<<std::endl;
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
