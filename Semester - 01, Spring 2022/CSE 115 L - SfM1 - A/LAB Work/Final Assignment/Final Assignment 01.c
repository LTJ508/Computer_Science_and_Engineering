/*
    Write a program that searches for a given value (called a search key) in an array and prints the first and
    last index in which that value appears.
*/

#include <stdio.h>

int main()
{
    int size, i, search_key, count = 0, comma_count = 1;//declaring variable

    printf("Enter the size of Number array: ");
    scanf("%d", &size);//taking input of array size

    int number[size];//declaring array

    printf("\n");//just for new line

    for(i = 0; i < size; i++){
        printf("Enter %d-th element: ", i+1);
        scanf("%d", &number[i]);//taking input for each element
    }

    printf("\nEnter Search Key: ");
    scanf("%d", &search_key);//taking input of search key


    for(i = 0; i < size; i++){
        if(number[i] == search_key){
            count++;//counting how many search key are there
        }
    }

    if(count > 0){
        printf("\nFirst Index no. where %d Found: ", search_key);

        for(i = 0; i < size; i++){//finding the first index where search key found
            if(number[i] == search_key){
                printf("%d", i);
                break;//after found break the loop
            }
        }

        printf("\nLast Index no. where %d Found: ", search_key);

        for(i = size - 1; i >= 0; i--){//finding the last index of search key
            if(number[i] == search_key){
                printf("%d", i);
                break;//if found then break the loop
            }
        }
    }

    else{
        printf("\nSearch Key %d Not Found in the Number Array..", search_key);//count is 0 thats means search key not found
    }

    printf("\n");//just for new line

    return 0;
}
