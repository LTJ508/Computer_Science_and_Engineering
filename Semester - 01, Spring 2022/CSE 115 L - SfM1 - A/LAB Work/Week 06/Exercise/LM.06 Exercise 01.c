/*
    Writing a program to display all decimal digits (i.e., numbers in the range 0 - 9) in reverse order.
    Example output:	9 8 7 6 5 4 3 2 1 0
*/

#include <stdio.h>

int main()
{
    int i;

    for(i = 9; i >= 0; i--)
    {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}
