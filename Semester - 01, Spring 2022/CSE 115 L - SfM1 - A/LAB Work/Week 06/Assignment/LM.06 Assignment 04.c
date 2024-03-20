/*
    Writing a program that takes a minimum number, a maximum number, and common ratio and prints the sum of the geometric series between them.
    Sample input/output (bold ones are inputs):
    Enter minimum: 5
    Enter maximum: 150
    Enter Common ratio: 3
    The Sum is: 5 + 15 + 45 + 135 = 200
*/

#include <stdio.h>

int main()
{
    int i, minimum, maximum, common_ratio, sum = 0;

    //taking input from user
    printf("Enter Minimum Number: ");
    scanf("%d", &minimum);
    printf("Enter Maximum Number: ");
    scanf("%d", &maximum);
    printf("Enter Common Ratio: ");
    scanf("%d", &common_ratio);

    //printing a part of the output for perfect math with the output given in sample
    printf("\nThe sum is: ");

    //this loop will print the series one by one and calculate the sum
    for(i = minimum; i <= maximum; i *= common_ratio){
        printf("%d", i);//printing number only

        //this condition will print the operator
        if(i <=  maximum /3){
            printf(" + ");//printing operator only
        }
        sum += i;//calculating sum of the series
    }

    //now printing the last part of the series, sum
    printf(" = %d\n", sum);

    return 0;
}
