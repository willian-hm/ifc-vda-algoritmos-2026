#include <stdio.h>

main()
{
    int N, L;
    int i;

    printf("Digite o numero N: ");
    scanf("%i", &N);

    printf("Digite o limite L: ");
    scanf("%i", &L);

    printf("Multiplos de %d ate %d:\n", N, L);

    for (i = N; i <= L; i++)
    {
        if (i % N == 0)
        {
            printf("%i\n", i);
        }
    }
}