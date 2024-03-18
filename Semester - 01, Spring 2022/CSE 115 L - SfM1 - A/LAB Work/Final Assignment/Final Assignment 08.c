/*
    Write a program that reads a string from user and then prints the number of times different letters appear
    in that string.
    Sample input/output:
    Enter a string: Hello how are you?
    Frequencies of letters in the input string:
    a/A: 1, e/E: 2, h/H: 2, l/L: 2, o/O: 3, r/R: 1, u/U: 1, w/W: 1, y/Y: 1,
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[10000];//declaring array
    char str2[26];//declaring counting array

    int i, j, count = 0;//declaring other variable

    printf("Enter your string: ");
    gets(str);//taking input of string from user

    printf("\n");//just for new line

    int length = strlen(str);//checking the length of string

    for(i = 0; i < 26; i++){//at first set all counting value to 0
        str2[i] = 0;
    }

    for(i = 0; i < length; i++){//outer loop for string element
        for(j = 0; j < 26; j++){//inner loop for counting array
            if(str[i] == j+65 || str[i] == j+97){//if string element match with the counting array then it will increase one up
                str2[j]++;//counting array will be increase
            }
        }//inner loop end
    }//outer loop end

    for(i = 0; i < 26; i++){//just counting how many letter it have for removing the extra comma
        if(str2[i] != 0){
            count++;//count will increase
        }
    }

    printf("Frequencies of letters in the input string:\n");

    for(i = 0; i < 26; i++){
        if(str2[i] > 0){//in counting array whose value is greater than 0 only these value will be print
            printf("%c/%c: %d", i+97, i+65, str2[i]);//printing the letter and value
            if(count > 1){
                printf(", ");//printing the comma only
                count--;//for comma print its need to be deducted
            }//inner if end
        }//outer if end
    }//loop end

    printf("\n");//just for new line

    return 0;
}
