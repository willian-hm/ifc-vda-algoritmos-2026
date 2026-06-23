#include <stdio.h>

main () {
    float n1, n2, media;

    printf("Digite nota 1\n");
    scanf ("%f", &n1);
  
    printf("Digite nota 2\n");
    scanf ("%f", &n2);

    media = (n1 + n2) / 2;

    if (media >= 7) {
        printf ("Voce passou de ano! Media: %.2f", media);
    } else {
        printf ("Voce reprovou de ano! Media: %.2f", media);
    }
}