//Program using while loop:

#include <stdio.h>

int main()
{
    int n, i=3, sum=0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    while(i <= n){
        sum += i;
        i += 4;
    }

    printf("sum = %d", sum);

    return 0;
}

