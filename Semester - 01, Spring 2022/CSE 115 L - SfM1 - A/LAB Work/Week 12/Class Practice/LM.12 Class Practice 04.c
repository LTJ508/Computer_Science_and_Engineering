/*
    C program to compute sum of all natural numbers between m and n (using function)
*/

#include <stdio.h>

int SUM(int m, int n);//function prototype

int main()//main function
{
    int m, n, sum;

    //taking input
    printf("Enter m: ");
    scanf("%d", &m);
    printf("Enter n: ");
    scanf("%d", &n);

    sum = SUM(m, n);//calling function and assigning return value

    printf("\nSum is: %d\n", sum);//printing sum

    return 0;
}

int SUM(int m, int n)//function code
{
    int sum = 0;
    for(int i = m; i <= n; i++){
        sum = sum + i;
    }

    return sum;//returning sum
}
