#include <stdio.h>

main(){
    float num, media;
    int i;

    for (i=0; i<4; i++){
        printf("Informe o número %i:\n", i+1);
        scanf("%f", &num);
        media += num;
    }

    media = media / 4;
    printf("A média dos números informados é: %.2f\n", media);
}