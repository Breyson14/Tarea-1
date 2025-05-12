
# TAREA 1 - Contador de 1s en diagonales secundarias ascendente

Este programa en lenguaje C está diseñado para encontrar la secuencia más larga de 1s consecutivos dentro de una matriz cuadrada que contiene únicamente
ceros y unos. Lo particular es que la búsqueda no se hace por filas ni columnas, sino siguiendo las diagonales que van hacia arriba a la izquierda (↑↙). 
Además, si una secuencia de 1s continúa en la siguiente diagonal sin interrupción, también se incluye en el mismo conteo.

La utilidad principal de este programa es poner en práctica conceptos como lectura de archivos, validación de datos y recorrido de estructuras matriciales 
usando una lógica poco habitual. En lugar de analizar línea por línea, se recorren las diagonales, lo cual es ideal para ejercitar otro tipo de pensamiento
lógico.

Cuando se ejecuta el programa, lo primero que hace es leer un archivo de texto llamado matriz.txt, que debe estar en la misma carpeta que el código fuente. 
Ese archivo debe contener la matriz escrita con números separados por espacios, una fila por línea. Luego de leer los datos, el programa verifica que la
matriz sea cuadrada (mismo número de filas y columnas) y que todos los valores sean válidos, es decir, que solo haya ceros y unos.
Si los datos son correctos, el programa muestra la matriz por pantalla y empieza a trabajar con su lógica principal.

## Cómo funciona la lógica del código?

La idea es recorrer la matriz empezando desde la esquina inferior derecha, y desde ahí seguir cada una de las diagonales que suben hacia la izquierda.
Por ejemplo, si se empieza en la última columna de la última fila, se va subiendo en diagonal hacia la izquierda.Cuando se termina una diagonal, se pasa a la
siguiente. El truco está en que si la secuencia de 1s no es interrumpida  por un cero, entonces el conteo continúa. Así, se puede formar una secuencia más 
larga sumando 1s de distintas diagonales consecutivas.Cada vez que se encuentra un 0, el contador se reinicia porque se rompió la consecutividad. 
El programa guarda en una variable el valor más alto que se haya contado en cualquier momento, y al final muestra ese valor como el resultado.
Detrás de todo esto hay ciclos for anidados que permiten moverse por cada diagonal. Se utilizan variables auxiliares para ir ajustando las posiciones de 
fila y columna en cada paso. Además, hay una función que ayuda a seguir el rastro de las diagonales y a continuar el conteo cuando corresponde.Todo esto 
permite que el programa no solo revise la matriz visualmente como si fueran líneas rectas, sino que la entienda en forma de diagonales cruzadas que pueden 
conectar varias partes. Es un tipo de recorrido menos común, pero muy útil en problemas de análisis de patrones.


## Cómo compilar y ejecutar?

Para compilar el programa, se debe utilizar el archivo T1_C31049.c. Con el compilador GCC, se puede ejecutar el siguiente comando desde una terminal de 
la siguiente forma: gcc T1_C31049.c -o T1_C31049
Esto generará un ejecutable llamado tarea1. Luego, para ejecutar el programa, solo hace falta tener el archivo matriz.txt en la misma carpeta, y escribir 
en la terminal: ./T1_C31049
El programa se encargará de leer la matriz, verificar que esté bien formada y mostrar el resultado de la secuencia más larga de 1s encontrados siguiendo 
la lógica de las diagonales.


## Información importante adicional

Es fundamental que el archivo matriz.txt contenga una matriz cuadrada, es decir, con la misma cantidad de filas que de columnas. Además, todos los valores
deben ser 0s Y 1s, sin letras, símbolos ni otros números. Si se detecta algún problema, el programa mostrará un mensaje de error y se detendrá.
También se recomienda no dejar líneas vacías ni espacios de más al final de las filas, ya que eso puede generar errores en la lectura.

En resumen, este proyecto muestra cómo trabajar con archivos, cómo validar datos y cómo aplicar una lógica diferente para recorrer una matriz. 
Todo el trabajo gira en torno al archivo T1_C31049.c, que contiene el código fuente, y matriz.txt, que guarda los datos. El resultado final permite 
identificar patrones diagonales de manera eficiente y clara.

## EJEMPLOS

