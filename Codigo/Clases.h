// TAD carta

#ifndef __CARTA__H__
#define __CARTA__H__

#include <string> // librerías que usaremos

class Carta
{
  public: //Atributos
    std::string nombreCarta;
    std::string tipoCarta;
    std::string descripcion;

  public: //Metodos
    Carta(std::string nombre, std::string tipo, std::string descri);

};

#endif 

// TAD territorio

#ifndef __TERRITORIO__H__
#define __TERRITORIO__H__

#include <string> // librerías que usaremos

class Territorio
{
  public: //Atributos
    std::string nombreTerritorio;
    //std::string vecinos[];
    int numTropas;
    bool tomado;

  public: //Metodos
    Territorio(std::string nombreTer); 
};

#endif

// TAD continente

#ifndef __CONTINENTE__H__
#define __CONTINENTE__H__

#include <string> // librerías que usaremos
#include <list>

class Continente
{
  public: //Atributos
    std::string nombreContinente;
    std::list <Territorio> territoriosC;

  public: //Metodos
    Continente(std::string nombreCon);
};

#endif 

// TAD jugador

#ifndef __JUGADOR__H__
#define __JUGADOR__H__

#include <string> // librerías que usaremos
#include <list>

class Jugador
{
  public: //Atributos
    std::string nombreJugador;
    std::string colorJugador;
    int cantiTropas;
    std::list<Territorio> territoriosPropios;
    std::list<Carta> cartasPropias;

  public: //Metodos
    Jugador(std::string nombreJug, std::string colorJug, int cantiTropas);
    
};

#endif 

// TAD partida

#ifndef __PARTIDA__H__
#define __PARTIDA__H__

#include <string> // librerías que usaremos
#include <list>
#include <queue>

class Partida
{
  public: //Atributos
    int idPartida;
    //std::string modoJuego;
    Continente* contiP[6];
    std::list<Jugador> jugadoresP;
    std::list<Carta> cartasP;
    std::queue<std::string> turnos;

  public: //Metodos
    Partida(int idP);
    void mostrarTerritoriosDisponibles();
    //Partida();
};

#endif 