/*
    Writing a C program that read a character from user and check if it is a valid hexadecimal digit or not
*/



#include <stdio.h>

int main()
{
    char ch;

    //taking input from user in a clear and good looking interface
    printf("Enter a Character: ");
    scanf("%c", &ch);

    //checking if it is hexadecimal or not using or operator. small and capital letter both
    if((ch >= '0' && ch <= '9') || (ch >= 'a' && ch <= 'f') || (ch >= 'A' && ch <= 'F')){
        printf("\nThe character is a valid hexadecimal digit.\n");
    }
    else{
        printf("\nThe character is not a valid hexadecimal digit!!\n");
    }

    return 0;
}
