#include <stdio.h>

main()
{
    int numero;
    int i;

    printf("Digite um numero inteiro: ");
    scanf("%i", &numero);

    printf("Divisores de %i:\n", numero);

    for (i = 1; i <= numero; i++)
    {
        if (numero % i == 0)
        {
            printf("%i ", i);
        }
    }
}