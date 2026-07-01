#include <stdio.h>

main()
{
    int idade;
    int frutas;
    int refrigerante;

    int totalPessoas = 0;
    int refTodoDiaSemFruta = 0;
    int frutasMais3 = 0;

    int qtd12 = 0, qtd30 = 0, qtdMaior30 = 0;

    int somaFrutas12 = 0, somaFrutas30 = 0, somaFrutasMaior30 = 0;
    int somaRef12 = 0, somaRef30 = 0, somaRefMaior30 = 0;

    float porcentagem;

    printf("Digite a idade (<= 0 para encerrar): ");
    scanf("%i", &idade);

    while (idade > 0)
    {
        printf("Dias por semana que consome frutas: ");
        scanf("%i", &frutas);

        printf("Dias por semana que consome refrigerante: ");
        scanf("%i", &refrigerante);

        totalPessoas++;

        if (refrigerante == 7 && frutas == 0)
        {
            refTodoDiaSemFruta++;
        }

        if (frutas > 3)
        {
            frutasMais3++;
        }

        if (idade <= 12)
        {
            somaFrutas12 += frutas;
            somaRef12 += refrigerante;
            qtd12++;
        }
        else if (idade <= 30)
        {
            somaFrutas30 += frutas;
            somaRef30 += refrigerante;
            qtd30++;
        }
        else
        {
            somaFrutasMaior30 += frutas;
            somaRefMaior30 += refrigerante;
            qtdMaior30++;
        }

        printf("\nDigite a idade (<= 0 para encerrar): ");
        scanf("%i", &idade);
    }

    if (totalPessoas > 0)
    {
        printf("\nMEDIAS POR FAIXA ETARIA\n");

        if (qtd12 > 0)
        {
            printf("\nAte 12 anos:\n");
            printf("Media de frutas: %.2f\n",
                   (float)somaFrutas12 / qtd12);
            printf("Media de refrigerante: %.2f\n",
                   (float)somaRef12 / qtd12);
        }

        if (qtd30 > 0)
        {
            printf("\nDe 13 a 30 anos:\n");
            printf("Media de frutas: %.2f\n",
                   (float)somaFrutas30 / qtd30);
            printf("Media de refrigerante: %.2f\n",
                   (float)somaRef30 / qtd30);
        }

        if (qtdMaior30 > 0)
        {
            printf("\nAcima de 30 anos:\n");
            printf("Media de frutas: %.2f\n",
                   (float)somaFrutasMaior30 / qtdMaior30);
            printf("Media de refrigerante: %.2f\n",
                   (float)somaRefMaior30 / qtdMaior30);
        }

        printf("\nPessoas que tomam refrigerante todos os dias e nunca comem frutas: %i\n",
               refTodoDiaSemFruta);

        porcentagem = (float)frutasMais3 * 100 / totalPessoas;

        printf("Porcentagem que consome frutas mais de 3 vezes por semana: %.2f%%\n",
               porcentagem);
    }
    else
    {
        printf("Nenhum entrevistado foi informado.\n");
    }
}