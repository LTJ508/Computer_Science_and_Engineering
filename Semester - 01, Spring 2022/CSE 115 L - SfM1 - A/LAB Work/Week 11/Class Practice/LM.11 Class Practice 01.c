/*
    C program to print all perfect numbers between 1 to n:
*/

#include <stdio.h>

int main()
{
    int n, i, j, sum;

    //taking input from user
    printf("Enter n: ");
    scanf("%d", &n);

    //this loop check the perfect number
    for(i = 1; i <= n; i++){//outer loop start
        for(j = 1, sum = 0; j <= i / 2; j++){//inner loop start
            if(i % j == 0){
                sum = sum + j;//if its a divisor then add it to sum
            }
        }//inner loop end

        if(sum == i){
            printf("%d ", i);//if sum of divisor equal to number then print
        }
    }//outer loop end

    return 0;
}
