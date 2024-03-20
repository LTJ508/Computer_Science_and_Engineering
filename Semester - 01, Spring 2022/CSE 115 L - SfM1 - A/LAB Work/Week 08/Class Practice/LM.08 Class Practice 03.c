/*
    Write a C program display a given number in words starting from its rightmost digit
*/

#include <stdio.h>

int main()
{
    int num, i;
    printf("Enter any number to print in words: ");
    scanf("%d", &num);

    printf("\n");

    // Finds last digit of the number and print it in words
    while(num!=0){
        switch(num%10){
            case 0: printf("Zero ");
            break;
            case 1: printf("One ");
            break;
            case 2: printf("Two ");
            break;
            case 3: printf("Three ");
            break;
            case 4: printf("Four ");
            break;
            case 5: printf("Five ");
            break;
            case 6: printf("Six ");
            break;
            case 7: printf("Seven ");
            break;
            case 8: printf("Eight ");
            break;
            case 9: printf("Nine ");
            break;
        }//end of switch
        num = num/10;
    }//end of while loop

    printf("\n");

    return 0;
}

