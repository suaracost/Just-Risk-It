# Tads

## TAD Menu
### Conjunto minimo de datos
- partidas (Partida): Lista <Partida>, Guarda todas las partidas que se guarden en un menu
### Comportamiento del objeto
- Mapamundi(): Imprime el mapa mundi grafico de como es el mpara de risk
- Menu(): Despliega el menu con todas la funciones de Risk
  
## TAD Partidas
### Conjunto minimo de datos
- jugadores (Jugador): Lista de Jugador, Indica todos los juagadores dentro de la partida
- contienetes: Arreglo de tipo Continente, Indica todos los contientes que hay dentro de la partida
- jugadoresTurnos: Cola de juagores, Indica los turnos de los jugadores de la partida en orden de llegada
- cartat: Lista de Carta: Indica todas las cartas que hay dentro de la partida
### Comportamiento del objeto
- Partida() : Operacion para crear una partida sin jugadores y jugadoresTurnos 
   - Post:  List<Jugador> jugadores = new List<Jugador>(0) , List<Stack> jugadoresTurnos ,List<Carta> cartat = new List< Carta >(52) , Contienetes[6]
 
## TAD Continente
### Conjunto minimo de datos
- Nombre : String ,Nombre del contienete
- territorios: Lista de Territorio, Indica todos los territorios que esten en el continente
### Comportamiento del objeto
- Continente(String nnombre) : Operacion para crear un continente
   - Post: List<Territorio> territorios = new List<Territorio>(12) , Nombre = nnombre
  
## TAD Jugador
### Conjunto minimo de datos
- color: String , Color del jugador dentro de la partida
- Idjugador: String , Identificacion del jugador
- territoriospersonales: Lista de Territorio , lista de los territorios que tiene cada jugador dentro su ejercito
- cartas: Lista de Carta , Lista de todas las cartas que tiene el jugador
- tropas: Lista de Tropa, Indica las tropas que tiene el jugador
### Comportamiento del objeto
- Jugador(id): Operacion para crear un Jugador
  - 

## Tads Tropas
### Conjunto minimo de datos
- tipo : String , Tipo de la tropa dentro del arsernal
### Comportamiento del objeto

