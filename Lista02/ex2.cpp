#include <stdio.h>

main() {
    
    float l, h, b;
    float area_superficial = 0;

    printf("Informe o comprimento do cubo retangular:\n");
    scanf("%f", &l);
    printf("Informe a altura do cubo retangular:\n");
    scanf("%f", &h);
    printf("Informe a largura do cubo retangular:\n");
    scanf("%f", &b);

    area_superficial = 2 * ((l * h) + (l * b) + (h * b));
    printf("A área superficial do cubo retangular: %.2f\n", area_superficial);

}