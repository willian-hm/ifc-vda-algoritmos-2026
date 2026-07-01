#include <stdio.h>

main()
{
    int numero, i;
    long int fatorial = 1;

    printf("Digite um numero: ");
    scanf("%i", &numero);

    for (i = 1; i <= numero; i++)
    {
        fatorial = fatorial * i;
    }

    printf("Fatorial de %i = %li\n", numero, fatorial);
}