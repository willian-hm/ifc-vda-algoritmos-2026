#include <stdio.h>

int main() {
    float n1, n2, n3;
    float media;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);

    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    printf("Digite o terceiro numero: ");
    scanf("%f", &n3);

    media = (n1 * 2 + n2 * 3 + n3 * 5) / 10;

    printf("Media ponderada: %.2f\n", media);
}