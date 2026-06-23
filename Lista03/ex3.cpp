#include <stdio.h>

main() {
    int anoAt, anoNas, idade;

    printf("Digite o ano que estamos: ");
    scanf("%i", &anoAt);

    printf("Digite o ano que voce nasceu: ");
    scanf("%i", &anoNas);

    idade = anoAt - anoNas;

    if (idade > 16) {
        printf("Voce pode votar esse ano!");
    } else {
        printf("Voce nao pode votar esse ano! Menor de idade");
    }
}