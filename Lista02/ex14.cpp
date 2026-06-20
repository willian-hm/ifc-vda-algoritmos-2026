#include <stdio.h>

main() {
    char nome[50];
    float salario_fixo;
    float total_vendas;
    float percentual_total_vendas;
    float salario_final;

    printf("Informe o nome do vendedor:\n");
    scanf("%s", nome);
    printf("Informe o salário fixo do vendedor:\n");
    scanf("%f", &salario_fixo);
    printf("Informe o total de vendas do vendedor:\n");
    scanf("%f", &total_vendas);
    printf("Informe o percentual sobre o total de vendas:\n");
    scanf("%f", &percentual_total_vendas);

    salario_final = salario_fixo + ((total_vendas * percentual_total_vendas) / 100);
    printf("O salário final de %s é: R$ %.2f\n", nome, salario_final);
}