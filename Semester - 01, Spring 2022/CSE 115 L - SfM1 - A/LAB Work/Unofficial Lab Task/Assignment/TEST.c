#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

double FACTORIAL(double n);

int main()
{
    double n, result;

    printf("Enter a number: ");
    scanf("%lf", &n);

    while(n <= 0){
        printf("Error!! Please enter a positive number: ");
        scanf("%lf", &n);
    }

    result = FACTORIAL(n);

    printf("\n%d! equals approximately = %lf\n", (int)n, result);

    return 0;
}

double FACTORIAL(double n)
{
    double result;

    result = (pow(n,n)) * (exp(-n)) * (sqrt(((2 * n) + (1.0 / 3.0)) * PI));

    return result;
}
