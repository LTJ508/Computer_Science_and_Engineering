/*
    Write a program that prints the number of odd & number of even numbers in an array
*/


#include <stdio.h>

int main()
{
    int i, num, even = 0, odd = 0;

    //taking input for array size
    printf("Enter size of array: ");
    scanf("%d", &num);

    int array[num];//declaring array

    printf("\n");

    //this loop will scan array item sequentially
    for(i = 0; i < num; i++){
        printf("Enter %d-th element: ", i+1);
        scanf("%d", &array[i]);
    }

    //this loop will count the even number
    for(i = 0; i < num; i++){
        if(array[i] % 2 == 0){
            even++;
        }
    }

    //this loop will count the odd number
    for(i = 0; i < num; i++){
        if(array[i] % 2 != 0){
            odd++;
        }
    }

    printf("\nEven Numbers: %d\nOdd Numbers: %d\n", even, odd);

    return 0;
}
