#include <stdio.h>

main()
{
    int idade;
    int sexo;
    int experiencia;

    int mulheres = 0;
    int homens = 0;

    int homens_experiencia = 0;
    int soma_idade_homens_exp = 0;

    int homens_mais_45 = 0;

    int mulheres_menos_35_exp = 0;

    int menor_idade_mulher_exp = 0;

    float media_homens_exp;
    float porcentagem_homens_45;

    printf("Idade (0 para encerrar): ");
    scanf("%i", &idade);

    while (idade != 0)
    {
        printf("Sexo (M=1 / F=2): ");
        scanf("%i", &sexo);

        printf("Experiencia (S=1 / N=2): ");
        scanf("%i", &experiencia);

        if (sexo == 1)
        {
            homens++;

            if (idade > 45)
            {
                homens_mais_45++;
            }

            if (experiencia == 1)
            {
                soma_idade_homens_exp += idade;
                homens_experiencia++;
            }
        }
        else if (sexo == 2)
        {
            mulheres++;

            if (idade < 35 && experiencia == 1)
            {
                mulheres_menos_35_exp++;
            }

            if (experiencia == 1)
            {
                if (menor_idade_mulher_exp == 0 || idade < menor_idade_mulher_exp)
                {
                    menor_idade_mulher_exp = idade;
                }
            }
        }

        printf("\nIdade (0 para encerrar): ");
        scanf("%i", &idade);
    }

    if (homens_experiencia > 0)
    {
        media_homens_exp = (float)soma_idade_homens_exp / homens_experiencia;
    }
    else
    {
        media_homens_exp = 0;
    }

    if (homens > 0)
    {
        porcentagem_homens_45 = (float)homens_mais_45 * 100 / homens;
    }
    else
    {
        porcentagem_homens_45 = 0;
    }

    printf("\nNumero de mulheres: %i", mulheres);
    printf("\nNumero de homens: %i", homens);
    printf("\nMedia de idade dos homens com experiencia: %.2f", media_homens_exp);
    printf("\nPorcentagem de homens com mais de 45 anos: %.2f%%", porcentagem_homens_45);
    printf("\nMulheres com menos de 35 anos e experiencia: %i", mulheres_menos_35_exp);

    if (menor_idade_mulher_exp > 0)
    {
        printf("\nMenor idade entre mulheres com experiencia: %i", menor_idade_mulher_exp);
    }
    else
    {
        printf("\nNao ha mulheres com experiencia.");
    }
}