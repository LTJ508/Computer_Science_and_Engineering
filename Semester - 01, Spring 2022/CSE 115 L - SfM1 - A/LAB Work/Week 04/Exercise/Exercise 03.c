/*
    Writing a C program to check if an input integer is a multiple of either 2 or 5 but not a multiple of both.
    E.g. of valid numbers are 4, 6, 8, 12, 14, 15, 16, 25, etc. E.g. of invalid numbers are 1, 3, 7, 9, 10, 20, etc.
*/



#include <stdio.h>

int main()
{
    int num;

    //taking input from user in a clear and good looking interface
    printf("Enter a number: ");
    scanf("%d", &num);

    //checking if the number is dividable by both 2 and 5
    if((num%2) == 0 && (num%5) == 0){
        printf("\nThe number is invalid!!\n");
    }
    //if both are not dividable then it could be the number is dividable by any one
    else if((num%2) == 0 || (num % 5) == 0){
        printf("\nThe number is Valid.\n");
    }

    //if not dividable by both or any one thats mean the number is not dividable by 2 or 5
    else{
        printf("\nThe number is invalid!!\n");
    }

    return 0;
}
