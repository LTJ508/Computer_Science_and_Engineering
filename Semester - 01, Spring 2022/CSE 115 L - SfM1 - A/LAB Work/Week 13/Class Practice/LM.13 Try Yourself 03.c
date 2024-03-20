/*
    Write a C program that counts the number of vowels in an input string
*/

#include <stdio.h>

int main()
{
    char string_array[100];
    int i, vowels = 0;

    //taking input from user
    printf("Enter a string: ");
    gets(string_array);

    //this loop will count the vowels
    for(i = 0; string_array[i] != '\0'; i++){
        if(string_array[i] == 'A' || string_array[i] == 'E' || string_array[i] == 'I' || string_array[i] == 'O' || string_array[i] == 'U' || string_array[i] == 'a' || string_array[i] == 'e' || string_array[i] == 'i' || string_array[i] == 'o' || string_array[i] == 'u'){
            vowels++;
        }
    }

    printf("\nNumber of Vowels in this string is: %d\n", vowels);//printing vowels amount

    return 0;
}
