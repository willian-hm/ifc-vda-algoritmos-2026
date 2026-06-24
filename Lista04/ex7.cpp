#include <stdio.h>

main()
{
    int voto;
    int cand1 = 0;
    int cand2 = 0;
    int cand3 = 0;
    int cand4 = 0;
    int nulo = 0;
    int branco = 0;

    printf("Digite os votos (0 para encerrar):\n");
    scanf("%i", &voto);

    while (voto != 0)
    {
        if (voto == 1)
            cand1++;
        else if (voto == 2)
            cand2++;
        else if (voto == 3)
            cand3++;
        else if (voto == 4)
            cand4++;
        else if (voto == 5)
            nulo++;
        else if (voto == 6)
            branco++;

        scanf("%i", &voto);
    }

    printf("\nResultado da eleicao:\n");
    printf("Candidato 1: %i votos\n", cand1);
    printf("Candidato 2: %i votos\n", cand2);
    printf("Candidato 3: %i votos\n", cand3);
    printf("Candidato 4: %i votos\n", cand4);
    printf("Votos nulos: %i\n", nulo);
    printf("Votos em branco: %i\n", branco);
}