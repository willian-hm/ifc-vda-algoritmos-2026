#include <stdio.h>

main(){
    float altura;
    float somaAltura = 0;
    float maiorAltura = 0;
    int i;
    int sup2m = 0;

    for (i=0;i<20;i++) {
        printf ("Digite a altura da pessoa %i", i+1);
        scanf ("%f", altura);

        somaAltura += altura;

        if (altura > maiorAltura) {
            maiorAltura = altura;
        }

        if (altura > 2) {
            sup2m++;
        }
    }

    printf("Maior altura: %f\n", maiorAltura);
    printf("Superior a 2 metros: %f\n", sup2m);
    printf("Média de altura: %f\n", somaAltura/20);

}