#include <stdio.h>

main()
{
    int valor;
    int i;
    int soma = 0;
    int quantidade = 0;
    float media;

    for (i = 1; i <= 10; i++)
    {
        printf("Digite o %i valor: ", i);
        scanf("%i", &valor);

        if (valor > 10)
        {
            soma += valor;
            quantidade++;
        }
    }

    if (quantidade > 0)
    {
        media = (float)soma / quantidade;
        printf("\nMedia dos valores maiores que 10: %.2f\n", media);
    }
    else
    {
        printf("\nNao foi digitado nenhum valor maior que 10.\n");
    }
}