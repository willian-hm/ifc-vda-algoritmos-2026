#include <stdio.h>

main()
{
    int idade;
    float faixa1 = 0;
    float faixa2 = 0;
    float faixa3 = 0;
    float faixa4 = 0;
    float faixa5 = 0;
    int i;

    for (i = 0; i < 15; i++)
    {
        printf("Digite a idade: \n");
        scanf("%i", &idade);

        if (idade >= 1 && idade <= 15)
        {
            faixa1++;
        }
        else if (idade >= 16 && idade <= 30)
        {
            faixa2++;
        }
        else if (idade >= 31 && idade <= 45)
        {
            faixa3++;
        }
        else if (idade >= 46 && idade <= 60)
        {
            faixa4++;
        }
        else if (idade >= 61)
        {
            faixa5++;
        }
    }

    printf("Faixa 1: %.0f e %.2f %%\n", faixa1, (faixa1 / 15) * 100);
    printf("Faixa 2: %.0f e %.2f %%\n", faixa2, (faixa2 / 15) * 100);
    printf("Faixa 3: %.0f e %.2f %%\n", faixa3, (faixa3 / 15) * 100);
    printf("Faixa 4: %.0f e %.2f %%\n", faixa4, (faixa4 / 15) * 100);
    printf("Faixa 5: %.0f e %.2f %%\n", faixa5, (faixa5 / 15) * 100);
}