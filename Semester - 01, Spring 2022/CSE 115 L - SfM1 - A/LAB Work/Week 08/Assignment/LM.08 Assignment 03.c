/*
    Writing a C program to convert a given decimal number to its binary equivalent.
*/

#include <stdio.h>

int main()
{
    int decimal_number, binary_number = 0,
    coordinates = 1;//this is coordinates. it will start from one's place, then ten's place, hundred's place, thousand's place etc.. multiple of 10.

    //taking input from user
    printf("Enter a Decimal Number: ");
    scanf("%d", &decimal_number);

    printf("\n");//just for clear looks

    //this loop will find the binary number
    while(decimal_number > 0){
        binary_number = binary_number + ((decimal_number%2) * coordinates);//this statement will find the remainder and multiple it by its coordinates then add to the binary number.
        decimal_number = decimal_number / 2;//will short the decimal number for next step
        coordinates = coordinates * 10;// every time coordinates will be multiple by 10. like one's place, ten's place, hundred's place, thousand's place etc.
    }

    printf("\nBinary Number is: %d\n", binary_number);//printing the binary number

    return 0;
}
