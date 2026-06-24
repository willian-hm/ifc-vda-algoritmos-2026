#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
    int secreto, chute;

    // gera número aleatório
    srand(time(NULL));
    secreto = rand() % 100 + 1;

    printf("Jogo de adivinhacao!\n");
    printf("Tente adivinhar o numero entre 1 e 100.\n");

    do
    {
        printf("Seu chute: ");
        scanf("%i", &chute);

        if (chute > secreto)
        {
            printf("Menor!\n");
        }
        else if (chute < secreto)
        {
            printf("Maior!\n");
        }
        else
        {
            printf("Parabens! Voce acertou!\n");
        }

    } while (chute != secreto);
}