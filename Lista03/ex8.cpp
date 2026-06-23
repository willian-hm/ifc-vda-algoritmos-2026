#include <stdio.h>

main()
{
    int a, b, c;
    int i, j, aux;

    printf("Digite 1 valor: ");
    scanf("%i", &a);

    printf("Digite 1 valor: ");
    scanf("%i", &b);

    printf("Digite 1 valor: ");
    scanf("%i", &c);

    if (a>b) {
        aux = a;
        a = b;
        b = aux;
    }

    if (a>c) {
        aux = a;
        a = c;
        c = aux;
    }

    if (b > c) {
        aux = b;
        b = c;
        c = aux;
    }

    printf("Ordem Crescente: %i %i %i", a, b, c);
}