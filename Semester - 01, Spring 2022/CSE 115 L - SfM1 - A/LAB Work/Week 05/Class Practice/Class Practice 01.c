/*1. C Program to check whether the input is a character, digit or a special character.*/

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
     if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
        printf("%c is ALPHABET.\n", ch);
     }
    else if(ch >= '0' && ch <= '9'){
        printf("%c is DIGIT.\n", ch);
    }
    else{
        printf("%c is SPECIAL CHARACTER.\n", ch);
    }

    return 0;
 }

