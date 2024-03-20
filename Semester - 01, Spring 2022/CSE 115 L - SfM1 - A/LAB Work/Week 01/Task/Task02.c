/*Task 2.  Write a program that reads in 3 numbers and prints their average.
Input:
Insert first number: 3
Insert second number: 8
Insert third number: 2

Output:
The average is: 4.3

*/

#include <stdio.h>

int main()
{
    double a, b, c, average;

    //taking input
    printf("Insert first number: ");
    scanf("%lf", &a);
    printf("Insert second number: ");
    scanf("%lf", &b);
    printf("Insert third number: ");
    scanf("%lf", &c);

    //calculating average and showing
    average = (a + b + c) / 3;
    printf("\nThe average is: %0.1lf\n", average);

    return 0;
}
