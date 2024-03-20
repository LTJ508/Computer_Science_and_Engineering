/*
    C program to determine if a given number is odd/even using function
*/

#include <stdio.h>

void ODDorEVEN(int number);//function prototype

int main()//main function
{
    int number;

    //taking input from user
    printf("Enter a number: ");
    scanf("%d", &number);

    ODDorEVEN(number);//calling functiom

    return 0;
}

void ODDorEVEN(int number)//function
{
    if(number%2 == 0){
        printf("\n%d is Even Number.\n", number);
    }
    else{
        printf("\n%d is Odd Number.\n", number);
    }
}
