/*
    Write a program that prints first n prime numbers (n is input). E.g. for n = 5 it should print: 2,3,5,7,11,
*/

#include <stdio.h>

int main()
{
    int n, i, j, is_prime = 1, count = 0;

    //taking input from user
    printf("Enter n: ");
    scanf("%d", &n);

    //this loop will check is it prime or not
    for(i = 2; count < n; i++){//outer loop start
        for(j = 2, is_prime = 1; j <= i / 2; j++){//inner loop start
            if(i%j == 0){
                is_prime = 0;//if divisible then its not prime and break
                break;
            }
        }//inner loop end
        if(is_prime == 1){
            printf("%d", i);//printing prime
            if(count < n-1){
                printf(", ");//printing comma only
            }
            count++;//counting how many prime printed
        }
    }//outer loop end

    return 0;
}
