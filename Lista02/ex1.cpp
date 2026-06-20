#include <stdio.h>
#define PI 3.14

main() {
    
    float r, h;
    float volume = 0;

    printf("Informe o raio da base do cilindro:\n");
    scanf("%f", &r);
    printf("Informe a altura do cilindro:\n");
    scanf("%f", &h);

    volume = 2 * PI * r * h;
    printf("O volume do cilindro: %.2f\n", volume);

}