/*
    C Program to read an array from user and an index and then delete the element in that index of array
*/

#include <stdio.h>

int main()
{
    int num, i , delete_index;

    //taking input for array size
    printf("Enter number of elements: ");
    scanf("%d", &num);

    int array[num];//declaring array

    printf("\n");

    //this loop take input for array
    for(i = 0; i < num; i++){
        printf("Enter %d-th element: ", i+1);
        scanf("%d", &array[i]);
    }

    printf("\nEnter Index of element to delete(0-%d): ", num-1);
    scanf("%d", &delete_index);

    //this loop will shift array element to left from index k
    for(i = delete_index; i < num-1; i++){
        array[i] = array[i+1];
    }

    num--;//size of array will be one down

    printf("\nArray after deleting the element at index: %d\n", delete_index);

    //this loop print new array
    for(i = 0; i < num; i++){
        printf("%d ", array[i]);
    }

    printf("\n");

    return 0;
}
