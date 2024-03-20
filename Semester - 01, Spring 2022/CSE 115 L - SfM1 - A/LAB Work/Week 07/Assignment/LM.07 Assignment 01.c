/*
    Writing a C program to enter any number from user and find the reverse of a given number using loop.
    Sample input/output (bold ones are user inputs):
    Enter a number: 2345
    Reverse of 2345 is: 5432
*/

#include <stdio.h>

int main()
{
    int number;

    //taking input from user
    printf("Enter a Number: ");
    scanf("%d", &number);

    printf("\nReverse of %d is: ", number);//printing some part of the output for matching

    while(number > 0){//this loop will print the digit in reverse order one by one
        printf("%d", number%10);
        number = number / 10;
    }

    printf("\n");//just printing new line for clear view
    return 0;
}

