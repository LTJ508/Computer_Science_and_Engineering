#include<stdio.h>

int sumOfDigits(int n)
{
    /*
        We assume n > 0
        The purpose of this function is to return the sum of the  digits of a number
        Suppose n = 64321
        We want to return 6 + 4 + 3 + 2 + 1
        We can extract the last digit, add the last digit to the function called recursively with the last digit extracted from
        it until n is a single digit number.
        The procedure is illustrated as follows:
        sumOfDigits(64321) = 1 + sumOfDigits(6432)
                           = 1 + 2 + sumOfDigits(643)
                           = 1 + 2 + 3 + sumOfDigits(64)
                           = 1 + 2 + 3 + 4 + sumOfDigits(6) <------- base case is reached
                           = 1 + 2 + 3 + 4 + 6
    */
    if(n <=9)
        return n;
    else
        return n%10 + sumOfDigits(n/10);
}

int main()
{
    int n = 64321;
    printf("Sum of digits of the number %d is %d", n, sumOfDigits(n));
}
