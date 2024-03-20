/*
    Writing a C program to read an integer from user and output its last and first digit.
    Hint: Like practice 2 & 3,
    reduce the number by dividing it (by 10) again and again (in a loop) until you reach the first digit
*/

#include <stdio.h>

int main()
{
    int number, first_digit, last_digit, num;

    //taking input from user
    printf("Enter a Number: ");
    scanf("%d", &number);

    num = number;//just for keeping original number

    last_digit = number % 10;//finding last digit

    //this loop will find the first digit
    while(num > 0){
        first_digit = num % 10;
        num = num / 10;
    }

    printf("\nFirst digit of %2d is: %d\nLast digit of %2d is: %d\n", number, first_digit, number, last_digit);

    return 0;
}
