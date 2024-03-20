/*
    Writing a C program to compute the sum of digits of an input number and check if this sum is a prime or not.
    Sample Input/Output:
    Enter any integer: 2821
    Sum of its digits = 13. It is a prime number.
*/

#include <stdio.h>

int main()
{
    int number, sum = 0, prime_number = 1, i;

    //taking input from user
    printf("Enter any integer: ");
    scanf("%d", &number);

    while(number > 0){//this loop will calculate the sum of the digits in the number
        sum = sum + (number % 10);
        number = number / 10;
    }

    //printing the sum if digits.
    printf("\nSum of its digits = %d. ", sum);

    //this loop will check the sum if it is a prime number or not
    for(i = 2; i <= sum / 2; i++){
        if(sum % i == 0){
            prime_number = 0;
            break;
        }
    }

    if(sum <= 1){
        prime_number = 0;
    }

    //printing the rest part
    if(prime_number == 1){
        printf("It is a prime number.\n");
    }

    else{
        printf("It is not a prime number.\n");
    }

    return 0;
}
