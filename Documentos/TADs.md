# Tads

## TAD Menu
### Conjunto minimo de datos
- partidas (Partida): Lista <Partida>, Guarda todas las partidas que se guarden en un menu
### Comportamiento del objeto
- Mapamundi(): Imprime el mapa mundi grafico de como es el mpara de risk
- Menu(): Despliega el menu con todas la funciones de Risk
- Inicio(): Inicia el juego donde cada jugador se crea eh inicia sus territorios
    - Partida p = Partida(id)
  
## TAD Partida
### Conjunto minimo de datos
- Idpartida: Entero, Identificador del la partida 
- jugadoresp: Lista de Jugador, Indica todos los juagadores dentro de la partida
- contienetes: Arreglo de tipo Continente, Indica todos los contientes que hay dentro de la partida
- turnos: Cola de juagores, Indica los turnos de los jugadores de la partida en orden de llegada
- cartap: Lista de Carta: Indica todas las cartas que hay dentro de la partida
### Comportamiento del objeto
- Partida() : Operacion para crear una partida sin jugadores y jugadoresTurnos 
   - Post:  List<Jugador> jugadores = new List<Jugador>(0) , List<Stack> jugadoresTurnos ,List<Carta> cartat = new List< Carta >(52) , Contienetes[6]
-  Partida(Int idp) : Operacion para crear una partida sin jugadores y jugadoresTurnos 
   - Post:  List<Jugador> jugadores = new List<Jugador>(0) , List<Stack> jugadoresTurnos ,List<Carta> cartat = new List< Carta >(52) ,         Contienetes[6] , Idpartida = idp
-  mostrarTerritoriosDisponibles(): Muestra todos los territorios disponibles en la partida
-  mostrarTerritoriosPropios(string jug): Muestrar todos los territorios del jugador jug
-  mostrarTerritoriosEnemigos(string jug): Muestra todos los territorios enemigos del jugador jug
-  turno() : Turno del jugador donde este puede agregar nuevas tropas , atacar o fortificar
-  nuevasTropas() : Dentro de la funcion turno, añade nuevas tropas segun el numero de terrirtorios que tengas, dentro un territorio en especifico
-  atacar() : Dentro de la funcion turno, decide si quiere atacar a un territorio enemigo para conquistarlo o no.
-  
  ## TAD Continente
### Conjunto minimo de datos
- Nombre : String ,Nombre del contienete
- territorios: Lista de Territorio, Indica todos los territorios que esten en el continente
### Comportamiento del objeto
- Continente(String nnombre) : Operacion para crear un continente
   - Post: List<Territorio> territorios = new List<Territorio>(0) , Nombre = nnombre
## TAD Jugador
### Conjunto minimo de datos
- color: String , Color del jugador dentro de la partida
- Idjugador: String , Identificacion del jugador
- territoriospersonales: Lista de Territorio , lista de los territorios que tiene cada jugador dentro su ejercito
- cartas: Lista de Carta , Lista de todas las cartas que tiene el jugador
- cantidadTropas: Entero, Numero de tropas del jugador
### Comportamiento del objeto
- Jugador(String id,String color): Operacion para crear un Jugador
  - Pos: color=color,Idjugador=id,List<Territorio> territoriosPersonales = new List<Territorio>(0), List<Carta> cartas = new List<Carta>(0), Cantidadtropas=0
Tropas(String ttipo): Crear una tropa 
## Tads Territorio
### Conjunto minimo de datos
- nombreTerritorio: String, Nombre del territorio
- numTropas: Entero , numero de tropas en el territorio
### Comportamiento del objeto
- Territorio(String nnombreTerritorio): Crea un nuevo territorio
    - Post: Int numTropas =0 , nombreTerritorio=nnombreTerritorio
## Tads Cartas
### Conjunto minimo de datos
- NombreCarta: String, Nombre de la carta 
- tipocarta, String, Describe de que tipo es la carta dentro el juego
- descripcion: String, Descripcion breve de que es la carta tambien puede explicar si es una mision que tiene que hacer en la mision 
### Comportamiento del objeto
- Cartas(string nombre,string tipo,string descri): para crear una carta
    - Post:NombreCarta= nombre, Tipocarta = tipo , descripcion = descri

