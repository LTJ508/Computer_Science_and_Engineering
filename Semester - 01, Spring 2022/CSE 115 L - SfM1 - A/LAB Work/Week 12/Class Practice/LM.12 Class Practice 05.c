/*
    C program to compute the integer resulting from rounding a number n (using function)
*/

#include <stdio.h>

int ROUND_INTEGER(double number);//function prototype

int main()//main function
{
    double number;
    int number_rounded;

    //taking input from user
    printf("Enter a fraction number: ");
    scanf("%lf", &number);

    number_rounded = ROUND_INTEGER(number);//calling function and storing return value

    printf("\nRounded form of %lf is: %d\n", number, number_rounded);//printing rounded number

    return 0;
}

int ROUND_INTEGER(double number)//function code
{
    int i = number;

    if(number - i >= 0.5){
        return (i + 1);
    }
    else{
        return i;
    }
}
