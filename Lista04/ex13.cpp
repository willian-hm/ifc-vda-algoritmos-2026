#include <stdio.h>

main()
{
    int N;
    int i;

    printf("Digite um numero: ");
    scanf("%i", &N);

    printf("Divisores de %i:\n", N);

    for (i = 1; i <= N; i++)
    {
        if (N % i == 0)
        {
            printf("%i\n", i);
        }
    }
}