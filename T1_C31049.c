#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int main() {
    FILE *archivo;
    int matriz[MAX][MAX];
    int filas = 0, columnas = 0;
    char linea[1024];

    archivo = fopen("matriz.txt", "r");
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }

    while (fgets(linea, sizeof(linea), archivo) != NULL) {
        int valor, col = 0;
        char *ptr = linea;

        while (sscanf(ptr, "%d", &valor) == 1) {
            if (valor != 0 && valor != 1) {
                printf("La matriz debe contener solo 0s y 1s.\n");
                fclose(archivo);
                return 1;
            }
            matriz[filas][col++] = valor;
            while (*ptr && *ptr != ' ') ptr++;
            while (*ptr == ' ') ptr++;
        }

        if (filas == 0) {
            columnas = col;
        } else if (col != columnas) {
            printf("La matriz no es cuadrada.\n");
            fclose(archivo);
            return 1;
        }

        filas++;
    }

    fclose(archivo);

    if (filas != columnas) {
        printf("La matriz no es cuadrada.\n");
        return 1;
    }

    int N = filas;

    printf("La matriz ingresada es:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    int max = 0;
    int contador = 0;

    for (int k = 0; k < 2 * N - 1; k++) {
        int i, j;

        if (k < N) {
            i = N - 1 - k;
            j = N - 1;
        } else {
            i = 0;
            j = 2 * N - 2 - k;
        }

        while (i < N && j >= 0) {
            if (matriz[i][j] == 1) {
                contador++;
                if (contador > max) {
                    max = contador;
                }
            } else {
                contador = 0;
            }
            i++;
            j--;
        }
    }

    printf("La secuencia de 1s mas larga es: %d\n", max);

    return 0;
}