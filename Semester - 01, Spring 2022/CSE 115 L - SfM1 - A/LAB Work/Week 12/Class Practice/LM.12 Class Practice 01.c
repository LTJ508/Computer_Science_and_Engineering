/*
    C program illustrating the difference between void and non-void function:
*/

#include <stdio.h>

// definition of a non-void function
float computeSquare(float x)
{
    return x*x;
}

// definition of a void function
void printCube(float x)
{
    printf("Cube = %f\n", x*x*x);
}

//main function
int main()
{
    float m, n;

    printf("\nEnter a number: ");
    scanf("%f", &m);

    //call computeSquare function on m
    n = computeSquare(m);

    printf ("\nSquare = %f\n", n);

    //call printCube function on m
    printCube(m);

    return 0;
}
