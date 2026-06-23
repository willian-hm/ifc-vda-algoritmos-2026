#include <stdio.h>

main() {
    int n;

    printf("Digite um numero: ");
    scanf ("%i", &n);

    if (n % 2 == 0) {
        printf("numero par");    
    } else {
        printf("numero impar");
    }
}