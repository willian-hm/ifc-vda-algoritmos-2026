#include <stdio.h>

main() {
    int n = 1;
    int neg = 0;

    while (n!=0) {
        printf("Digite um numero: ");
        scanf("%i", &n);

        if (n<0){
            neg++;
        }
    }

    printf("quant. de numeros negativos: %i", neg);
}