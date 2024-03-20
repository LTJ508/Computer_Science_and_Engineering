/*
    Writing a program to compute the following series using while loop: 4+11+18++….+n
*/

#include <stdio.h>

int main()
{
    int i, n, sum = 0;

    printf("The Series is: 4+11+18+..+n\nNow enter the value of n: ");
    scanf("%d",&n);

    for(i = 4; i <= n; i+=7)
    {
        sum += i;
    }

    printf("\nSum is: %d\n", sum);

    return 0;
}
