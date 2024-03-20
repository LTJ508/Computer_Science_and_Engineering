/*
    C Program to find the largest value in a float type array
*/

#include <stdio.h>

int main()
{
    int i, n;
    double max;

    //taking input for array size
    printf("Enter Number of elements: ");
    scanf("%d", &n);

    double array[n];//declaring array

    //this loop will take input for array
    for(i = 0; i < n; i++){
        printf("Enter %d-th element: ", i+1);
        scanf("%lf", &array[i]);
    }

    max = array[0];//initialize the max as first element of the array

    //this loop will find the max
    for(i = 1; i < n; i++){
        if(array[i] > max){
            max = array[i];
        }
    }

    printf("\nMax number is: %0.2lf\n", max);//printing max

    return 0;
}
