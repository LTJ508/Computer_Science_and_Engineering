/*
    Write a C program that reads an integer and returns the reverse of that number using function.
*/

#include <stdio.h>

int REVERSE(int n);//function prototype

int main()
{
    int number, reverse_number;

    //taking input from user
    printf("Enter number: ");
    scanf("%d", &number);

    reverse_number = REVERSE(number);//calling function and storing return value

    printf("\nReverse Number is: %d\n", reverse_number);//printing reverse number

    return 0;
}

int REVERSE(int n)//main reverse function
{
    int reverse_number = 0;

    //this loop will calculate the reverse number
    while(n > 0){
        reverse_number = (reverse_number*10) + (n%10);
        n = n / 10;
    }
    return reverse_number;//returning reverse number
}
