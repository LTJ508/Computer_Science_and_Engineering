/*
    Writing a C program to check whether an input number is a multiple of only 5 (e.g. 5, 10, 15, ...),
    only 11 (e.g. 11, 22, 33, ...),
    both 5 and 11 (e.g. 55, 110, ....),
    neither of them (e.g. 2,3, 4, 6, 7, 8, 9, 12, ....).
*/



#include <stdio.h>

int main()
{
    int num;

    //taking input from user in a clear and good looking interface
    printf("Enter a number: ");
    scanf("%d", &num);

    //checking if the number is multiple of both 5 and 11
    if((num%5) == 0 && (num%11) == 0){
        printf("\n%d is multiple of both 5 and 11\n", num);
    }

    //if not then it could be multiple of only 5
    else if((num%5) == 0){
        printf("\n%d is multiple of only 5\n", num);
    }

    //if not then it could be multiple of only 11
    else if((num%11) == 0){
        printf("\n%d is multiple of only 11\n", num);
    }

    //if not then the number is not multiple of neither 5 nor 11
    else{
        printf("\n%d is not multiple of 5 or 11\n", num);
    }

    return 0;
}
