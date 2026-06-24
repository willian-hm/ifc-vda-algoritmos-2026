#include <stdio.h>

main () {
    int i;
    int n;
    int lim;
    
    printf ("Digite o numero da tabuada: ");
    scanf("%i", &n);

    printf("Digite o limite: ");
    scanf("%i", &lim);

    printf("| Tabuada do %i |\n", n);
    for (i=lim;i>=0;i--) {
        printf ("%i x %i = %i\n", n, i, n*i);
    }
}