/*6.	C Program to find surface area of a sphere:*/

#include <stdio.h>
#define PI 3.14

int main()
{
    double radius, sa;

    printf("Please enter the radius of Sphere: ");
    scanf("%lf", &radius);

    sa = 4.0 * PI * radius * radius;

    printf("\nThe surface area of a Sphere: %0.2lf\n", sa);

    return 0;
}
