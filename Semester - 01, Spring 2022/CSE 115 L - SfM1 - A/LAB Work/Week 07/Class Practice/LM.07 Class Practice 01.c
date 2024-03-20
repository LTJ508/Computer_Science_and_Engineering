/*
    Writing a C program to print all odd numbers from 1 to n (n is user input) using for loop.
*/

#include <stdio.h>

int main()
{
    int i, n;

    printf("Print odd numbers till: ");
    scanf("%d", &n);     //Read the upper limit
    printf("All odd numbers from 1 to %d are: \n", n);

    for(i = 1;  i <= n;  i++){
        if(i%2 != 0){// Check if the number is odd
            printf("%d\n", i);
        }
    }

    return 0;
}

