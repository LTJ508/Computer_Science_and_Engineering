/*
    Write a C program that deletes all duplicate letters from an input string.
*/


#include <stdio.h>
#include <string.h>

int main()
{
    char str[10000];//declaring array
    char str2[26];//declaring counting array

    int i, j, k, index, run;//declaring other variable

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

    for(i = 0; i < 26; i++){//outer loop for checking which letter is duplicate
        if(str2[i] > 1){//checking is it duplicate or not
            for(j = 0; j < length; j++){//if duplicate found then search for the first element
                if(str[j] == i+97 || str[j] == i+65){//searching first element
                    run = str2[i] - 1;//if found then we will remove the rest
                    while(run > 0){//running a loop for removing others
                        for(k = j+1; k < length; k++){//searching for next element
                            if(str[k] == i+97 || str[k] == i+65){//searching
                                index = k;//when found assign the index
                            }
                        }//next element search end
                        for(k = index; k < length - 1; k++){//now start shifting
                            str[k] = str[k+1];//shifting
                        }//shifting loop end
                        length--;//length will be deducted
                        run--;//run time loop will be deducted
                    }//end of run time loop
                }//end of first element search loop
            }//end of duplicate element removing main loop
        }//remove of this letter completed
    }//outer loop end

    str[length] = '\0';//for the end of the array

    puts(str);//printing the array

    return 0;
}

