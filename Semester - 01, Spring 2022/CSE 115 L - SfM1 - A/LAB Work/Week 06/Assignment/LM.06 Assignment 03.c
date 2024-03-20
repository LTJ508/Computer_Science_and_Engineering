/*
    Writing a program that takes a minimum number, a maximum number, and common difference and prints the sum of the arithmetic series between them.
    Sample input/output (bold ones are inputs):
    Enter minimum: 11
    Enter maximum: 19
    Enter Common difference: 2
    The Sum is: 11 + 13 + 15 +17 +19 = 75
*/

#include <stdio.h>

int main()
{
    int i, minimum, maximum, common_difference, sum = 0;


    //taking input from user
    printf("Enter Minimum Number: ");
    scanf("%d", &minimum);
    printf("Enter Maximum Number: ");
    scanf("%d", &maximum);
    printf("Enter Common Difference: ");
    scanf("%d", &common_difference);

    //printing a part of the output for matching the output with question
    printf("\nThe sum is: ");

    //this loop will calculate and print the series one by one
    for(i = minimum; i <= maximum; i += common_difference){
        printf("%d", i);//printing number of series one by one

        //this condition will print the operator only
        if(i <= maximum - common_difference){
            printf(" + ");//printing + operator
        }

        sum += i;//calculating sum of the series
    }

    //printing the last part, sum of the series
    printf(" = %d\n", sum);

    return 0;
}
