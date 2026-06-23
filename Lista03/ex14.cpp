#include <stdio.h>

main () {
    int a;
    int b;
    int diferenca;

    printf("Primeiro numero: ");
    scanf("%i", &a);

    printf("Segundo numero: ");
    scanf("%i", &b);

    if (a > b) {
        diferenca = a - b;

        printf("Maior: %i\n", a);
        printf("Diferenca: %i\n", diferenca);
    } else {
        diferenca = b - a;

        printf("Maior: %i\n", b);
        printf("Diferenca: %i\n", diferenca);
    }
}