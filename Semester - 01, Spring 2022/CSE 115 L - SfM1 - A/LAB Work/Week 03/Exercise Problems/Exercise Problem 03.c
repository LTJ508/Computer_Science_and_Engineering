/*3.	Compute the volume of a sphere; read the radius from user.*/

#include <stdio.h>
#define PI 3.1416

int main()
{
    double radius, sa;

    printf("Please enter the radius of the Sphere: ");
    scanf("%lf", &radius);

    sa = 4 * PI * radius * radius;

    printf("\nThe surface area of a Sphere is: %0.2lf\n", sa);

    return 0;
}
