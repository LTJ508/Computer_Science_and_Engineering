#include <stdio.h>
#include <math.h>

int main()
{
    int x = 3, y = 2;
    double result;

    result = (pow(x, 4)) + (2 * x * y) - (pow(x, (1.0/2.0)) * y);

    printf("F(x,y) = %0.2lf", result);

    return 0;
}
