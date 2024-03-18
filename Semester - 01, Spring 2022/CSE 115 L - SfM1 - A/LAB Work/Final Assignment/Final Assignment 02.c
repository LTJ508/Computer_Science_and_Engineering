/*
    Write a program that prints ALL indexes in which the largest value of array is present.
*/

#include <stdio.h>

int main()
{
    int size, i, MAX, count = 0, comma_count = 1;//declaring variable

    printf("Enter the size of Number array: ");
    scanf("%d", &size);//taking input of array size

    int number[size];//declaring array

    printf("\n");//just for new line

    for(i = 0; i < size; i++){
        printf("Enter %d-th element: ", i+1);
        scanf("%d", &number[i]);//taking input for each element
    }

    MAX = number[0];//suppose max is index 0

    for(i = 1; i < size; i++){
        if(number[i] > MAX){//finding the max value
            MAX = number[i];//assigning to max
        }
    }

    for(i = 0; i < size; i++){
        if(number[i] == MAX){
            count++;//counting how many max number are there
        }
    }

    printf("\nLargest value of array is: %d\nAnd it is found in %d index.\nFound Index List: ", MAX, count);//printing max and how many found and the list

    for(i = 0; i <size; i++){
        if(number[i] == MAX){
            printf("%d", i);//printing the list of index where max value found
            if(comma_count < count){
                printf(", ");//printing the comma only thats why i try to count the number of max value
            }
            comma_count++;//comma count will be one plus
        }
    }

    printf("\n");//just for new line

    return 0;
}
