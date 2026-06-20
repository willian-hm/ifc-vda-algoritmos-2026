#include <stdio.h>
#include <math.h>
#define PI 3.14

main() {
    float raio;
    float area = 0;

    printf("Informe o raio para calcular a área da esfera:\n");
    scanf("%f", &raio);

    float area = 4 * PI * pow(raio, 2);
    printf("A área da esfera é: %.2f\n", area);
}