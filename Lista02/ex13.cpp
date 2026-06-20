#include <stdio.h>

main () {
    float polegadaChuva;
    float mmChuva;

    printf("Informe a quantidade de chuva em polegadas:\n");
    scanf("%f", &polegadaChuva);

    mmChuva = polegadaChuva * 25.4;
    printf("A quantidade de chuva em milímetros é: %.2f mm\n", mmChuva);

}