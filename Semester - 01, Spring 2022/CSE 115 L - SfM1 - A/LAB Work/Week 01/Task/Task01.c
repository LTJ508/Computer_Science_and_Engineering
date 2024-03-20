/*Write a program that asks the user to enter two numbers, obtains the two numbers from the user and prints the sum, product, difference, quotient and remainder of the two numbers.

Input:
Insert first number: 10
Insert second number: 5	

Output:
Sum = 15
Product = 50
Difference = 5
Quotient = 2
Remainder = 0
*/

#include <stdio.h>

int main()
{
    int a, b, sum, product, difference, quotient, remainder;

    //taking inputs from user
    printf("Insert first number: ");
    scanf("%d", &a);
    printf("Insert second number: ");
    scanf("%d", &b);

    //calculating sum, product, difference and printing
    sum = a + b;
    product = a * b;


    /*
    difference = a - b;
    quotient = a / b;
    remainder = a % b;

    printf("\nSum = %d\nProduct = %d\nDifference = %d\nQuotient = %d\nRemainder = %d\n", sum, product, difference, quotient, remainder);
    */



    if(a > b){
        difference = a - b;
    }
    else if(b > a || a == b){
        difference = b - a;
    }

    printf("\nSum = %d\nProduct = %d\nDifference = %d\n", sum, product, difference);

    //calculating quotient and remainder and printing
    if(b == 0){
        printf("\nAs the second number is 0, Quotient and Remainder can not be determined!!\n");
    }
    else if(b != 0){
        quotient = a / b;
        remainder = a % b;
        printf("Quotient = %d\nRemainder = %d\n", quotient, remainder);
    }


    return 0;
}
