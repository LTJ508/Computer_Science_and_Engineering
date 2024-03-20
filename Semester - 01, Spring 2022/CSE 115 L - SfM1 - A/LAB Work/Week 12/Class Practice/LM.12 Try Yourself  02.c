/*
    Write C program using a function to check if a given number is positive, negative, or zero.
*/

#include <stdio.h>

void POSITIVEorNEGATIVE(int number);//function prototype

int main()//main function
{
    int number;

    //taking input from user
    printf("Enter a number: ");
    scanf("%d", &number);

    POSITIVEorNEGATIVE(number);//calling function

    return 0;
}

void POSITIVEorNEGATIVE(int number)//function code
{
    if(number > 0){
        printf("\nThe number is Positive.\n");
    }
    else if(number < 0){
        printf("\nThe number is Negative.\n");
    }
    else{
        printf("\nThe number is ZERO.\n");
    }
}
