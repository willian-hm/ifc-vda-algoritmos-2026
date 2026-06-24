#include <stdio.h>

main()
{
    float salario;
    float somaSalario = 0;
    float maiorSalario = 0;
    int filhos;
    int somaFilhos = 0;
    int pessoas = 0;
    int ate100 = 0;

    printf("Salario: ");
    scanf("%f", &salario);

    while (salario >= 0)
    {
        printf("Numero de filhos: ");
        scanf("%i", &filhos);

        somaSalario += salario;
        somaFilhos += filhos;
        pessoas++;

        if (salario > maiorSalario)
        {
            maiorSalario = salario;
        }

        if (salario <= 100)
        {
            ate100++;
        }

        printf("Salario: ");
        scanf("%f", &salario);
    }

    if (pessoas > 0)
    {
        printf("\nMedia dos salarios: %.2f\n", somaSalario / pessoas);
        printf("Media do numero de filhos: %.2f\n", (float)somaFilhos / pessoas);
        printf("Maior salario: %.2f\n", maiorSalario);
        printf("Percentual com salario ate R$100,00: %.2f%%\n",
               (float)ate100 * 100 / pessoas);
    }
    else
    {
        printf("Nenhum dado foi informado.\n");
    }
}