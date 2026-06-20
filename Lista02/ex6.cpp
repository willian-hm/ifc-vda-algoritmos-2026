#include <stdio.h>
#include <math.h>
#define PI 3.14

main() {
    float r;
    float volume = 0;

    printf("Informe o raio esfera:\n");
    scanf("%f", &r);
    
    volume = (4/3) * PI * pow(r, 3);
    printf("O volume da esfera: %.2f\n", volume);
}