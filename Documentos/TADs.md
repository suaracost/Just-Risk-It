# tads Menu
## Conjunto minimo de datos
- partidas (Partida): Lista <Partida>, Guarda todas las partidas que se guarden en un menu
### Comportamiento del objeto
- Mapamundi(): Imprime el mapa mundi grafico de como es el mpara de risk
- Menu(): Despliega el menu con todas la funciones de Risk
#Tads Partidas
### Conjunto minimo de datos
- jugadores (Jugador): Lista <Jugador>, Indica todos los juagadores dentro de la partida
- Contienetes: Arreglo de tipo Continente, Indica todos los contientes que hay dentro de la partida
- jugadoresTurnos: Cola de juagores, Indica los turnos de los jugadores de la partida en orden de llegada
- cartaT: Lista de Carta: Indica todas las cartas que hay dentro de la partida
### Comportamiento del objeto
- Partida() : Operacion para crear una partida sin jugadores y jugadoresTurnos 
   - post:  List<Jugador> jugadores = new List<Jugador>(0) , List<Stack> jugadoresTurnos ,List<Carta> cartat = new List< Carta >(52) , Contienetes[5]
- VerCartat(): Imprime todas las cartas que hay dentro de la partida
- VerTurnos() : Imprime los turnos de los jugadores dentro de la partida
- VerJugadores(): Imprime los jugadores de la partida
- FijarJuagadores(nIDjugador) : Crea un jugador y lo mete en la lista de jugadores
  - Post: 
- FijarjugadorTurnos(Idjugador): Mete los jugadores en la cola de jugadores para ver todos los turno
  -  
