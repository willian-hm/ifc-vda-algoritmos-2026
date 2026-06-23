#include <stdio.h>

main()
{
    int v[3];
    int i;
    int maior = 0;
    int maior2 = 0;

    for (i = 0; i < 3; i++)
    {
        printf("Digite o numero %i: ", i + 1);
        scanf("%i", &v[i]);

        if (v[i] > maior)
        {
            maior2 = maior;
            maior = v[i];
        }
        else if (v[i] > maior2)
        {
            maior2 = v[i];
        }
    }

    printf("Numeros maiores: %i e %i\n", maior, maior2);
    printf("Soma: %i\n", maior + maior2);
}