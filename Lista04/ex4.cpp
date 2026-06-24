#include <stdio.h>

main()
{
    int lim;
    int fat = 1;
    float total = 1.0;

    printf("Informe o limite de calculo?\n");
    scanf("%d", &lim);

    if (lim > 0)
    {
        for (int i = 1; i <= lim; i++)
        {
            fat = fat * i;
            total = total + (1.0 / fat);
        }

        printf("Total eh: %f\n", total);
    }
    else
    {
        printf("Valor invalido!\n");
    }
}