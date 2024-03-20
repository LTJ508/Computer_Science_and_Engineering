/*
    Writing a C program that reads the radius r of a circle and the side a of a square from user and then checks
    if that square can be placed inside that circle or not
*/



#include <stdio.h>
#include <math.h>

int main()
{
    double radius, side_a, diagonal;

    //taking input from user in a clear and good looking interface
    printf("Enter the Radius of the circle: ");
    scanf("%lf", &radius);
    printf("Enter the Side of a square: ");
    scanf("%lf", &side_a);

    //calculating the diagonal of square using Pythagorean theorem
    diagonal = sqrt(side_a * side_a + side_a * side_a);

    //if Diameter is greater than or equal to diagonal then the square can place inside the circle otherwise not.
    if((2.0 * radius) >= diagonal){
        printf("\nThe Square can be placed inside the Circle.\n");
    }
    else{
        printf("\nThe Square can not be placed inside the Circle!!\n");
    }

    return 0;
}
