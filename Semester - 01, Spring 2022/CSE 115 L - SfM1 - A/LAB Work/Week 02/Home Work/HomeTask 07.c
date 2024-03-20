/*7.	Print the sum of the series:12+22+...+n2; read n from user.*/

#include <stdio.h>

int main()
{
    int n, sum;

    printf("Please enter the value of n: ");
    scanf("%d", &n);

    sum = (n * (n+1) * (2 * n + 1)) / 6;

    printf("Sum of the series is: %d", sum);
    return 0;
}
