/*
    Write a C program to read 2 integers: n and r from user and compute the value of nCr = (n!)/(r!(n-r)!)
*/

#include <stdio.h>

//int FACTORIAL(int num);

int main()
{
    int n, r, n_factorial, r_factorial, n_r_factorial, nCr, upper_part = 1, down_part = 1, i, j;

    printf("For calculating nCr.\nEnter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of r: ");
    scanf("%d", &r);

    for(i=n-r+1, j=1; i <= n; i++, j++ ){
        upper_part = upper_part * i;
        down_part = down_part * j;
    }

    nCr = upper_part / down_part;


/*
    n_factorial = FACTORIAL(n);
    r_factorial = FACTORIAL(r);
    n_r_factorial = FACTORIAL(n-r);
*/
    //nCr = (n_factorial) / (r_factorial * n_r_factorial);

    printf("\n%dC%d = %d\n", n, r, nCr);

    return 0;
}
/*
int FACTORIAL(int num)
{
    int i, factorial = 1;
    for(i = 1; i <= num; i++){
        factorial = factorial * i;
    }

    return factorial;
}

*/
