/*
    Write a C program to print the n-th perfect number where n is an input.
*/


#include <stdio.h>

int main()
{
    int n, i, j, sum, count = 1, number;

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
            count++;
            number = i;//remembering the perfect number
        }
    }//outer loop end

    printf("\n%d-th perfect number is: %d\n", n, number);//printing perfect number

    return 0;
}
