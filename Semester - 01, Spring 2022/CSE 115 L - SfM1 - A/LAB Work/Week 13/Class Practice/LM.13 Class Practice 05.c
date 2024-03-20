/*
    C Program to find the number of spaces in a string(character array)
*/

#include <stdio.h>

int main()
{
    char string_array[100];
    int i, space = 0;

    //taking input from user
    printf("Enter a string: ");
    gets(string_array);

    //this loop will count the spaces
    for(i = 0; string_array[i] != '\0'; i++){
        if(string_array[i] == ' '){
            space++;
        }
    }

    printf("\nNumber of space in this string is: %d\n", space);//printing space amount

    return 0;
}
