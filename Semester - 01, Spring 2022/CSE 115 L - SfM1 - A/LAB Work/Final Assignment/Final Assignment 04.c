/*
    Write a C program to print the 2nd largest & 2nd smallest elements of an array.
*/

#include <stdio.h>

int main()
{
    int size, i, j, index_minimum, minimum, temp;//declaring variable

    printf("Enter the size of array: ");
    scanf("%d", &size);//taking input of array size

    printf("\n");//just for new line

    int number[size];//declaring array

    for(i = 0; i < size; i++){
        printf("Enter %d-th element: ", i+1);
        scanf("%d", &number[i]);//taking input of each element
    }

    printf("\n");//just for new line

    //this loop will short the array in ascending order
    for(i = 0; i < size; i++){
        for(j = i, minimum = number[i]; j < size; j++){
            if(number[j] <= minimum){//checking minimum number
                minimum = number[j];//storing minimum number
                index_minimum = j;//storing index of minimum number
            }
        }
        //mow swapping minimum number index
        temp = number[i];
        number[i] = minimum;
        number[index_minimum] = temp;
    }

    printf("2nd Largest Element is: %d\n2nd smallest Element is: %d\n", number[size - 2], number[1]);//printing output

    return 0;
}
