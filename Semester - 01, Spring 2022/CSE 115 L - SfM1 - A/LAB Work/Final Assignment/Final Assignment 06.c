/*
    Write a C program that reads a string, create a new string containing all the chstrcters the input string
    except the vowels in it, and then prints the new string.
    Sample input/output:
    Enter a string: Hello how are you?
    Output string: Hll hw r y?
*/

#include <stdio.h>
#include <strings.h>

int main()
{
    char str[10000];//declaring array
    char str2[10000];//declaring 2nd array for copy

    int i, j;//other variable

    printf("Enter a String: ");
    gets(str);//taking string from user

    int length = strlen(str);//checking the length

    for(i = 0, j = 0; i < length; i++){//copping string without vowel
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            continue;//if vowel found it will skip the rest part
        }
        else{//if not found it will copy string to 2nd string
            str2[j] = str[i];
            j++;
        }
    }

    str2[j] = '\0';//for end of 2nd string

    printf("\nOutput String: ");

    puts(str2);//printing output

    return 0;
}
