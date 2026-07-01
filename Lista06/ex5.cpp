#include <stdio.h>

main() {
    int idade;
    float altura;
    float somaAltura = 0;
    int cont = 0;

    for (;;) {
        printf("Digite a idade (0 para sair): ");
        scanf("%i", &idade);

        if (idade == 0) {
            break;
        }

        printf("Digite a altura: ");
        scanf("%f", &altura);

        if (idade > 50) {
            somaAltura += altura;
            cont++;
        }
    }

    if (cont > 0) {
        printf("Média de altura de pessoas com mais de 50 anos: %f\n", somaAltura / cont);
    } else {
        printf("Nenhuma pessoa com mais de 50 anos foi registrada.\n");
    }
}