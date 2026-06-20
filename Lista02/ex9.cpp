#include <stdio.h>

main () {
    float salario;
    float salario_final = 0;

    printf("Informe o salário do funcionário:\n");
    scanf("%f", &salario);

    salario_final = salario + (salario * 0.2375);
    printf("O salário final do funcionário é: %.2f\n", salario_final);
}