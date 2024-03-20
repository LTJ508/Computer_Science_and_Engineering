/*
    Find the sum of the following series using a function:  1^2 + 2^2 + 3^2 + … + N^2
*/

#include <stdio.h>

int SUM(int n);//function prototype

int main()//main function
{
    int n, sum;

    //taking input from user
    printf("Enter n: ");
    scanf("%d", &n);

    sum = SUM(n);//calling function and storing value

    printf("\nSum is: %d\n", sum);//printing sum

    return 0;
}

int SUM(int n)//function code
{
    int sum = 0;

    //this loop will calculate the sum
    for(int i = 1; i <= n; i++){
        sum = sum + (i*i);
    }

    return sum;//returning sum value
}
