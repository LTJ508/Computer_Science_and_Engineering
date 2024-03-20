/*
    Write a C program to print the first n perfect numbers where n is an input.
*/


#include <stdio.h>

int main()
{
    int n, i, j, sum, count = 1;

    //taking input from user
    printf("Enter n: ");
    scanf("%d", &n);

    //this loop check the perfect number
    for(i = 1; count <= n; i++){//outer loop start
        for(j = 1, sum = 0; j <= i / 2; j++){//inner loop start
            if(i % j == 0){
                sum = sum + j;//if its a divisor then add it to sum
            }
        }//inner loop end

        if(sum == i){
            printf("%d ", i);//if sum of divisor equal to number then print
            count++;
        }
    }//outer loop end

    return 0;
}
