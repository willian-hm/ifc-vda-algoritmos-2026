#include <stdio.h>
#include <math.h>
#define PI 3.14

main() {
    float r, h;
    float area = 0;

    printf("Informe o raio da base do cone:\n");
    scanf("%f", &r);
    printf("Informe a altura do cone:\n");
    scanf("%f", &h);

    area = (PI * pow(r,2) * h)/3;
    printf("A área do cone é: %.2f\n", area);
}