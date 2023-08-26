# Tads

## tads Menu
## Conjunto minimo de datos
- partidas (Partida): Lista <Partida>, Guarda todas las partidas que se guarden en un menu
### Comportamiento del objeto
- Mapamundi(): Imprime el mapa mundi grafico de como es el mpara de risk
- Menu(): Despliega el menu con todas la funciones de Risk
## Tads Partidas
### Conjunto minimo de datos
- jugadores (Jugador): Lista de Jugador, Indica todos los juagadores dentro de la partida
- contienetes: Arreglo de tipo Continente, Indica todos los contientes que hay dentro de la partida
- jugadoresTurnos: Cola de juagores, Indica los turnos de los jugadores de la partida en orden de llegada
- cartat: Lista de Carta: Indica todas las cartas que hay dentro de la partida
### Comportamiento del objeto
- Partida() : Operacion para crear una partida sin jugadores y jugadoresTurnos 
   - Post:  List<Jugador> jugadores = new List<Jugador>(0) , List<Stack> jugadoresTurnos ,List<Carta> cartat = new List< Carta >(52) , Contienetes[6]
- GetCartat(): Imprime todas las cartas que hay dentro de la partida
- GetTurnos() : Imprime los turnos de los jugadores dentro de la partida
- GetContinentes(): Ver el arreglo de continentes
- GetJugadores(): Imprime los jugadores de la partida
-  SetJuagadores(Jugador njugador) : Operacion para meter un jugador dentro la lista de jugadores
  - Post:  jugadores.push_back(njugador)
-  SetJugadorTurnos(Jugador njugador): Operacion para meter los jugadores en la cola de jugadores para ver todos los turno
   - Post: jugadorTurnos.Push(njugador)
-  SetContientes( String ncontienete) : Operacion para para meter un nuevo continente en el arreglo de contienetes
   - Post: Continentes[6]= {ncontinente}
-  SetCartat(Carta ncarta): Operacion para meter una nueva Carta en la lista de cartat
   - Post: cartat.push_back(ncarta)
## Tads Continente
### Conjunto minimo de datos
- Nombre : String ,Nombre del contienete
- territorios: Lista de Territorio, Indica todos los territorios que esten en el continente
### Comportamiento del objeto
- Continente(String nnombre) : Operacion para crear un continente
   - Post: List<Territorio> territorios = new List<Territorio>(12) , Nombre = nnombre
-  SetNombre(nnNombre)
   - Post: Nombre = nnombre
-  SetTerritorios(Territorio nterritorios)
   - Post: territorios.push_back(nterritorio)
- GetNombre() : Operacion para ver el nombre del contiente
- GetTerritorios() : Operacion para ver los territorios
## Tads Jugador
### Conjunto minimo de datos
- color: String , Color del jugador dentro de la partida
- Idjugador: String , Identificacion del jugador
- territoriospersonales: Lista de Territorio , lista de los territorios que tiene cada jugador dentro su ejercito
- cartas: Lista de Carta , Lista de todas las cartas que tiene el jugador
- tropas: Lista de Tropa, Indica las tropas que tiene el jugador
### Comportamiento del objeto
- Jugador(id): Operacion para crear un Jugador
  - 
- SetColor(ncolor) : Operacion para dar el color al jugador
- SetIdjugador(Njugador) :
- SetTerritoriosPersonales(nterritorio) :
- SetCartas(ncarta) :
- SetTropas(ntropas) :
- GetColor() :
- GetIDjugador() :
- GetTerritoriosPersonales() :
- GetCartas() :
- GetTropas() :
## Tads Tropas
### Conjunto minimo de datos
- valor : Entero, Valor de la tropa dentro el arsenal
- tipo : String , Tipo de la tropa dentro del arsernal
### Comportamiento del objeto

