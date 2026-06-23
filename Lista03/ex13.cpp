#include <stdio.h>

main () {
    char municipio[5][50];
    float temp[5];
    float soma = 0;
    int abaixo10 = 0;
    int i;

    for (i = 0; i < 5; i++) {
        printf("Municipio: ");
        scanf("%s", &municipio[i]);

        printf("Temperatura media: ");
        scanf("%f", &temp[i]);

        soma = soma + temp[i];

        if (temp[i] < 10) {
            abaixo10++;
        }
    }

    printf("\nTemperatura media da regiao: %.2f\n", soma / 5);
    printf("Municipios abaixo de 10C: %i\n", abaixo10);

    printf("\nMunicipios acima de 30C:\n");

    for (i = 0; i < 5; i++) {
        if (temp[i] > 30) {
            printf("%s\n", municipio[i]);
        }
    }
}