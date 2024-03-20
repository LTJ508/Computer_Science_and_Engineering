/*
    Writing a C program to print the multiplication table of any given integer number.
    Sample input/output (bold ones are inputs):
    Enter number to print the multiplication table of: 5
    5 * 1 = 5
    5 * 2 = 10
    5 * 3 = 15
    5 * 4 = 20
    5 * 5 = 25
    5 * 6 = 30
    5 * 7 = 35
    5 * 8 = 40
    5 * 9 = 45
    5 * 10 = 50
*/

#include <stdio.h>

int main()
{
    int m = 0, n, i;

    //taking input from user
    printf("Enter number to print the multiplication table of: ");
    scanf("%d", &n);
    printf("\n");//just giving extra space

    //this loop will print the multiplicity of the number
    for(i = 1; i <= 10; i++){
        printf("%d * %d = %d\n", n, i, m+=n);//i use + operator because its take time lower than * operator
    }

    return 0;
}

