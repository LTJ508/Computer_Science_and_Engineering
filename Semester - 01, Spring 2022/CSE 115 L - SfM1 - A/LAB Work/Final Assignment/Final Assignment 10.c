/*
    Write a function that searches for a character in a string. The function should print true if found,
    otherwise print false.
*/

#include <stdio.h>
#include <string.h>

void SEARCH(char arr[], char key);//declaring function prototype

int main()//main function
{
    char str[1000], search_key;//declaring array and variable

    printf("Enter String: ");
    gets(str);//taking input for string from user

    printf("Search Key: ");
    scanf("%c", &search_key);//taking input of search key from user

    SEARCH(str, search_key);//calling function

    return 0;
}

void SEARCH(char arr[], char key)//search function code
{
    int length = strlen(arr);//declaring variable
    int found = 0;//declaring variable

    for(int i = 0; i < length; i++){//finding the search key
        if(arr[i] == key){//if match
            found = 1;//found will be 1
            break;//and immediately loop will be break
        }
    }//loop end

    if(found == 1){//if found is 1 then we found it
        printf("\nFound\n");//printing found
    }
    else{
        printf("\nNot Found\n");//printing not found
    }
}
