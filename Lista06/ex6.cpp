#include <stdio.h>

main()
{
    int canal, pessoas;
    int totalPessoas = 0;
    int canal4 = 0, canal5 = 0, canal7 = 0, canal12 = 0;

    printf("Digite o numero do canal (0 para encerrar): ");
    scanf("%i", &canal);

    while (canal != 0)
    {
        printf("Digite o numero de pessoas assistindo: ");
        scanf("%i", &pessoas);

        totalPessoas += pessoas;

        if (canal == 4)
        {
            canal4 += pessoas;
        }
        else if (canal == 5)
        {
            canal5 += pessoas;
        }
        else if (canal == 7)
        {
            canal7 += pessoas;
        }
        else if (canal == 12)
        {
            canal12 += pessoas;
        }

        printf("\nDigite o numero do canal (0 para encerrar): ");
        scanf("%i", &canal);
    }

    if (totalPessoas > 0)
    {
        printf("\nAudiencia dos canais:\n");
        printf("Canal 4: %.2f%%\n", (float)canal4 * 100 / totalPessoas);
        printf("Canal 5: %.2f%%\n", (float)canal5 * 100 / totalPessoas);
        printf("Canal 7: %.2f%%\n", (float)canal7 * 100 / totalPessoas);
        printf("Canal 12: %.2f%%\n", (float)canal12 * 100 / totalPessoas);
    }
    else
    {
        printf("\nNenhum dado foi informado.\n");
    }
}