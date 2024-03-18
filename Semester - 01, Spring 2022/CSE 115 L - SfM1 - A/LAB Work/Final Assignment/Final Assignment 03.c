/*
    Write a program that deletes all the elements in an array which match a search key
*/

#include <stdio.h>

int main()
{
    int size, i, search_key, count = 0, temp;//declaring variable

    printf("Enter the size of array: ");
    scanf("%d", &size);//taking input of size of array

    int number[size];//declaring array

    printf("\n");//just for new line

    for(i = 0; i < size; i++){
        printf("Enter %d-th element: ", i+1);
        scanf("%d", &number[i]);//taking input of array one by one
    }

    printf("\nNow Enter the search key to delete: ");
    scanf("%d", &search_key);//taking input of search key

    for(i = 0; i < size; i++){
        if(number[i]  == search_key){
            count++;//counting how many search key found in the array
        }
    }

    printf("\nSearch Key found in %d index.\nAfter deleting %d index from the array:\n", count, count);//printing the amount of found index of search key

    while(count > 0){//this loop will run until count get zero
        for(i = 0; i < size; i++){
            if(number[i] == search_key){//if array match the search key
                temp = i;//copy the index to temp
                break;
            }
        }

        for(i = temp; i < size - 1; i++){//now start from temp and end at seize-1
            number[i] = number[i+1];//replace the array by the next array value
        }

        size--;//size will be deducted
        count--;//count will be deducted
    }

    for(i = 0; i < size; i++){
        printf("%d", number[i]);//printing the left value of array
        if(i < size - 1){
            printf(", ");//printing the comma only for better interface
        }
    }

    printf("\n");//just for new line

    return 0;
}
