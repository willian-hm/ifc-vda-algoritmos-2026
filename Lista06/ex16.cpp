#include <stdio.h>

main()
{
    float preco;
    float total = 0;
    int i;

    for (i = 1; i <= 10; i++)
    {
        printf("Digite o preco do produto %i: ", i);
        scanf("%f", &preco);

        total += preco;
    }

    printf("\nValor total da compra: R$ %.2f\n", total);
}