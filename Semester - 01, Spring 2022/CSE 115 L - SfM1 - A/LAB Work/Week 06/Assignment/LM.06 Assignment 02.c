/*
    Writing a program that computes the following series using for loop: 10000+2000+400+…+8
*/

#include <stdio.h>

int main()
{
    int i, sum = 0;

    //this loop will calculate the sum
    for(i = 10000; i >= 8;i /= 5){
        sum += i;
    }

    //printing output
    printf("Sum of the series: 10000 + 2000 + 400 + .. + 8 = %d\n", sum);

    return 0;
}
