#include <stdio.h>

main(){
    float produto;
    float parcela;

    printf("Digite o valor de um produto\n");
    scanf("%f", &produto);

    parcela = produto / 5;
    printf("O valor da parcela e de: R$ %.2f\n", parcela);
}