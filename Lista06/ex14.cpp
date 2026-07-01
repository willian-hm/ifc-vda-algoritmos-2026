#include <stdio.h>

main()
{
    int numero;
    int i;
    int todosPares = 1;

    for (i = 1; i <= 5; i++)
    {
        printf("Digite o %i numero: ", i);
        scanf("%i", &numero);

        if (numero % 2 != 0)
        {
            todosPares = 0;
        }
    }

    if (todosPares == 1)
    {
        printf("\nTodos os numeros sao pares.\n");
    }
    else
    {
        printf("\nNem todos os numeros sao pares.\n");
    }
}