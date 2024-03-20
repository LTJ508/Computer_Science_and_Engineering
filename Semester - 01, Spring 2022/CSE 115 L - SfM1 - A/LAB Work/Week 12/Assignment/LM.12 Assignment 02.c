/*
    Write a C code using functions that takes two integers: a and b as inputs and returns the value of ab.
*/

#include <stdio.h>

int MULTIPLICIATION(int a, int b);//function prototype

int main()
{
    int a, b, ab;

    //taking input from user
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    ab = MULTIPLICIATION(a, b);//calling function and storing return value

    printf("\nab: %d\n", ab);//printing ab

    return 0;
}

int MULTIPLICIATION(int a, int b)//main multiplication function
{
    return (a * b);//returning ab
}
