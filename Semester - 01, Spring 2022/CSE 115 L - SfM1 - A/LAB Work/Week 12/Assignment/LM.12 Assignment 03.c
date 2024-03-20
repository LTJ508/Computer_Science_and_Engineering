/*
    Compute the sum of the following geometric progression using a function with 2 parameters r and n:
    1 + r + r^2 + … + r^n (read the values of r and n from user)
*/

#include <stdio.h>
#include <math.h>//for pow function

int SUM(int r, int n);//function prototype

int main()
{
    int r, n, sum;

    //taking input from user
    printf("Enter r: ");
    scanf("%d", &r);
    printf("Enter n: ");
    scanf("%d", &n);

    sum = SUM(r, n);//calling function and storing return value

    printf("\nSum is: %d\n", sum);//printing sum

    return 0;
}

int SUM(int r, int n)//main sum function
{
    int sum = 0;

    for(int i = 0; i <= n; i++){
        sum = sum + pow(r, i);//calculating sum
    }

    return sum;//returning sum
}
