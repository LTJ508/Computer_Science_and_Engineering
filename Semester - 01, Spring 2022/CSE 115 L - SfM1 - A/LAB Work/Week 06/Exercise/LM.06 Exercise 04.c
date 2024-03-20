/*
    Writing a program to compute the following series using while loop: 2^3+5^3+8^3+...+n^3
*/

#include <stdio.h>

int main()
{
    int i=2, n, sum=0;

    printf("The series is 2^3+5^3+8^3+...+n^3\nNow enter the value of n: ");
    scanf("%d", &n);

    while(i <= n)
    {
        sum = sum + (i*i*i);
        i += 3;
    }

    printf("\nSum is: %d\n", sum);

    return 0;
}
