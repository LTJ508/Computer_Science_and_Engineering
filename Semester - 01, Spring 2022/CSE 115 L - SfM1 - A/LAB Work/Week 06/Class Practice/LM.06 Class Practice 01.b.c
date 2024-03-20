//Program using for loop:

#include<stdio.h>

int main()
{
    int n, i, sum = 0;
    printf("Enter the value of n:");
    scanf("%d", &n);

    for(i = 3; i <= n; i += 4){
        sum += i;
    }

    printf("sum = %d", sum);

    return 0;
}

