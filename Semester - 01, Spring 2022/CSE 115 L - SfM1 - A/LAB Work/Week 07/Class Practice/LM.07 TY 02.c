/*
    Write a C program to read an integer and compute the sum of digits in it. Sample Input/Output:
    Enter any integer: 452
    Sum of digits in 452: 11
*/

#include <stdio.h>

int main()
{
    int number, num, sum = 0;

    printf("Enter a Number: ");
    scanf("%d", &number);

    num = number;
    while(num > 0){
        sum = sum + (num % 10);
        num = num / 10;
    }

    printf("\nSum of digits in %d: %d\n", number, sum);
}
