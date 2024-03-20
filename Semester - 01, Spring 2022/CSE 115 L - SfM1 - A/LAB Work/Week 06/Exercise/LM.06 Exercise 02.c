/*
    Writing a program to display all the letters of the alphabet (a-z).
    Use two for loops: the 1st one will print all letters in small letters and the 2nd one will print them in capital letters.
    Example output:
    a b c d e ……… z
    A B C D ……… Z
*/

#include <stdio.h>

int main()
{
    char i;

    for(i = 'a'; i <= 'z'; i++)//this loop will print a-z
    {
        printf("%c ", i);
    }

    printf("\n");

    for(i = 'A'; i <= 'Z'; i++)//This loop will print A-Z
    {
        printf("%c ", i);
    }

    printf("\n");

    return 0;
}

