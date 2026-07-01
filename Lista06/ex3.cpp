#include <stdio.h>

main()
{
    int numero;
    int maior = 0;
    int menor = 9999999999;

    for (;;)
    {
        printf("Digite um numero: ");
        scanf("%i", &numero);
        if (numero == 0)
        {
            break;
        }
        else
        {
            if (numero > maior && numero >= 0)
            {
                maior = numero;
            }
            if (numero < menor && numero >= 0)
            {
                menor = numero;
            }
            if (numero < 0)
            {
                printf("Numero invalido, digite um numero positivo ou 0 para sair\n");
            }
        }
    }

    printf("O maior numero digitado foi: %d\n", maior);
    printf("O menor numero digitado foi: %d\n", menor);
}