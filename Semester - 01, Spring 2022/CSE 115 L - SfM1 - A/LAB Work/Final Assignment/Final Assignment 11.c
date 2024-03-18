/*
    Write a function that returns the number of times a value appears in an array
*/

#include <stdio.h>

int COUNT_SEARCH_KEY(int arr[], int size, int key);//declaring search function prototype

int main()//main function start
{
    int size, search_key, i, count;//declaring variable

    printf("Enter size of array: ");
    scanf("%d", &size);//taking input of size of the array

    int number[size];//declaring the array

    printf("\n");//just for new line

    for(i = 0; i < size; i++){
        printf("Enter %d-th element: ", i+1);
        scanf("%d", &number[i]);//taking input for each number
    }

    printf("\nEnter Search Key: ");
    scanf("%d", &search_key);//taking input for search key

    count = COUNT_SEARCH_KEY(number, size, search_key);//calling function and storing the return value

    printf("\nSearch Key Appears %d times.\n", count);//printing the count of search key

    return 0;
}

int COUNT_SEARCH_KEY(int arr[], int size, int key)//search function start
{
    int count = 0;//declaring variable

    for(int i = 0; i < size; i++){//finding search key
        if(arr[i] == key){//if found
            count++;//count will be increase by one
        }
    }

    return count;//returning the value of count
}
