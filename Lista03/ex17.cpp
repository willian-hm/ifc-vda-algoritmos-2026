#include <stdio.h>

main () {
    float valor;
    float total;
    int estado;

    printf("Valor do produto: ");
    scanf("%f", &valor);

    printf("Estado (1-MG 2-SP 3-RJ 4-MS): ");
    scanf("%i", &estado);

    if (estado == 1) {
        total = valor + (valor * 0.07);
    }
    else if (estado == 2) {
        total = valor + (valor * 0.12);
    }
    else if (estado == 3) {
        total = valor + (valor * 0.15);
    }
    else if (estado == 4) {
        total = valor + (valor * 0.08);
    }
    else {
        printf("Estado invalido");
    }

    if (estado >= 1 && estado <= 4) {
        printf("Preco final: R$ %.2f", total);
    }
}