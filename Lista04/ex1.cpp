#include <stdio.h>

main() {
    int i;
    int n = 10;

    for (i=0;i<100;i++) {
        printf ("%i \n", n);
        n += 10;
    }
}