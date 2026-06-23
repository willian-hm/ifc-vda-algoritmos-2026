#include <stdio.h>

main() {
    int a,b;

    printf("Quantos gol time A fez: ");
    scanf("%i", &a);

    printf("Quantos gol time B fez: ");
    scanf("%i", &b);

    if (a>b) {
        printf("Time A vence");
    } else if (a<b) {
        printf("Time B vence");
    } else {
        printf("Empate");
    }
}