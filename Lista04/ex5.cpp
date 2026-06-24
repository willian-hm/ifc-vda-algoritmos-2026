#include <stdio.h>

main () {
    int joao = 150;
    int ze = 110;
    int ano = 0;
    
    while (ze<joao) {
        joao = joao + 2;
        ze = ze + 3;
        ano++;
    }

    printf ("Demorou %i anos\n", ano);
}