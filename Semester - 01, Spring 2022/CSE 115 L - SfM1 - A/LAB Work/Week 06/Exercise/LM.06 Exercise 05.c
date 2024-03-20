/*
    Writing a program to print all even numbers between m and n (m, n are user inputs) in reverse order.
    Sample input/output (bold ones are inputs):
    Enter m: 9
    Enter n: 21
    All even numbers between 9 and 20 in reverse order: 20, 18, 16, 14, 12, 10
*/

#include <stdio.h>

int main()
{
    int n, m, i;

    printf("Enter the value of m: ");
    scanf("%d", &m);
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("\n");

    for(i = n; i >= m; i--)
    {
        if(i%2 == 0)
        {
            printf("%d", i);
            if(i > m+1){
                printf(", ");
            }
        }
    }

    printf("\n");

    return 0;
}
