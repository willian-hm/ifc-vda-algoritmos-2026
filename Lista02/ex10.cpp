#include <stdio.h>

main() {
    float num_hora_aula, valor_hora_aula, percentual_INSS;
    float salario_bruto, salario_liquido;

    printf("Informe o número de horas-aula:\n");
    scanf("%f", &num_hora_aula);

    printf("Informe o valor da hora-aula:\n");
    scanf("%f", &valor_hora_aula);

    printf("Informe o percentual do INSS:\n");
    scanf("%f", &percentual_INSS);

    salario_bruto = num_hora_aula * valor_hora_aula;
    salario_liquido = salario_bruto - (salario_bruto * percentual_INSS);

    printf("O salário líquido do professor é: %.2f\n", salario_liquido);
}