#include <stdio.h>
#include <string.h>

main()
{
    char nome[50];
    char maisNova[50];
    int idade;
    int menorIdade;
    int somaIdades = 0;
    int i;
    float media;

    for (i = 1; i <= 10; i++)
    {
        printf("Digite o nome da pessoa %i: ", i);
        scanf("%s", nome);

        printf("Digite a idade: ");
        scanf("%i", &idade);

        somaIdades += idade;

        if (i == 1)
        {
            menorIdade = idade;
            strcpy(maisNova, nome);
        }
        else if (idade < menorIdade)
        {
            menorIdade = idade;
            strcpy(maisNova, nome);
        }
    }

    media = (float)somaIdades / 10;

    printf("\nMedia das idades: %.2f\n", media);
    printf("Pessoa mais nova: %s\n", maisNova);
    printf("Idade: %i anos\n", menorIdade);
}