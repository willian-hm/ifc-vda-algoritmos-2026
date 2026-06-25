#include <stdio.h>

main()
{
    int a;
    int i;
    int neg = 0;
    int pos = 0;
    int imp = 0;
    int par = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Digite um numero:\n");
        scanf("%i", &a);

        if (a > 0){
            pos++;
        }else{
            neg++;
        }
        if (a % 2 == 0){
            par++;
        }else{
            imp++;
        }
    }

    printf("Par: %i\n", par);
    printf("Impar: %i\n", imp);
    printf("Positivo: %i\n", pos);
    printf("Negativo: %i\n", neg);
}