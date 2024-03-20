/*
    Writing a C program to convert a given Binary number to its Decimal equivalent.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int binary_number, decimal_number = 0, digits, n = 0;

    //taking input from user
    printf("Enter a Binary Number: ");
    scanf("%d", &binary_number);

    //this loop will find the decimal number
    while(binary_number > 0){
        digits = binary_number % 10;//find the last digit
        decimal_number = decimal_number + (digits * pow(2,n));//binary to decimal convert rules. multiple the last digit with 2 to the power of 0,1,2,3,...n
        binary_number = binary_number / 10;//short the binary number for finding next digit
        n++;//as binary to decimal convert rules, 2 to the power will increase by one
    }

    printf("\nDecimal Number is: %d\n", decimal_number);//printing the decimal number.

    return 0;
}
