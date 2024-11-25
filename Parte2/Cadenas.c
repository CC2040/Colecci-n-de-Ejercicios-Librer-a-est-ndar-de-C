#include <string.h>
#include <stdio.h>
#include "Cadenas.h"

void func_parte2_1() {
    char str1[] = "Hola";
    char str2[] = "Mundo";

    int comparison = strcmp(str1, str2);
    printf("2) Parte de Cadenas\n");

    if (comparison == 0) {
        printf("Las cadenas son iguales.\n");
    } else {
        printf("Las cadenas son diferentes.\n");
    }
}


void func_parte2_2() {
    char str[] = "Hola mundo";

    int length = strlen(str);

    printf("La longitud de '%s' es: %d\n", str, length);
}