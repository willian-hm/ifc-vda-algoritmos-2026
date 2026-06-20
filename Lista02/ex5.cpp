#include <stdio.h>
#include <math.h>
#define PI 3.14

main() {
    float r, h;
    float volume = 0;

    printf("Informe o raio da base do cilindro:\n");
    scanf("%f", &r);
    printf("Informe a altura do cilindro:\n");
    scanf("%f", &h);
    
    volume = PI * pow(r, 2) * h;
    printf("O volume do cilindro: %.2f\n", volume);
}