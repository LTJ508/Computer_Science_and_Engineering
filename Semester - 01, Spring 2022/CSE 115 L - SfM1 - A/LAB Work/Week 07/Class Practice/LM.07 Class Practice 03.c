/*
    Write a C program to read an integer from user and count the total number of nonzero digits in it.
*/

#include <stdio.h>

int main()
{
    int num, count = 0;

    printf("Enter any integer: ");
    scanf("%d", &num);

    while(num != 0){
        //current digit is num%10
        if(num%10 != 0){
            count++;
        }
        num /= 10;
    }

    printf("\nTotal nonzero digits: %d\n", count);

    return 0;
}

