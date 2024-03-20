/*
    C program to print all prime numbers between 1 and n.
*/

#include <stdio.h>

int main()
{
    int n, i, j, is_prime;

    //taking input from user
    printf("Enter n: ");
    scanf("%d", &n);

    //this will check the number is it prime or not
    for(i = 2; i <= n; i++){//outer loop start
        for(j = 2, is_prime = 1; j <= i / 2; j++){//inner loop start
            if(i % j == 0){
                is_prime = 0;//if divisible then assign 0 and break;
                break;
            }
        }//inner loop end
        if(is_prime == 1){
            printf("%d ", i);//printing prime
        }
    }//outer loop end

    return 0;
}
