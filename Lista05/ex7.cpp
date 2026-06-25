#include <stdio.h>

main()
{
    float salario_bruto;
    int horas_trabalhadas;
    float imposto = 0;
    float encargos = 0;
    float adicional = 0;
    float salario_liquido;
    float valor_hora;

    printf("Salario bruto: ");
    scanf("%f", &salario_bruto);

    printf("Horas trabalhadas no mes: ");
    scanf("%i", &horas_trabalhadas);

    if (salario_bruto < 800)
    {
        imposto = 0;
        encargos = 0;
    }
    else if (salario_bruto <= 1600)
    {
        imposto = salario_bruto * 0.08;
        encargos = salario_bruto * 0.05;
    }
    else
    {
        imposto = salario_bruto * 0.15;
        encargos = salario_bruto * 0.07;
    }

    if (horas_trabalhadas > 160)
    {
        valor_hora = salario_bruto / 160;
        adicional = (horas_trabalhadas - 160) * valor_hora * 0.5;
    }

    salario_liquido = salario_bruto - imposto - encargos + adicional;

    printf("\nImposto de renda: R$ %.2f", imposto);
    printf("\nEncargos: R$ %.2f", encargos);
    printf("\nAdicional de horas extras: R$ %.2f", adicional);
    printf("\nSalario liquido: R$ %.2f\n", salario_liquido);
}