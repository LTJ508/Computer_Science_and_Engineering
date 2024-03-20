/*
    Write a C program using 3 functions to compute
    diameter, circumference and area of a circle
    whose radius is given by the user as the input.
*/

#include <stdio.h>

#define PI 3.1416//constant variable

double DIAMETER(double radius);//function prototype
double CIRCUMFERENCE(double radius);//function prototype
double AREA(double radius);//function prototype

int main()
{
    double radius, diameter, circumference, area;

    //taking input from user
    printf("Enter radius of the circle: ");
    scanf("%lf", &radius);

    diameter = DIAMETER(radius);//calling function and storing return value
    circumference = CIRCUMFERENCE(radius);//calling function and storing return value
    area = AREA(radius);//calling function and storing return value

    printf("\nDiameter is: %0.2lf\nCircumference is: %0.2lf\nArea is: %0.2lf\n", diameter, circumference, area);//printing result

    return 0;
}

double DIAMETER(double radius)//main diameter function
{
    return (2 * radius);
}

double CIRCUMFERENCE(double radius)//main circumference function
{
    return (2 * PI * radius);
}

double AREA(double radius)//area function
{
    return (PI * radius * radius);
}
