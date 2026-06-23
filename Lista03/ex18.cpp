#include <stdio.h>

main () {
    float a;
    float b;
    float c;

    printf("Lado 1: ");
    scanf("%f", &a);

    printf("Lado 2: ");
    scanf("%f", &b);

    printf("Lado 3: ");
    scanf("%f", &c);

    // Verifica se forma um triangulo
    if (a + b > c && a + c > b && b + c > a) {

        if (a == b && b == c) {
            printf("Triangulo Equilatero");
        }
        else if (a == b || a == c || b == c) {
            printf("Triangulo Isosceles");
        }
        else {
            printf("Triangulo Escaleno");
        }

    } else {
        printf("Nao forma um triangulo");
    }
}