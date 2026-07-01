#include <stdio.h>

main()
{
    int idade;
    float peso;

    float faixa1 = 0;
    float faixa2 = 0;
    float faixa3 = 0;
    float faixa4 = 0;

    int i;

    for (i = 0; i<15; i++) {
        printf("Digite a idade: \n");
        scanf("%i", &idade);
        printf("Digite o peso: \n");
        scanf("%f", &peso);

        if (idade >= 1 && idade <= 10) {
            faixa1 += peso;
        } else if (idade >= 11 && idade <= 20) {
            faixa2 += peso;
        } else if (idade >= 21 && idade <= 30) {
            faixa3 += peso;
        } else if (idade > 30) {
            faixa4 += peso;
        }
    }

    // média de peso por faixa etária
    printf("Faixa 1: %.2f\n", faixa1/15);
    printf("Faixa 2: %.2f\n", faixa2/15);
    printf("Faixa 3: %.2f\n", faixa3/15);
    printf("Faixa 4: %.2f\n", faixa4/15);
    
}