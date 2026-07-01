#include <stdio.h>

main()
{
    int idade;
    int smartphones;

    float horas;

    int totalPessoas = 0;
    int usaMais5h = 0;

    int totalSmartphones = 0;

    float somaHoras18 = 0, somaHoras35 = 0, somaHorasMaior35 = 0;
    int qtd18 = 0, qtd35 = 0, qtdMaior35 = 0;

    float mediaSmartphones;
    float porcentagem;

    printf("Digite a idade (<= 0 para encerrar): ");
    scanf("%i", &idade);

    while (idade > 0)
    {
        printf("Quantidade de smartphones na casa: ");
        scanf("%i", &smartphones);

        printf("Horas de uso por dia: ");
        scanf("%f", &horas);

        totalPessoas++;
        totalSmartphones += smartphones;

        if (horas > 5)
        {
            usaMais5h++;
        }

        if (idade <= 18)
        {
            somaHoras18 += horas;
            qtd18++;
        }
        else if (idade <= 35)
        {
            somaHoras35 += horas;
            qtd35++;
        }
        else
        {
            somaHorasMaior35 += horas;
            qtdMaior35++;
        }

        printf("\nDigite a idade (<= 0 para encerrar): ");
        scanf("%i", &idade);
    }

    if (totalPessoas > 0)
    {
        mediaSmartphones = (float)totalSmartphones / totalPessoas;
        porcentagem = (float)usaMais5h * 100 / totalPessoas;

        printf("\nMedia de smartphones por casa: %.2f\n",
               mediaSmartphones);

        if (qtd18 > 0)
        {
            printf("Media de horas (ate 18 anos): %.2f\n",
                   somaHoras18 / qtd18);
        }

        if (qtd35 > 0)
        {
            printf("Media de horas (19 a 35 anos): %.2f\n",
                   somaHoras35 / qtd35);
        }

        if (qtdMaior35 > 0)
        {
            printf("Media de horas (acima de 35 anos): %.2f\n",
                   somaHorasMaior35 / qtdMaior35);
        }

        printf("Pessoas que usam mais de 5h por dia: %i\n",
               usaMais5h);

        printf("Porcentagem: %.2f%%\n",
               porcentagem);
    }
    else
    {
        printf("Nenhum participante foi informado.\n");
    }
}