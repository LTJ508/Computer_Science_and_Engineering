/*
 strlen(char[]) - > Returns the length of the string
 toupper(char) -> Converts a character to uppercase
 isspace(char) -> returns true if the character is a space
 strcpy(char[] dst, char[] src) --> copies the string src to dst
 strcmp(char[], char[]) --> compares two strings
 strrev(char[]) --> reverses a string


*/


#include<string.h>
#include<ctype.h>
#include<stdio.h>


int isVowel(char ch)
{
    return(ch =='a'|| ch=='A' ||
           ch == 'e' || ch =='E' ||
           ch== 'i' || ch=='I' ||
           ch == 'o' || ch == 'O' ||
           ch =='u' || ch == 'U'
           );
}

int getLength(char s[])
{
    int l = 0;
    for(int i = 0; s[i]!='\0'; i++)
        l++;
    return l;
}
int main()
{
    char str[100], str2[100];
    int countSpace = 0, vowel = 0;
    printf("Enter your name: ");
    gets(str);
    printf("\nYour name is: %s", str);
    // Convert the array to uppercase and also count space
    for(int i = 0; str[i]!='\0'; i++)
    {
        str[i] = toupper(str[i]);
        if(isspace(str[i]))
            countSpace++;
    }
    printf("\nYour name is: %s", str);
    printf("\n The number of characters in your name: %d", strlen(str)-countSpace);
    // count the number of vowels
    for(int i = 0; str[i]!='\0'; i++)
    {
        if(isVowel(str[i]))
            vowel++;
    }
    printf("\nThe number of vowels in your name: %d", vowel);
    printf("\nThe length of the string using our customized function: %d", getLength(str));
    printf("\nString in str2: %s", str2);
    strcpy(str2, str);
    printf("\nString in str2: %s", str2);
    if(strcmp(str, str2) == 0)
        printf("\nThe two strings %s and %s are equal", str, str2);
    else
        printf("\nThe Strings are not equal");
    strrev(str);
    printf("\nString in str: %s", str);
    printf("\nstrcmp(%s, %s) = %d", str, str2, strcmp(str, str2));

}
