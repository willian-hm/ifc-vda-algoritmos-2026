#include <stdio.h>

main () {
    float salario;
    float emprestimo;
    float parcela;
    int parcelas;

    printf("Salario: ");
    scanf("%f", &salario);

    printf("Valor do emprestimo: ");
    scanf("%f", &emprestimo);

    printf("Numero de parcelas: ");
    scanf("%i", &parcelas);

    parcela = emprestimo / parcelas;

    if (parcela <= salario * 0.30) {
        printf("Emprestimo aprovado");
    }
    else {
        printf("Emprestimo negado");
    }
}