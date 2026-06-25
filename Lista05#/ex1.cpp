#include <stdio.h>

main () {
    int i;
    int soma = 0;

    for (i=0;i<=100;i++) {
        soma += i;
    }

    printf ("%i\n", soma);
}