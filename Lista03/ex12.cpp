#include <stdio.h>

main () {
    float salario;
    float salarioR;
    float taxa;
    char nome[50];

    printf ("nome: ");
    scanf ("%s", &nome);
    
    printf ("salario: ");
    scanf ("%f", &salario);

    if (salario <= 300) {
        salarioR = salario + (salario*0.1);
        taxa = 10;
    } else if (salario <= 600) {
        salarioR = salario + (salario*0.11);
        taxa = 11;
    } else if (salario <= 900) {
        salarioR = salario + (salario*0.12);
        taxa = 12;
    } else if (salario <= 1500) {
        salarioR = salario + (salario*0.06);
        taxa = 6;
    } else if (salario <= 2000) {
        salarioR = salario + (salario*0.03);
        taxa = 3;
    } else {
        salarioR = salario + (salario*0);
        taxa = 0;
    }

    printf("\nUsuario: %s\n", nome);
    printf("\nsalario atual: R$ %.2f\n", salario);
    printf("\ntaxa de reajuste:  %.2f %%\n", taxa);
    printf("\nsalario reajustado: R$ %.2f\n", salarioR);
}