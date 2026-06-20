#include <stdio.h>

main() {
    float prestacao, taxa, prestacao_atrasada;
    int num_dias_atraso;

    printf("Informe o valor da prestação normal:\n");
    scanf("%f", &prestacao);

    printf("Informe o percentual de juros por dia:\n");
    scanf("%f", &taxa);

    printf("Informe o número de dias em atraso:\n");
    scanf("%d", &num_dias_atraso);

    prestacao_atrasada = prestacao + (prestacao * (taxa / 100) * num_dias_atraso);

    printf("O valor da prestação em atraso é: %.2f\n", prestacao_atrasada);
}