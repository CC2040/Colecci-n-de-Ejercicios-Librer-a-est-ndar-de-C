#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "Funciones comunes.h"


void func_part1_1() {
    // Declarar un número negativo
    int num = -10;

    // Obtener el valor absoluto utilizando abs()
    int abs_num = abs(num);

    printf("El valor absoluto de %d es %d\n", num, abs_num);

}

void func_part1_2() {
    srand(time(0));

    int random_number = rand();
    printf("Numero aleatorio: %d\n", random_number);

}