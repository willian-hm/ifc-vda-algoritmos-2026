#include <stdio.h>

main() {
    int i;
    int mult5 = 100;

    for (i=100; mult5 >= -100;i--) {
        printf("%i   ", mult5);
        mult5 -= 5;
    }
}