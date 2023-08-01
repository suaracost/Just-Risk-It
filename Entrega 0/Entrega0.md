# Entrega 0

### Compilación y ejecucción
   
1. compilación

         g++ -std=c++11 main.cpp -o risk

   Para compilar el proyecto usaremos este comando que solo compila un archivo ya que en la entrega 0 solo desarollamos la interfaz y no hay funcionalidades adicionales, es por esto que todo esta en el main.
   
3. ejecucción

         ./risk

   Al ejecutar el programa podras ver menu que desarollamos, a continuación listamos cuales son los comandos que puedes ejecutar para que el programa funcione de forma correcta.

### Comandos

1. Empezar juego

         inicializar

   Este Comando inicia el juego donde le va a preguntar al usuario la cantidad de jugadores, Luego pregunta el nombre de cada uno de los jugadores para poder identificarlos durante la partida. Después, por turnos, cada jugador seleccionará en que territorio desea ubicar sus unidades de ejército. El comando `Inicializar`  Tiene dos posibles salidas: `Juegos en curso` el cual especifica que el juego ya ha sido inicializado previamente y `Inicializacion Satisfactoria ` el cual confirma que sea ha inicializado el juego correctamente
   
2. Turno del jugador

            turno <id_jugador>

     Este comando describe que quiere hacer el jugador este puede `Fortificar terriorio` donde mueve algunas unidades de ejército que estén a un territorio a otro, `Atacar un territorio Vecino` Este debe escoger un territorio de su ejército, donde ataca un territorio enemigo vecino, donde a través de los dados define si gano o perdió el ataque, este proceso se repite hasta que uno de los dos jugadores se queden si unidades  o hasta que el atacante decida detenerse. Y  por último, `Obtener nuevas unidades` donde le verifica al jugador cuantas nuevas unidades puede reclamar y luego este puedo asignarlo en cualquiera de sus territorios y define que cantidad quiere en cada uno de estos. Este comando tiene varias salidas como, `Juego no inicializado` Este se refiere a que la partida no ha sido inicializado correctamente, `Juego terminado` se refiera ah que se ha acabado la partida y hubo un ganador, `Jugador no valido` se refiere a que utiliza un ID o nombre de jugador que no está dentro de la partida, `Jugardor fuera de turno` se refiere a que un jugador quiere jugar un turno cuando no lo era, y por último `Turno terminado Correctamente` cuando el turno del jugador acabo correctamente.

4. salida de la aplicacion

              salir

      Este comando termina la ejecución del programa. Este comando no tiene salidas


6. Guardado el juego

            guardar <nombre_archivo>

      Este comando guarda toda la partida en un archivo de texto plano, este contiene la cantidad de jhugadores que estuvieron en la partida y para cada jugador debe almacenar su nombre o ID , su color en la partida , la cantidad de paises que ocupa este, Un identificar de cada territorio junto con la cantidad de unidades de ejército en él, la cantidad de tarjetas que posee  y por ultimo, un identificador de cada tarjeta Las posibles salidas de este son : `Juego no inicalzado`se refiere a que la partida no ha sido inicializado correctamente, `Comando correcto` se refiere a que se pudo guarda correctamente la partida, `Error al Guardar` se refiera a que la partida no ah sido guardara correctamente. 

7. Guardar el juego en un archivo comprimido

   hola

8. inicializar <nombre_archivo>

   hola

9. costo_conquista <territorio>

   hola

10. conquista_mas_barata

   hola

11. Ayuda

         help
   
   Al ejecutar este comando en la terminal te saldran todos los posibles comandos, es decir los que fueron listados previamente.
