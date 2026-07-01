#include <stdio.h>

main()
{
    int numeros[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o %i numero: ", i + 1);
        scanf("%i", &numeros[i]);
    }

    printf("\nNumeros em ordem inversa:\n");

    for (i = 4; i >= 0; i--)
    {
        printf("%i\n", numeros[i]);
    }
}