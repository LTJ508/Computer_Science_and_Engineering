/*1.	Compute the value of 5x3-4x2+√(x)+3; read x from user*/

#include <stdio.h>
#include <math.h>

int main()
{
    double x, result;

    printf("Please Enter the Value of x: ");
    scanf("%lf", &x);

    result = (5 * (pow(x,3)) - (4 * (pow(x,2))) + sqrt(x) + 3);

    printf("The Value of the equation is: %0.2lf\n", result);

    return 0;
}
