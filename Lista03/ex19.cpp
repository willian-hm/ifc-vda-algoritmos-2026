#include <stdio.h>

main () {
    int n;

    printf("Numero: ");
    scanf("%i", &n);

    if (n % 3 == 0 && n % 5 == 0) {
        printf("Multiplo de 3 e 5");
    }
    else if (n % 3 == 0) {
        printf("Multiplo de 3");
    }
    else if (n % 5 == 0) {
        printf("Multiplo de 5");
    }
    else {
        printf("Nao e multiplo de 3 nem de 5");
    }
}