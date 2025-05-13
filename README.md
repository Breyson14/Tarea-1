
# TAREA 1 - Contador de 1s en diagonales secundarias ascendente

Este programa en lenguaje C está diseñado para encontrar la secuencia más larga de 1s consecutivos dentro de una matriz cuadrada que contiene únicamente
ceros y unos. El recorrido se hace siguiendo las diagonales que van hacia arriba a la izquierda. 
Además, si una secuencia de 1s continúa en la siguiente diagonal sin interrupción, también se incluye en el mismo conteo.

Cuando se ejecuta el programa, lo primero que hace es leer un archivo de texto llamado matriz.txt, que debe estar en la misma carpeta que el código fuente. 
Ese archivo debe contener la matriz escrita con números separados por espacios, una fila por línea. Luego de leer los datos, el programa verifica que la matriz sea cuadrada y que todos los valores sean válidos, es decir, que solo haya ceros y unos. Si los datos son correctos, el programa muestra la matriz y empieza a hacer el recorrido de la matriz ejecutando el conteo de 1s.

## Cómo funciona la lógica del código?

La idea es recorrer la matriz empezando desde la esquina inferior derecha, y desde ahí seguir cada una de las diagonales que suben hacia la izquierda.se empieza en la última columna de la última fila, se va subiendo en diagonal hacia la izquierda.Cuando se termina una diagonal, se pasa a la siguiente. El truco está en que si la secuencia de 1s no es interrumpida  por un cero, entonces el conteo continúa. Así, se puede formar una secuencia más larga sumando 1s de distintas diagonales consecutivas.Cada vez que se encuentra un 0, el contador se reinicia porque se rompió la consecutividad. 

El programa empieza incluyendo las librerías necesarias (stdio.h y stdlib.h) y define una constante llamada MAX, que indica el tamaño máximo de la matriz (100x100). Dentro del main, se declaran las variables principales: una matriz de enteros, contadores para filas y columnas, un arreglo de caracteres para leer líneas del archivo, y otras variables de apoyo.

Lo primero que hace el código es abrir el archivo matriz.txt en modo lectura. Si no se puede abrir, muestra un mensaje de error y termina el programa. Si el archivo se abre bien, entra en un ciclo donde lee cada línea con fgets. Luego, usando sscanf, va extrayendo los números de la línea y los guarda en la matriz. En ese mismo paso verifica que todos los valores sean 0 o 1, y también que todas las filas tengan la misma cantidad de columnas. Al final de la lectura, el programa comprueba que la matriz sea cuadrada.

Después de validar la matriz, el código la imprime en pantalla para que el usuario pueda ver qué se cargó. Luego arranca la parte central del programa: buscar la secuencia más larga de 1s en las diagonales que van de abajo a la derecha hacia arriba a la izquierda . Para eso, se usa un bucle for con una variable k que recorre todas las diagonales posibles en esa dirección. Dependiendo del valor de k, se calculan las posiciones iniciales (i y j) desde donde arranca cada recorrido diagonal.

Luego se entra en un while que va recorriendo la diagonal usando i++ y j--. En cada paso, si el valor de la matriz es 1, se suma al contador. Si aparece un 0, el contador se reinicia. Mientras tanto, se guarda el valor más alto que haya alcanzado ese contador en la variable max, que representa la secuencia más larga encontrada. Al finalizar todos los recorridos, el programa imprime en pantalla ese número máximo.

## Cómo compilar y ejecutar?

Para compilar el programa, se debe utilizar el archivo T1_C31049.c. Con el compilador GCC, se puede ejecutar el siguiente comando desde una terminal de la siguiente forma: gcc T1_C31049.c -o T1_C31049
Esto generará un ejecutable llamado T1_C31049. Luego, para ejecutar el programa, solo hace falta tener el archivo matriz.txt en la misma carpeta, y escribir en la terminal: ./T1_C31049
El programa se encargará de leer la matriz, verificar que esté bien formada y mostrar el resultado de la secuencia más larga de 1s encontrados siguiendo la lógica de las diagonales.


## Información importante adicional

Es necesario que el archivo sea nombrado como matriz.txt, todo en minuscula porque asi fue declarado dentro del codigo. Ademas, debe contener una matriz cuadrada en la cual todos los valores deben ser 0s Y 1s, sin letras, símbolos ni otros números. Si se detecta algún problema, el programa mostrará un mensaje de error y se detendrá. También es importante no dejar líneas vacías ni espacios de más al final de las filas, ya que eso puede generar errores en la lectura.


## EJEMPLOS

## Ejemplo 1

<img width="541" alt="Image" src="https://github.com/user-attachments/assets/3fbba307-6e86-4bfe-b9fa-a9e463becf2e" />

## Ejemplo 2

<img width="447" alt="Image" src="https://github.com/user-attachments/assets/a784879b-1383-452f-b8c3-63afb2c6b44f" />

## Ejemplo 3

<img width="460" alt="Image" src="https://github.com/user-attachments/assets/3b890374-5def-42d5-bb5b-a5f11ddb6f1b" />
