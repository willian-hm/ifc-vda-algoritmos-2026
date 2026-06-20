#include <stdio.h>

main() {
    float combustivel;
    float distancia;
    float consumo;

    printf("Digite a quantidade de combustivel em litros:\n");
    scanf("%f", &combustivel);
    printf("Digite a distancia percorrida em km:\n");
    scanf("%f", &distancia);

    consumo = distancia / combustivel;

    printf("O consumo medio do veiculo e de: %.2f km/l\n", consumo);
}