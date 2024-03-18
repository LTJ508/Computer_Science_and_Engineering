/*
    Write C program to check if an input string is a palindrome (e.g. "madam", "dad", etc.) or not.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], str_cpy[100];//declaring string variable
    int i, j, length;//declaring other variable

    printf("Enter your string: ");
    gets(str);//taking input of string

    length = strlen(str);//check the length of string

    for(i = 0, j = length - 1; i < length; i++, j--){//reversing the string and keeping in another array
        str_cpy[j] = str[i];
    }

    if(strcmp(str, str_cpy) == 0){//comparing two string
        printf("\n%s is a palindrome string.\n", str);
    }
    else{
        printf("\n%s is not a palindrome string.\n", str);
    }

    return 0;
}
