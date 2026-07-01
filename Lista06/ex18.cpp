#include <stdio.h>

main()
{
    int idade;
    float horas;

    int totalAlunos = 0;
    int menos2h = 0;

    float somaHoras = 0;

    int qtdAte12 = 0, qtd13a18 = 0, qtdMaior18 = 0;
    float somaAte12 = 0, soma13a18 = 0, somaMaior18 = 0;

    printf("Digite a idade (<= 0 para encerrar): ");
    scanf("%i", &idade);

    while (idade > 0)
    {
        printf("Horas de estudo por dia: ");
        scanf("%f", &horas);

        totalAlunos++;
        somaHoras += horas;

        if (horas < 2)
        {
            menos2h++;
        }

        if (idade <= 12)
        {
            somaAte12 += horas;
            qtdAte12++;
        }
        else if (idade <= 18)
        {
            soma13a18 += horas;
            qtd13a18++;
        }
        else
        {
            somaMaior18 += horas;
            qtdMaior18++;
        }

        printf("\nDigite a idade (<= 0 para encerrar): ");
        scanf("%i", &idade);
    }

    if (totalAlunos > 0)
    {
        printf("\nMedia geral de horas: %.2f\n",
               somaHoras / totalAlunos);

        if (qtdAte12 > 0)
        {
            printf("Media ate 12 anos: %.2f\n",
                   somaAte12 / qtdAte12);
        }

        if (qtd13a18 > 0)
        {
            printf("Media de 13 a 18 anos: %.2f\n",
                   soma13a18 / qtd13a18);
        }

        if (qtdMaior18 > 0)
        {
            printf("Media maiores de 18 anos: %.2f\n",
                   somaMaior18 / qtdMaior18);
        }

        printf("Alunos que estudam menos de 2h: %i\n",
               menos2h);
    }
    else
    {
        printf("Nenhum aluno foi informado.\n");
    }
}