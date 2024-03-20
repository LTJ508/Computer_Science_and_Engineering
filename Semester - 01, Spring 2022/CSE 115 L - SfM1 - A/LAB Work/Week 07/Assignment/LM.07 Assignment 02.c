/*
    Writing a C program to read a number from user and check whether given number is a palindrome or not.
    A number is a palindrome if the number is the same as its reverse for e.g. 23432 is a palindrome but 2345 is not.
*/

#include <stdio.h>

int main()
{
    int number, num, reverse_number = 0;

    //taking input
    printf("Enter a Number: ");
    scanf("%d", &number);

    num = number;//just for keeping original number
    while(num > 0){
        reverse_number = (reverse_number * 10) + (num%10);//this statement will add a zero at the end and add the next digit
        num = num / 10;
    }

    //checking the palindrome
    if(number == reverse_number){
        printf("\n%d is a palindrome.\n", number);
    }
    else{
        printf("\n%d is not a palindrome.\n", number);
    }

    return 0;
}
