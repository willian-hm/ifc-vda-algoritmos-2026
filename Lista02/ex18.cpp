#include <stdio.h>

main() {
    float valor_produto;
    float produto_desconto;

    printf("Digite o valor do produto:\n");
    scanf("%f", &valor_produto);

    produto_desconto = valor_produto - (valor_produto * 0.1);
    printf("O valor do produto com desconto e de: %.2f\n", produto_desconto);
}