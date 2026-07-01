#include <stdio.h>

main() {
    int numero;
    int somaPositivos = 0;
    int somaNegativos = 0;
    int somaTotal = 0;

    for (;;) {
        printf("Digite um numero (0 para sair): ");
        scanf("%i", &numero);

        if (numero == 0) {
            break;
        }

        if (numero > 0) {
            somaPositivos += numero;
        } else if (numero < 0) {
            somaNegativos += numero;
        }

        somaTotal += numero;
    }

    printf("Soma dos positivos: %i\n", somaPositivos);
    printf("Soma dos negativos: %i\n", somaNegativos);
    printf("Soma total: %i\n", somaTotal);
}