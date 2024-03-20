/*
    Write a C program to compute and print the sum of first n perfect numbers.
*/

#include <stdio.h>

int main()
{
    int n, i, j, count= 1, sum, sum_perfect_numbers = 0;

    //taking input from user
    printf("Enter n: ");
    scanf("%d", &n);

    printf("\n");//just for extra line

    //this loop will check perfect number and count sum
    for(i = 2; count <= n; i++){//outer loop started
        for(j = 1, sum = 0; j <= i/2; j++){//inner loop start
            if(i%j==0){
                sum = sum + j;//sum of devisior
            }
        }//inner loop end
        if(sum == i){
            printf("%d, ", i);
            count++;//counting how many printed
            sum_perfect_numbers = sum_perfect_numbers + i;//calculating sum
        }
    }

    printf("\n\nSum of first %d perfect numbers = %d\n", n, sum_perfect_numbers);//printing sum

    return 0;
}
