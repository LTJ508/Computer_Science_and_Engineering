/*
    Write C program using a function to check if a given number is a perfect number.
*/

#include <stdio.h>

int PERFECT_NUMBER(int number);//function prototype

int main()//main function
{
    int number, status;

    //taking input from user
    printf("Enter a number: ");
    scanf("%d", &number);

    status = PERFECT_NUMBER(number);//calling function

    if(status == 1){
        printf("\n%d is a perfect number.\n", number);
    }
    else{
        printf("\n%d is not a perfect number.\n", number);
    }
    return 0;
}

int PERFECT_NUMBER(int number)//function code
{
    int sum = 0;
    for(int i = 1; i <= number / 2; i++){
        if(number%i == 0){
            sum = sum + i;
        }
    }

    if(sum == number && number != 0){
        return 1;
    }
    else{
        return 0;
    }
}
