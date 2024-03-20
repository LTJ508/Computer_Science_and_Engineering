/*
    Writing a C program to check if the roots of the equation: ax2+bx+c=0 are real or not.
    If they are real, then print them;
    otherwise print “No real root exist.”
    Read a,b,c from user
*/



#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, discriminant, result1, result2, root;
    char symbol = 253;//sign of square. just for a good visual in console.

    //taking input from user in a clear and good looking interface
    printf("Equation is: ax%c + bx + c = 0\nNow enter the value of\na: ", symbol);
    scanf("%lf", &a);
    printf("b: ");
    scanf("%lf", &b);
    printf("c: ");
    scanf("%lf", &c);

    //calculating discriminant for error free code
    discriminant = pow(b,2) - (4.0 * a * c);

    //if discriminant is less then 0 then the formula will show an error thats why checking if it is negative or not
    if(discriminant < 0.0){
        printf("\nNo Real Root Exist!!\n");
    }

    //if discriminant is 0 then there is only one root
    else if(discriminant == 0){
        root = (-b) / (2.0 * a);
        printf("\nThere is only one real root.\nRoot is: %0.2lf\n", root);
    }

    //if above two condition is false then the discriminant must be positive and it has two real roots
    else{
        result1 = (-b + sqrt(discriminant)) / (2.0 * a);
        result2 = (-b - sqrt(discriminant)) / (2.0 * a);

        printf("\nThere are two real roots.\nRoot-1: %0.2lf\nRoot-2: %0.2lf\n", result1, result2);
    }

    return 0;
}
