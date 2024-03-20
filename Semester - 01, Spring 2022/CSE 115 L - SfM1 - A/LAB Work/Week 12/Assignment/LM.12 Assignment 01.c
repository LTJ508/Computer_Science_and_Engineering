/*
    Find the sum of the following series using user-defined function:  1/1! + 2/2! + 3/3! + …… +1/N!
*/

#include <stdio.h>

double SUM(int n);//function prototype

int main()
{
    int n;

    //taking input from user
    printf("Series is: 1/1! + 2/2! + 3/3! + …… +1/N!\nNow enter N: ");
    scanf("%d", &n);

    double sum = SUM(n);//calling function and storing return value

    printf("\nSum of the series is: %0.2lf\n", sum);//printing sum

    return 0;
}

double SUM(int n)//main sum function
{
    double sum = 0;
    int i, j, factorial;
    for(i = 1; i <= n; i++){//outer loop start
        for(j = 1, factorial = 1; j <= i; j++){//inner loop start
            factorial = factorial * j;//calculating factorial
        }//inner loop end
        sum = sum + (1.0 / factorial);//calculating sum
    }//outer loop end

    return sum;//returning sum
}
