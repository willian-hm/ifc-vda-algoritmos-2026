#include <stdio.h>

main()
{
    int n;
    int soma = 0;
    int cont = 0;

    printf("Digite um numero (0 para encerrar): ");
    scanf("%i", &n);

    while (n != 0)
    {
        if (n % 2 == 0)
        {
            soma += n;
            cont++;
        }

        printf("Digite um numero (0 para encerrar): ");
        scanf("%i", &n);
    }

    if (cont > 0)
    {
        printf("Media dos pares: %.2f\n", (float)soma / cont);
    }
    else
    {
        printf("Nenhum numero par foi digitado.\n");
    }
}