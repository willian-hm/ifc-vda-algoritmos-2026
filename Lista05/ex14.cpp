#include <stdio.h>

main()
{
    int celsius;
    float fahrenheit;

    printf("Celsius\tFahrenheit\n");

    for (celsius = 0; celsius <= 100; celsius++)
    {
        fahrenheit = celsius * 9.0 / 5.0 + 32;

        printf("%i\t%.1f\n", celsius, fahrenheit);
    }
}