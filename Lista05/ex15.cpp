#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
    int dado;
    int tentativas = 0;

    srand(time(NULL));

    do
    {
        dado = rand() % 6 + 1;
        tentativas++;

        printf("Tentativa %i: %i\n", tentativas, dado);

    } while (dado != 6);

    printf("\nVoce tirou 6!");
    printf("\nTentativas necessarias: %i", tentativas);
}