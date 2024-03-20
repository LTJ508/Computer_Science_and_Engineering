/*1.	Read an integer number n from user. Compute the bitwise AND of n and 1. Do you see a pattern in the result? (Hint: observe the difference in the result when n is odd vs. when n is even)*/

#include <stdio.h>

int main()
{
    int n;

    printf("Please enter a number n: ");
    scanf("%d", &n);

    printf("\nBitwise AND of n and 1 is: %d\n", n&1);

    return 0;
}
