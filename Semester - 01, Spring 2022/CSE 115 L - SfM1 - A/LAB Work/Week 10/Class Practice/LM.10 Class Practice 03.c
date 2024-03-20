/*
    Writing a C program to compute the sum of the following series:
    (1/1) + (1/1 + 1/2) + (1/1 + 1/2 + 1/3) + .....(1/1 + 1/2 + 1/3 + ... + 1/n)
*/

#include <stdio.h>

int main()
{
    int i, j, n;
    double sum = 0, sum_term;

    printf("Enter last number n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        for(j = 1, sum_term = 0; j <= i; j++){
            sum_term = sum_term + (1.0 / j);
        }

        sum = sum + sum_term;
    }

    printf("\nSum of the series is: %0.2lf\n", sum);

    return 0;
}
