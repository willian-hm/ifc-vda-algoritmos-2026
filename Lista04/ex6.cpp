#include <stdio.h>

main()
{
    int n;
    int a1;
    int r;
    int termo;
    int soma = 0;

    printf("Numero de termos: ");
    scanf("%i", &n);

    printf("Primeiro termo: ");
    scanf("%i", &a1);

    printf("Razao: ");
    scanf("%i", &r);

    for (int i = 0; i < n; i++)
    {
        termo = a1 + i * r;
        printf("%i ", termo);
        soma = soma + termo;
    }

    printf("\nSoma = %i\n", soma);
}