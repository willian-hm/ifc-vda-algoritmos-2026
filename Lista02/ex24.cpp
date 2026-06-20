#include <stdio.h>

main() {
    float salarioMinimo;
    float salarioPessoa;
    float quantidade;

    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salarioMinimo);

    printf("Digite o salario da pessoa: ");
    scanf("%f", &salarioPessoa);

    quantidade = salarioPessoa / salarioMinimo;

    printf("A pessoa ganha %.2f salarios minimos.\n", quantidade);
}