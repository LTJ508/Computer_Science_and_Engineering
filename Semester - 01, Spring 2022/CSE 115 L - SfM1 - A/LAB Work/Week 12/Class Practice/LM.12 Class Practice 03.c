/*
    C program to determine if a given number is prime using function
*/

#include <stdio.h>

int isPRIME(int number);//function prototype

int main()//main funtion
{
    int number, status;

    //taking input from user
    printf("Enter a number: ");
    scanf("%d", &number);

    status = isPRIME(number);//calling function

    //checking return value
    if(status == 1){
        printf("\n%d is a prime number.\n", number);
    }
    else{
        printf("\n%d is not a prime number.\n", number);
    }

    return 0;
}

int isPRIME(int number)//function code
{
    if(number <= 1){
        return 0;
    }
    else{
        for(int i = 2; i <= number / 2; i++){
            if(number%i == 0){
                return 0;
                break;
            }
        }
        return 1;
    }
}
