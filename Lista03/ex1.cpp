#include <stdio.h>

main() {
    int n;

    printf("Digite um numero: ");
    scanf ("%i", &n);

    if (n > 0) {
        printf("numero positivo");
    } else if (n < 0) {
        printf("numero negativo");      
    } else {
        printf("numero zero");
    }
}