#include <stdio.h>

main () {
    int op;
    float a;
    float b;

    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");

    scanf("%i", &op);

    printf("Primeiro valor: ");
    scanf("%f", &a);

    printf("Segundo valor: ");
    scanf("%f", &b);

    if (op == 1) {
        printf("Resultado: %.2f", a + b);
    }
    else if (op == 2) {
        printf("Resultado: %.2f", a - b);
    }
    else if (op == 3) {
        printf("Resultado: %.2f", a * b);
    }
    else if (op == 4) {
        printf("Resultado: %.2f", a / b);
    }
    else {
        printf("Opcao invalida");
    }
}