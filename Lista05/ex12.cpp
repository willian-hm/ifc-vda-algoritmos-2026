#include <stdio.h>

main()
{
    int i;
    int soma = 0;

    for (i = 1; i < 1000; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            soma += i;
        }
    }

    printf("Soma = %i", soma);
}