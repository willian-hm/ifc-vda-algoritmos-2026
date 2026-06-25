#include <stdio.h>

main()
{
    int numero;
    int i;
    int divisores = 0;

    printf("Digite um numero: ");
    scanf("%i", &numero);

    for (i = 1; i <= numero; i++)
    {
        if (numero % i == 0)
        {
            divisores++;
        }
    }

    if (divisores == 2)
    {
        printf("%i e primo.\n", numero);
    }
    else
    {
        printf("%i nao e primo.\n", numero);
    }

    printf("\nNumeros primos entre 1 e 100:\n");

    for (numero = 2; numero <= 100; numero++)
    {
        divisores = 0;

        for (i = 1; i <= numero; i++)
        {
            if (numero % i == 0)
            {
                divisores++;
            }
        }

        if (divisores == 2)
        {
            printf("%i ", numero);
        }
    }
}