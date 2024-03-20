/*
    Passing array as an argument of function
*/

#include <stdio.h>

double GET_AVERAGE(int array[], int size)//main average function
{
    int i;
    double average, sum = 0;

    //this will calculate the sum of the number in arrays
    for(i = 0; i < size; i++){
        sum = sum + array[i];
    }

    average = sum / size;//calculating average

    return average;//returning average
}

int main()
{
    int balance[5] = {1000, 2, 3, 17, 50};

    double average;

    average = GET_AVERAGE(balance, 5);//calling function and storing it's return value

    printf("\nAverage is: %0.2lf\n", average);//printing average

    return 0;
}
