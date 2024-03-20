/*
    C Program that prints the odd & the even numbers in an array separately
*/

#include <stdio.h>

int main()
{
    int i, num;

    //taking input for array size
    printf("Enter size of array: ");
    scanf("%d", &num);

    int array[num];//declaring array

    printf("\n\n");

    //this loop will scan array item sequentially
    for(i = 0; i < num; i++){
        printf("Enter %d-th element: ", i+1);
        scanf("%d", &array[i]);
    }

    printf("Even Numbers of array are: ");

    //this loop will print all event numbers one by one
    for(i = 0; i < num; i++){
        if(array[i] % 2 == 0){
            printf("%d ", array[i]);
        }
    }

    printf("\nOdd Numbers of array are: ");

    //this loop will print all odd number one by one
    for(i = 0; i < num; i++){
        if(array[i] % 2 != 0){
            printf("%d ", array[i]);
        }
    }

    printf("\n");

    return 0;
}
