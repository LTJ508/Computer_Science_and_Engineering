/*
    Writing a program to compute the following series using while loop: 5^2+9^2+15^2+23^2+....+n^2
*/

#include <stdio.h>

int main()
{
    int i = 5, n, sum = 0, differ = 4;

    //taking input from user
    printf("The series is: 5^2+9^2+15^2+23^2+....+n^2\nNow enter the value of n: ");
    scanf("%d", &n);

    while(i <= n){
        sum = sum + (i*i);
        i += differ;//it will increase i according to difference
        differ += 2;//here in the series difference also increase by 2 unit.
    }

    //printing the sum of the series
    printf("\nSum is: %d\n", sum);

    return 0;
}
