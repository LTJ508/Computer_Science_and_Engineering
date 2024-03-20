/*
    Writing a C program to compute the sum of the series: 1/1! + 1/2! + 1/3! + … + 1/n! where n is an input.
*/

#include <stdio.h>

int main()
{
    int n, i, j, factorial;
    double sum;

    //taking input from user
    printf("The series is: 1/1! + 1/2! + 1/3! + … + 1/n!\nNow enter the value of n: ");
    scanf("%d", &n);

    //nested loop will calculate the series. as we need to done two step at a time. factorial and sum.
    for(i = 1; i <= n; i++){//outer loop start
        for(j = 1, factorial = 1; j <= i; j++){//inner loop start
            factorial = factorial * j;//this will calculate the factorial
        }//inner loop end
        sum = sum + (1.0 / factorial);//this will calculate the sum
    }//outer loop end

    printf("\nSum of the series is: %0.2lf\n", sum);//printing the sum of the series.

    return 0;
}
