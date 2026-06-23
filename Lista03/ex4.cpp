#include <stdio.h>

main() {
    int n1, n2;

    printf("Digite o primeiro numero: ");
    scanf ("%i", &n1);
    
    printf("Digite o segundo numero: ");
    scanf ("%i", &n2);

    if (n1 > n2) {
        printf ("O numero %i e maior que %i", n1, n2);
    }
    else {
        printf ("O numero %i e maior que %i", n2, n1);
    }
}