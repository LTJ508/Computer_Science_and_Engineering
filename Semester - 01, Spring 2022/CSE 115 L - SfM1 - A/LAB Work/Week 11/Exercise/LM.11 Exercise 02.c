/*
    Write a C program to compute and print the sum of all prime numbers between m and n (m, n are inputs)
*/


#include <stdio.h>

int main()
{
    int m, n, i, j, is_prime, sum = 0;

    //taking input from user
    printf("Enter m: ");
    scanf("%d", &m);
    printf("Enter n: ");
    scanf("%d", &n);

    //this loop will check the number if it is prime or not
    for(i = m; i <= n; i++){//outer loop start
        for(j = 2, is_prime = 1; j <= i/2; j++){//inner loop start
            if(i%j == 0){
                is_prime = 0;//if not prime then break
                break;
            }
        }//inner loop end
        if(is_prime == 1 && i != 1){
            printf("%d, ", i);//printing prime number
            sum = sum + i;//calculating sum of prime number
        }
    }

    printf("\nSum is: %d\n", sum);//printing sum

    return 0;
}
