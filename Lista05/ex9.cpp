#include <stdio.h>

main()
{
    float nota1;
    float nota2;
    float media;
    int i;

    for (i = 1; i <= 6; i++)
    {
        printf("\nAluno %i\n", i);

        printf("Nota 1: ");
        scanf("%f", &nota1);

        printf("Nota 2: ");
        scanf("%f", &nota2);

        media = (nota1 + nota2) / 2;

        printf("Media: %.2f\n", media);

        if (media <= 5.0)
        {
            printf("Situacao: Reprovado\n");
        }
        else if (media < 7.0)
        {
            printf("Situacao: Recuperacao\n");
        }
        else
        {
            printf("Situacao: Aprovado\n");
        }
    }
}