/*5.	Read a temperature in Celsius and print its Fahrenheit equivalent (Hint: C=(F-32)*5/9)*/

#include <stdio.h>

int main()
{
    double celsius, fahrenheit;

    printf("Please enter temperature in Celsius: ");
    scanf("%lf", &celsius);

    fahrenheit = celsius * (9.0/5.0) + 32;

    printf("The temperature in Fahrenheit is: %0.2lf\n", fahrenheit);

    return 0;
}

