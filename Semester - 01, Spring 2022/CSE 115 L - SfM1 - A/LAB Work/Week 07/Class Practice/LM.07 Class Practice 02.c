/*
    Write a C program to read an integer from user and count the total number of digits in it.
*/

#include <stdio.h>

int main()
{
    int num, count = 0;

    printf("Enter any integer: ");
    scanf("%d", &num);

    while(num != 0){
        count++;
        num /= 10;
    }

    printf("\nTotal digits: %d\n",count);

    return 0;
}

