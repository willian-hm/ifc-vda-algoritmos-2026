#include <stdio.h>

main() {
    int ano;
    int idade;

    printf("Em qual ano voce nasceu?\n");
    scanf("%i", &ano);

    idade = 2026 - ano;

    printf("Sua idade e de %i anos\n", idade);

}