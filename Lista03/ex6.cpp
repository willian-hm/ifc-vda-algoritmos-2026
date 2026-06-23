#include <stdio.h>

main() {
    int v[3];
    int i;
    int maior = 0;

    for (i=0;i<3;i++) {
        printf("Digite o numero %i: ", i+1);
        scanf ("%i", &v[i]);

        if (v[i]>maior) {
            maior = v[i];
        }
    }

    printf("Numero maior: %i", maior);
}