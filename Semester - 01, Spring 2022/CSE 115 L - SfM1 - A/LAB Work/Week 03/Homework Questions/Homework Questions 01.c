/*1.	Compute the area of a (a) trapezoid and (b) parallelogram. Read necessary inputs from user.*/

#include <stdio.h>

int main()
{
    double a_1st_base, b_2nd_base, height_trapezoid, area_trapezoid, base_parallelogram, height_parallelogram, area_parallelogram;

    printf("For Trapezoid:\nEnter the value of 1st base, a: ");
    scanf("%lf", &a_1st_base);
    printf("Enter the value of 2nd base, b: ");
    scanf("%lf", &b_2nd_base);
    printf("Enter the value of height, h: ");
    scanf("%lf", &height_trapezoid);

    area_trapezoid = ((a_1st_base + b_2nd_base)/2.0) * height_trapezoid;

    printf("\nArea of Trapezoid is: %0.2lf Square Units\n\n", area_trapezoid);


    printf("For Parallelogram:\nEnter the value of base: ");
    scanf("%lf", &base_parallelogram);
    printf("Enter the value of height: ");
    scanf("%lf", &height_parallelogram);

    area_parallelogram = base_parallelogram * height_parallelogram;

    printf("\nArea of Parallelogram is: %0.2lf Square Units\n\n", area_parallelogram);

    return 0;
}
