#include <stdio.h>

main() {
    int dias;
    int horas;

    printf("Digite a quantidade de dias:\n");
    scanf("%i", &dias);

    horas = dias * 24;
    printf("A quantidade de horas e de: %i\n", horas);
}