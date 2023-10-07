\![Banner](Images/header.jpg)

<sub> Imagen tomada de: [Steam: Risk](https://store.steampowered.com/app/1128810/RISK_Global_Domination/?l=latam) </sub>

# Proyecto Estructuras de datos 🗺️
Alejandro Suarez y Nicolas Quintana

### Objetivo del proyecto 🎯
El objetivo del componente 2 es implementar un árbol de Huffman para codificar y decodificar archivos de juego de Risk.

Codificación de Huffman:

La codificación de Huffman es un algoritmo de compresión de datos que utiliza un árbol binario para asignar a cada símbolo del mensaje una secuencia de bits de longitud variable. Los símbolos que aparecen con mayor frecuencia se codifican con secuencias de bits más cortas, mientras que los símbolos que aparecen con menor frecuencia se codifican con secuencias de bits más largas.

## Comandos

### Guardar:

       guardarguardar <nombre_archivo>

El comando guardar guarda el estado actual del juego en un archivo de texto plano. El archivo debe contener la siguiente información:
- La cantidad de jugadores.
- Para cada jugador:
  - El nombre del jugador.
  - El color del jugador.
  - La cantidad de países que ocupa.
  - El identificador de cada país junto con la cantidad de unidades de ejército en él.
  - La cantidad de tarjetas que posee.
### Guardar Comprimido

        guardar_comprimido <nombre_archivo>

Comando guardar_comprimido guarda el estado actual del juego en un archivo binario comprimido utilizando la codificación de Huffman. El archivo binario debe tener la siguiente estructura:
- n: Un número entero de 2 bytes que representa la cantidad de caracteres diferentes presentes en el archivo de juego que se va a almacenar.
- ci y fi: Dos números enteros de 1 y 8 bytes, respectivamente, que representan un caracter (código ASCII) y su frecuencia asociada (cuántas veces aparece en el archivo).
- w: Un número entero de 8 bytes que representa la longitud del archivo, es decir, la cantidad de caracteres que incluye originalmente.
- binary_code: La secuencia binaria que representa la i-ésima secuencia.
### Función inicializar:

          inicializar <nombre_archivo>

- inicializar inicializa el juego con los datos contenidos en un archivo de juego. El archivo debe contener la información descrita en la función guardar.

### ¿Quienes somos?
- [🪪🍻 Wiki 🍻🪪](https://github.com/suaracost/Just-Risk-It/wiki)

### Instrucciones
-  [📚 Manual de juego 📚](Documentos/manual.md)
-  [📑 Instrucciones implementación 📑](Documentos/instrucciones.md)

### Implementación
-  [📖 TADs 📖](Documentos/TADs.md)
-  [🤖 Código 🤖](Codigo)
-  [⚠️ Plan de pruebas ⚠️](Documentos/planPruebas.md) 
