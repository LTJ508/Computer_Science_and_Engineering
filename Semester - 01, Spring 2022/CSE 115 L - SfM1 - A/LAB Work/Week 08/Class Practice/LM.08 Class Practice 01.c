/*
    Write a C program to read 2 integers: n and r from user and compute the value of nPr = (n!)/(n-r)!
*/

#include <stdio.h>

int main()
{
    int n, r, m = 1, d = 1, i;

    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);

    //compute n!
    for(i = 1; i <= n; i++){
        m *= i;
    }

    //compute (n-r)!
    for(i = 1; i<= n-r; i++){
        d *= i;
    }

    printf("\n%dP%d = %d\n", n, r, m/d);

    return 0;
}

