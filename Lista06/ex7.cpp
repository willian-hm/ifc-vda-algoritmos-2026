#include <stdio.h>

main()
{
    int num, i, primo;

    for (num = 100; num <= 1000; num++)
    {
        primo = 1;

        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                primo = 0;
                break;
            }
        }

        if (primo == 1)
        {
            printf("%i\n", num);
        }
    }
}