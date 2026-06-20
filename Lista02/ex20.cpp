#include <stdio.h>

main() {
    float reais;
    float dolar;

    printf("Digite o valor em reais:\n");
    scanf("%f", &reais);

    dolar = reais / 6.1;

    printf("O valor em dolares e de: %.2f\n", dolar);
}