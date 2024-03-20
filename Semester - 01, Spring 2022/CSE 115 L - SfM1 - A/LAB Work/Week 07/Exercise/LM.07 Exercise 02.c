/*
    Writing a C program to check whether an input number is a perfect number or not.
    A perfect number is a positive integer which is equal to the sum of its proper positive factors.
    For e.g. 6 is a perfect number;
    because proper factors of 6 are 1, 2, 3 and 1+2+3 = 6.
    Also, 28 is a perfect number since sum of its factors = 1+2+4+7+14 = 28.
*/

#include <stdio.h>

int main()

{
    int number, sum_factor = 0, i;

    //taking input from user
    printf("Enter a Number: ");
    scanf("%d", &number);

    //this loop will calculate the sum of factors
    for(i = 1; i <= number/2; i++){
        if(number%i == 0){
            sum_factor = sum_factor + i;
        }
    }

    //checking perfect number
    if(sum_factor == number){
        printf("\n%d is a perfect number\n", number);
    }
    else{
        printf("\n%d is not a perfect number\n", number);
    }

    return 0;
}
