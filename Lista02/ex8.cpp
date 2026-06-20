#include <stdio.h>

main() {
    float fahrenheit, celsius;

    printf("Informe a temperatura em graus Fahrenheit:\n");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5/9;
    printf("A temperatura em graus Celsius é: %.2f\n", celsius);
}