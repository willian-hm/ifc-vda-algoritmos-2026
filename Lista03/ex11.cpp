#include <stdio.h>

main() {
    int cpf;
    int dependentes;
    float salarioMinimo;
    float renda;
    float desconto;
    float rendaLiquida;
    float imposto;

    printf("Salario minimo atual: ");
    scanf("%f", &salarioMinimo);

    printf("CPF: ");
    scanf("%i", &cpf);

    printf("Dependentes: ");
    scanf("%i", &dependentes);

    printf("Renda mensal: ");
    scanf("%f", &renda);

    if (dependentes > 3) {
        dependentes = 3;
    }

    desconto = dependentes * (salarioMinimo * 0.05);

    rendaLiquida = renda - desconto;

    if (rendaLiquida <= 2 * salarioMinimo) {
        imposto = 0;
    } else if (rendaLiquida <= 3 * salarioMinimo) {
        imposto = rendaLiquida * 0.05;
    } else if (rendaLiquida <= 5 * salarioMinimo) {
        imposto = rendaLiquida * 0.10;
    } else if (rendaLiquida <= 7 * salarioMinimo) {
        imposto = rendaLiquida * 0.15;
    } else {
        imposto = rendaLiquida * 0.20;
    }

    printf("\nCPF: %i\n", cpf);
    printf("Renda liquida: %.2f\n", rendaLiquida);
    printf("Imposto: %.2f\n", imposto);
}