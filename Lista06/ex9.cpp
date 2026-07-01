#include <stdio.h>

main()
{
    int numero;
    int contador = 0;
    int i;

    for (i = 1; i <= 10; i++)
    {
        printf("Digite o %i numero: ", i);
        scanf("%i", &numero);

        if (numero > 50)
        {
            contador++;
        }
    }

    printf("\nQuantidade de numeros maiores que 50: %i\n", contador);
}