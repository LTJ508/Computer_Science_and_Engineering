/*
    Writing a C program to read any integer from user and compute the reverse of given number.
    Also output whether the reverse number is prime or not.
    Sample Input/Output:
    Enter any integer: 4521
    Reverse number is: 1254. It is not a prime number.
*/

#include <stdio.h>

int main()
{
    int number, i, reverse_number = 0, prime_number = 1;

    //taking input from user
    printf("Enter a Number: ");
    scanf("%d", &number);

    while(number > 0){//this loop will calculate the reverse number
        reverse_number = (reverse_number * 10) + (number % 10);
        number = number / 10;
    }

    printf("\nReverse number is: %d. ", reverse_number);//printing just reverse number

    for(i = 2; i <= reverse_number/2; i++){//this loop will check if reverse number is a prime number or not
        if(reverse_number % i == 0){
            prime_number = 0;
            break;
        }
    }

    if(reverse_number <= 1){
        prime_number = 0;
    }

    //this condition is for printing the rest part. if reverse number is a prime number or not
    if(prime_number == 1){
        printf("It is a prime number.\n");
    }

    else{
        printf("It is not a prime number.\n");
    }

    return 0;
}
