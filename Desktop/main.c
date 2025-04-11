#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Inicialitzar el generador de nombres aleatoris amb la llavor basada en el temps actual
    srand(time(NULL));

    // Generar un nombre aleatori entre 0 i 99
    int random_number = rand() % 100;

    // Imprimir el nombre aleatori generat
    printf("El nombre aleatori generat és: %d\n", random_number);

    return 0;
}
