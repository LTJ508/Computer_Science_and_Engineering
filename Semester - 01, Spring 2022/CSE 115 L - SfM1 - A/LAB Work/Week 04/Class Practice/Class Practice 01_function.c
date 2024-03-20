/*C program to find maximum between two numbers:*/

#include <stdio.h>

int MAXIMUM (int n1, int n2);

int main()
{
    int n1, n2, max;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    max = MAXIMUM(n1,n2);
    printf("%d is Maximum.", max);

    return 0;
}

int MAXIMUM(int n1, int n2)
{
    int MAX;
    if(n1 > n2){
        MAX = n1;
    }
    else {
        MAX = n2;
    }

    return MAX;
}
