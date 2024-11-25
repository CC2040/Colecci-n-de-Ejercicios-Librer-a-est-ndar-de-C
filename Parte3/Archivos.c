#include <stdio.h>
#include "Archivos.h"


void func_parte3_1() {
    printf("3) Parte de archivos\n");
    FILE *file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("El archivo no se pudo abrir.\n");
        return ;
    }

    // Cerrar el archivo al final
    fclose(file);

}

void func_parte3_2() {
    FILE *file = fopen("file.txt", "w");
    if (file == NULL) {
        printf("El archivo no se pudo abrir para escritura.\n");
        return ;
    }

    fprintf(file, "Hola,mundo!\n");

    // Cerrar el archivo después de escribir
    fclose(file);

    // Abrir de nuevo para leer
    file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("El archivo no se pudo abrir para lectura.\n");
        return ;
    }

    char buffer[50];
    fscanf(file, "%s", buffer);

    printf("Leido del archivo: %s\n", buffer);

    // Cerrar el archivo después de leer
    fclose(file);
}
