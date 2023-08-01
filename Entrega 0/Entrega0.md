# Entrega 0

### Compilación y ejecucción
   
1. compilación

         g++ -std=c++11 main.cpp -o risk

   FALTA ESTO
   
3. ejecucción

         ./risk

   Al ejecutar el programa podras ver menu que desarollamos, a continuación listamos cuales son los comandos que puedes ejecutar para que el programa funcione de forma correcta.

### Comandos

1. Empezar juego

         inicializar

   Este Comando inicia el juego donde le va a preguntar al usuario la cantidad de jugadores, Luego pregunta el nombre de cada uno de los jugadores para poder identificarlos durante la partida. Después, por turnos, cada jugador seleccionará en que territorio desea ubicar sus unidades de ejército. El comando `Inicializar`  Tiene dos posibles salidas: `Juegos en curso` el cual especifica que el juego ya ha sido inicializado previamente y `Inicializacion Satisfactoria ` el cual confirma que sea ha inicializado el juego correctamente. Si se necesita ayuda en este comando se puede ejecutar el comando:

         inicializar ?
   
3. Turno del jugador

         turno <id_jugador>

     Este comando describe que quiere hacer el jugador este puede `Fortificar terriorio` donde mueve algunas unidades de ejército que estén a un territorio a otro, `Atacar un territorio Vecino` Este debe escoger un territorio de su ejército, donde ataca un territorio enemigo vecino, donde a través de los dados define si gano o perdió el ataque, este proceso se repite hasta que uno de los dos jugadores se queden si unidades  o hasta que el atacante decida detenerse. Y  por último, `Obtener nuevas unidades` donde le verifica al jugador cuantas nuevas unidades puede reclamar y luego este puedo asignarlo en cualquiera de sus territorios y define que cantidad quiere en cada uno de estos. Este comando tiene varias salidas como, `Juego no inicializado` Este se refiere a que la partida no ha sido inicializado correctamente, `Juego terminado` se refiera ah que se ha acabado la partida y hubo un ganador, `Jugador no valido` se refiere a que utiliza un ID o nombre de jugador que no está dentro de la partida, `Jugardor fuera de turno` se refiere a que un jugador quiere jugar un turno cuando no lo era, y por último `Turno terminado Correctamente` cuando el turno del jugador acabo correctamente. Si se necesita ayuda en este comando se puede ejecutar el comando:

         turno ?

5. Salida de la aplicacion

         salir

      Este comando termina la ejecución del programa. Este comando no tiene salidas. 

7. Guardado el juego

         guardar <nombre_archivo>

      Este comando guarda toda la partida en un archivo de texto plano, este contiene la cantidad de jugadores que estuvieron en la partida y para cada jugador debe almacenar su nombre o ID, su color en la partida, la cantidad de países que ocupa este, Un identificar de cada territorio junto con la cantidad de unidades de ejército en él, la cantidad de tarjetas que posee  y por último, un identificador de cada tarjeta. Las posibles salidas de este son: `Juego no inicializado`se refiere a que la partida no ha sido inicializado correctamente, `Comando correcto` se refiere a que se pudo guardar correctamente la partida, `Error al Guardar` se refiera a que la partida no ha sido guardara correctamente. Si se necesita ayuda en este comando se puede ejecutar el comando:

         guardar ?

9. Guardar el juego en un archivo comprimido

         guardar_comprimido <nombre_archivo>

      Este Comando hace los mismo que el comando `guardar <nombre_archivo>` pero este es un archivo Binario con extension `.bin` que tendra la misma informacion del archivo de texto. Las posibles salidas de este son: `Juego no inicializado`se refiere a que la partida no ha sido inicializado correctamente, `Comando correcto` se refiere a que se pudo guardar correctamente la partida, `Error al Comprimir` se refiera a que la partida no ha sido guardara ni codificada correctamente. Si se necesita ayuda en este comando se puede ejecutar el comando:

         guardar_comprimido ?

11. Inicializar a partir de un archivo

         inicializar_archivo <nombre_archivo>

      Este comando inicializa el juego con los datos contenidos en el archivo `<nombre_archivo>` este debe inicializar el juego desde un archivo de juego normal, el cual fue generado por el comando guardar o guardar comprimido. Las posibles salidas de este son: `Juego en curso`se refiere a que el juego ya ha sido inicializado, `Archivo vacio o incompleto` se refiere a que el nombre del archivo no contiene información válida o no existe, por lo tanto, no sé ha podido inicializar. Si se necesita ayuda en este comando se puede ejecutar el comando:

          inicializar_archivo ?

13. Calcular costo conquista

         costo_conquista <territorio>       

      Este Comando debe calcular el costo y la secuencia de territorios a ser conquistados para lograr controlar el territorio dado por el usuario. El territorio debe ser aquel que el jugador tenga controlado más cerca al dado por el jugador. Esta información se analiza desde el punto de vista del jugador que tiene el turno de juego. Las posibles salidas de este son: `Juego no inicializado`se refiere a que la partida no ha sido inicializado correctamente, `Juego terminado`se refiera ah que se ha acabado la partida y hubo un ganador, y por último `Comando correcto ` este especifica desde el territorio donde está que pasos tiene que hacer atacando a otros para conquistar <n> unidades de ejército. Si se necesita ayuda en este comando se puede ejecutar el comando:

         costo_conquista ?

14. Calcular costo de conquista mas bajo

         conquista_mas_barata

     Este Comando calcula de todos los territorios posibles aquel que pueda sacrificar el menor número de unidades perdidas , este comando solo lo puede hacer el jugador que está jugando en ese turno. Las posibles salidas de este son: `Juego no inicializado` se refiere a que la partida no ha sido inicializado correctamente, `Juego terminado`se refiera ah que se ha acabado la partida y hubo un ganador, `Juegador no valido` se refiere a que un jugador intento usar este comando cuando no era su turno, y por último `Comando correcto ` ) La conquista más barata es avanzar sobre el territorio <territorio_1> desde el territorio <territorio_2>. Para conquistar el territorio <territorio_1>, debe atacar desde <territorio_2>, pasando por los territorios <territorio_3>, <territorio_4>, ..., <territorio_m>. Debe conquistar <n> unidades de ejército. Si se necesita ayuda en este comando se puede ejecutar el comando:

          conquista_mas_barata ?

16. Ayuda

         help
   
   Al ejecutar este comando en la terminal te saldran todos los posibles comandos, es decir los que fueron listados previamente. 
