/*
    Write a C program to read 2 integers: n and r from user and compute the value of nPr = (n!)/(n-r)!
*/

#include <stdio.h>

int main()
{
    int n, r, p = 1, i;

    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);

    //compute nPr = (n-r+1)(n-r+2)… (n-1)n
    for(i = n-r+1; i <= n; i++)
        p *= i;

    printf("\n%dP%d = %d\n", n, r, p);
}

