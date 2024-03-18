/*
a C program that takes two numbers from user and print out the absolute difference between the two.
*/

#include <stdio.h>

int main()
{
    int num1, num2, diferent;

    //getting input
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    //checking which number is greater
    if(num1 > num2){
        diferent = num1 - num2;
    }
    else{
        diferent = num2 - num1;
    }
    printf("Absolute difference is: %d", diferent);//printing difference

    return 0;
}
