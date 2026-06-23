#include <stdio.h>

main () {
    float velocidade;
    float multa;

    printf("Velocidade do veiculo: ");
    scanf("%f", &velocidade);

    if (velocidade > 80) {

        multa = (velocidade - 80) * 5;

        printf("Multa: R$ %.2f", multa);

    } else {

        printf("Sem multa");

    }
}