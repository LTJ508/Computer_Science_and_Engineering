/*
    Passing string as an argument of a function and update that string within the function
*/

#include <stdio.h>
#include <ctype.h>
#define SIZE 100

void CHANGE_CASE(char s[])//main upper lower convert function
{
    int i;

    //this loop will convert the string
    for(i = 0; s[i] != '\0'; i++){
        if(isupper(s[i])){
            s[i] = tolower(s[i]);
        }
        else if(islower(s[i])){
            s[i] = toupper(s[i]);
        }
    }
}

int main()
{
    char str[SIZE];

    //taking input from user
    printf("Enter a string of length < %d : ", SIZE);
    gets(str);

    printf("\n");

    CHANGE_CASE(str);//calling function just

    puts(str);//printing string

    return 0;
}
