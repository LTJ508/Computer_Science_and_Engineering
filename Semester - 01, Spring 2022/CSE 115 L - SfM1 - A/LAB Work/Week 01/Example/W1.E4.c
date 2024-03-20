/*Write a program that reads in the radius of a circle and prints the circle’s diameter, circumference and area.*/

#include <stdio.h>

int main()
{
    float const PI = 3.142;
    float radius;
    float area, circumference, diameter;

    printf("Please enter the radius of a circle: ");
    scanf("%f", &radius);

    diameter = 2 * radius;
    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("\nThe Diameter is: %0.2f\n", diameter);
    printf("The Circumference is: %0.2f\n", circumference);
    printf("The area is: %0.2f\n", area);

    return 0;
}
