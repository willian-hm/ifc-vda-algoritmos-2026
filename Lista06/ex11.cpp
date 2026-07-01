#include <stdio.h>
#include <string.h>

main()
{
    char nome[50];
    char maisJovem[50];
    int idade;
    int menorIdade;
    int i;

    for (i = 1; i <= 5; i++)
    {
        printf("Digite o nome da pessoa %i: ", i);
        scanf("%s", nome);

        printf("Digite a idade: ");
        scanf("%i", &idade);

        if (i == 1)
        {
            menorIdade = idade;
            strcpy(maisJovem, nome);
        }
        else if (idade < menorIdade)
        {
            menorIdade = idade;
            strcpy(maisJovem, nome);
        }
    }

    printf("\nPessoa mais jovem: %s\n", maisJovem);
    printf("Idade: %i anos\n", menorIdade);
}