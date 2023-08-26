# Tads

# tads Menu
## Conjunto minimo de datos
- partidas (Partida): Lista <Partida>, Guarda todas las partidas que se guarden en un menu
### Comportamiento del objeto
- Mapamundi(): Imprime el mapa mundi grafico de como es el mpara de risk
- Menu(): Despliega el menu con todas la funciones de Risk
# Tads Partidas
### Conjunto minimo de datos
- jugadores (Jugador): Lista de Jugador, Indica todos los juagadores dentro de la partida
- contienetes: Arreglo de tipo Continente, Indica todos los contientes que hay dentro de la partida
- jugadoresTurnos: Cola de juagores, Indica los turnos de los jugadores de la partida en orden de llegada
- cartat: Lista de Carta: Indica todas las cartas que hay dentro de la partida
### Comportamiento del objeto
- Partida() : Operacion para crear una partida sin jugadores y jugadoresTurnos 
   - post:  List<Jugador> jugadores = new List<Jugador>(0) , List<Stack> jugadoresTurnos ,List<Carta> cartat = new List< Carta >(52) , Contienetes[6]
- ObtenerCartat(): Imprime todas las cartas que hay dentro de la partida
- ObtenerTurnos() : Imprime los turnos de los jugadores dentro de la partida
- ObtenerContinentes(): Ver el arreglo de continentes
- ObtenerJugadores(): Imprime los jugadores de la partida
- FijarJuagadores(Jugador njugador) : Crea un jugador y lo mete en la lista de jugadores
  - Post:  jugadores.push_back(njugador)
- FijarJugadorTurnos(Jugador njugador): Mete los jugadores en la cola de jugadores para ver todos los turno
  -  Post: jugadorTurnos.Push(njugador)
- FijarCartat( String ncontienete)
     - Post: Continentes[6]= {ncontinente}
# Tads Continente
### Conjunto minimo de datos
- Nombre : String ,Nombre del contienete
- territorios: Lista de Territorio, Indica todos los territorios que esten en el continente
### Comportamiento del objeto
- Continente(String nnombre) : Operacion para crear un continente
   - Post: List<Territorio> territorios = new List<Territorio>(12) , Nombre = nnombre
- FijarNombre(nnNombre)
   -Post: Nombre = nnombre
- FijarTerritorios(Territorio nterritorios)
     -Post:  territorios.push_back(nterritorio)
- ObtenerNombre()
- ObtenerTerritorios()
# Tads Jugador
### Conjunto minimo de datos
- Color: String : Color del jugador dentro de la partida
- Idjugador: String : Identificacion del jugador
  
