#include <stdio.h>

main()
{
    float salario;
    float novoSalario;
    int i;

    for (i = 1; i <= 10; i++)
    {
        printf("Digite o salario da pessoa %i: ", i);
        scanf("%f", &salario);

        novoSalario = salario + (salario * 0.10);

        printf("Novo salario: R$ %.2f\n\n", novoSalario);
    }
}