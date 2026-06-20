#include <stdio.h>

main() {
    int n1, n2;
    int soma, subtracao, multiplicacao;
    float divisao;

    printf("Informe o primeiro número inteiro:\n");
    scanf("%d", &n1);

    printf("Informe o segundo número inteiro:\n");
    scanf("%d", &n2);

    soma = n1 + n2;
    subtracao = n1 - n2;
    multiplicacao = n1 * n2;
    divisao = (float)n1 / n2;

    printf("A soma dos números é: %d\n", soma);
    printf("A subtração dos números é: %d\n", subtracao);
    printf("A multiplicação dos números é: %d\n", multiplicacao);
    printf("A divisão dos números é: %.2f\n", divisao);

}