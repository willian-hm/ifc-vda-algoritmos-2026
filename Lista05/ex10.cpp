#include <stdio.h>

main()
{
    int time;
    int jogador;

    float peso;
    int idade;

    float soma_peso_time;
    int soma_idade_time;

    float soma_peso_total = 0;
    int soma_idade_total = 0;

    float media_peso_time;
    float media_idade_time;

    float media_peso_total;
    float media_idade_total;

    for (time = 1; time <= 40; time++)
    {
        soma_peso_time = 0;
        soma_idade_time = 0;

        printf("\nTIME %i\n", time);

        for (jogador = 1; jogador <= 23; jogador++)
        {
            printf("Peso do jogador %i: ", jogador);
            scanf("%f", &peso);

            printf("Idade do jogador %i: ", jogador);
            scanf("%i", &idade);

            soma_peso_time += peso;
            soma_idade_time += idade;

            soma_peso_total += peso;
            soma_idade_total += idade;
        }

        media_peso_time = soma_peso_time / 23;
        media_idade_time = (float)soma_idade_time / 23;

        printf("\nMedia de peso do time %i: %.2f", time, media_peso_time);
        printf("\nMedia de idade do time %i: %.2f\n", time, media_idade_time);
    }

    media_peso_total = soma_peso_total / (40 * 23);
    media_idade_total = (float)soma_idade_total / (40 * 23);

    printf("\n================================");
    printf("\nMEDIA GERAL DO CAMPEONATO");
    printf("\nPeso medio: %.2f", media_peso_total);
    printf("\nIdade media: %.2f", media_idade_total);
}