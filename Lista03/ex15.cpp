#include <stdio.h>

main()
{
    float n1;
    float n2;
    float media;

    printf("Nota 1: ");
    scanf("%f", &n1);
    if (n1 < 0 || n1 > 10)
    {
        printf("Nota 1 invalida");
    }
    else
    {
        printf("Nota 2: ");
        scanf("%f", &n2);
        if (n2 < 0 || n2 > 10)
        {
            printf("Nota 2 invalida");
        }

        else
        {
            media = (n1 + n2) / 2;

            printf("Media: %.2f", media);
        }
    }
}