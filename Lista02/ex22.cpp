#include <stdio.h>

main() {
    int idade;
    int dias;

    printf("Qual a sua idade?\n");
    scanf("%i", &idade);

    dias = idade * 365;

    printf("Voce tem aproximadamente %i dias de vida", dias);
}