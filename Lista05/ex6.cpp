#include <stdio.h>

main() {
    float populacao_a = 90.0; 
    float taxa_a = 1.035; 
    float populacao_b = 140.0; 
    float taxa_b = 1.01; 

    int anos = 0;

    while (populacao_a < populacao_b) {
        populacao_a = populacao_a * taxa_a;
        populacao_b = populacao_b * taxa_b;
        anos++;
    }

    printf("Serao necessarios %i anos para que a populacao do pais A ultrapasse a populacao do pais B.\n", anos);
}