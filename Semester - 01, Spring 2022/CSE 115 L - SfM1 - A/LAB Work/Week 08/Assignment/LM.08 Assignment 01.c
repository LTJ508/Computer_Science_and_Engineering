/*
    Writing a C program to display a given number in words starting from its leftmost digit.
    Hint: Compute the reverse of the given number and then use a while loop like practice 3 to print the digits.
    E.g., if input number is 1234 your program should print “One Two Three Four”.
*/

#include <stdio.h>

int main()
{
    int number, reverse_number = 0, digits;

    //taking input from user
    printf("Enter a Number: ");
    scanf("%d", &number);

    printf("\n");//just for extra new line it will look clear

    //this loop will find the reverse number
    while(number > 0){
        reverse_number = (reverse_number * 10) + (number % 10);
        number = number / 10;
    }

    //this loop will check the last digit of reverse number so that the digit will be the first digit of original number.
    while(reverse_number > 0){
        digits = reverse_number % 10;
        reverse_number = reverse_number / 10;

        //using switch case, it will check the digit and print the digit in word.
        switch(digits)
        {
        case 0:
            printf("Zero ");
            break;
        case 1:
            printf("One ");
            break;
        case 2:
            printf("Two ");
            break;
        case 3:
            printf("Three ");
            break;
        case 4:
            printf("Four ");
            break;
        case 5:
            printf("Five ");
            break;
        case 6:
            printf("Six ");
            break;
        case 7:
            printf("Seven ");
            break;
        case 8:
            printf("Eight ");
            break;
        case 9:
            printf("Nine ");
            break;
        }
    }

    printf("\n");//just for clear looks

    return 0;
}
