/*2.	Compute the volume and surface area of a cone. Read the radius and height of the cone from user.*/

#include <stdio.h>
#include <math.h>
#define PI 3.1416

int main()
{
    double radius, height, volume, surface_area;

    printf("Enter the radius of the cone: ");
    scanf("%lf", &radius);
    printf("Enter the height of the cone: ");
    scanf("%lf", &height);

    volume = PI * radius * radius * (height / 3.0);
    surface_area = PI * radius * (radius + sqrt(pow(height,2) + pow(radius,2)));

    printf("\nVolume of the Cone is: %0.2lf\nSurface area of the Cone is: %0.2lf\n", volume, surface_area);

    return 0;
}
