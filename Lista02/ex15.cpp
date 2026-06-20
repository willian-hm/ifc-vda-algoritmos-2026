#include <stdio.h>

main() {
    char nome[50];
    float distancia;
    float tempo;
    float velocidade;

    printf("Informe o nome do piloto:\n");
    scanf("%s", nome);
    printf("Informe a distância percorrida (em km):\n");
    scanf("%f", &distancia);
    printf("Informe o tempo gasto (em horas):\n");
    scanf("%f", &tempo);

    velocidade = distancia / tempo;
    printf("A velocidade média do %s foi: %.2f km/h\n", nome, velocidade);
}