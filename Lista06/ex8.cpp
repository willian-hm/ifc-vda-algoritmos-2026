#include <stdio.h>

main()
{
    int opcao;
    float saldo = 0.0, valor;

    do
    {
        printf("\n=== MENU ===\n");
        printf("1 - Consultar saldo\n");
        printf("2 - Saque\n");
        printf("3 - Deposito\n");
        printf("4 - Sair\n");
        printf("Opcao: ");
        scanf("%i", &opcao);

        if (opcao == 1)
        {
            printf("Saldo atual: R$ %.2f\n", saldo);
        }
        else if (opcao == 2)
        {
            printf("Valor do saque: R$ ");
            scanf("%f", &valor);

            if (valor <= saldo)
            {
                saldo -= valor;
                printf("Saque realizado!\n");
                printf("Saldo atual: R$ %.2f\n", saldo);
            }
            else
            {
                printf("Saldo insuficiente!\n");
            }
        }
        else if (opcao == 3)
        {
            printf("Valor do deposito: R$ ");
            scanf("%f", &valor);

            saldo += valor;

            printf("Deposito realizado!\n");
            printf("Saldo atual: R$ %.2f\n", saldo);
        }
        else if (opcao == 4)
        {
            printf("Programa encerrado.\n");
        }
        else
        {
            printf("Opcao invalida!\n");
        }

    } while (opcao != 4);
}