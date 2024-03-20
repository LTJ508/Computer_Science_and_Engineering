/*
    Writing a C program that take a floating point input from user and check if the number is integer or not
*/



#include <stdio.h>

int main()
{
    double num;

    //taking input from user in a clear and good looking interface
    printf("Enter a number: ");
    scanf("%lf", &num);

    //i use type casting. 1st i cast the number in integer. in this way if the number have fractional part then it will be lost and only integer part will remain
    //if original number is greater than the integer part then it will be a float number otherwise integer.
    if(num > (int)num){
        printf("\nThis number is not an integer.\n");
    }
    else{
        printf("\nThis number is integer.\n");
    }

    return 0;
}
