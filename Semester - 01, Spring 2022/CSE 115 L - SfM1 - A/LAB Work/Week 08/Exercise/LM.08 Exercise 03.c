/*
    Writing a C program to compute the super-factorial of a given number n.
    sf(n) = 1! * 2! * 3! * .... * n!
*/

#include <stdio.h>

int main()
{
    int number, sf_n = 1, factorial, i, j;

    //taking input from user
    printf("Enter a number: ");
    scanf("%d", &number);

    //nested loop for calculating the factorial and super factorial at the same time
    for(i = 1; i <= number; i++){//outer loop start
        for(j = 1, factorial = 1; j <= i; j++){//inner loop start
            factorial = factorial * j;//this statement will calculate the factorial
        }//inner loop end
        sf_n = sf_n * factorial;//this statement will calculate the super factorial
    }//outer loop end

    printf("\nsf(%d) = %d\n", number, sf_n);//printing the result

    return 0;
}
