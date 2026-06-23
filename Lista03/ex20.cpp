#include <stdio.h>

main () {
    float compra;
    float frete;
    float total;

    printf("Valor da compra: ");
    scanf("%f", &compra);

    if (compra > 200) {
        frete = 0;
    }
    else if (compra >= 100) {
        frete = 15;
    }
    else {
        frete = 30;
    }

    total = compra + frete;

    printf("Frete: R$ %.2f\n", frete);
    printf("Total: R$ %.2f\n", total);
}