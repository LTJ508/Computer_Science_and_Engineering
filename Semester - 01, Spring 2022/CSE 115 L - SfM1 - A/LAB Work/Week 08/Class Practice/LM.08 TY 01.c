/*
    Write a C program to read 2 integers: n and r from user and compute the value of nCr = (n!)/(r!(n-r)!)
*/

#include <stdio.h>

int FACTORIAL(int num);

int main()
{
    int n, r, n_factorial, r_factorial, n_r_factorial, nCr;

    printf("For calculating nCr.\nEnter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of r: ");
    scanf("%d", &r);

    n_factorial = FACTORIAL(n);
    r_factorial = FACTORIAL(r);
    n_r_factorial = FACTORIAL(n-r);

    nCr = (n_factorial) / (r_factorial * n_r_factorial);

    printf("\n%dC%d = %d\n", n, r, nCr);

    return 0;
}

int FACTORIAL(int num)
{
    int i, factorial = 1;
    for(i = 1; i <= num; i++){
        factorial = factorial * i;
    }

    return factorial;
}
