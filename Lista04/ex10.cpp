#include <stdio.h>

main()
{
    int n;
    int maior, menor;
    int primeiro = 1;

    printf("Digite um numero (-1 para encerrar): ");
    scanf("%i", &n);

    while (n != -1)
    {
        if (primeiro == 1)
        {
            maior = n;
            menor = n;
            primeiro = 0;
        }
        else
        {
            if (n > maior)
                maior = n;

            if (n < menor)
                menor = n;
        }

        printf("Digite um numero (-1 para encerrar): ");
        scanf("%i", &n);
    }

    if (primeiro == 0)
    {
        printf("Maior numero: %i\n", maior);
        printf("Menor numero: %i\n", menor);
    }
    else
    {
        printf("Nenhum numero foi digitado.\n");
    }
}