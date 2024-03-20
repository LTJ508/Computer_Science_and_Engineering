/*
    1.	Write a C program to print all prime numbers between 1 and n in reverse order (n is an input).
    Sample input/output:
    Enter n: 20
    All prime numbers between 1 and 20 (in reverse order):19, 17, 13, 11, 7, 5, 3, 2,
*/

#include <stdio.h>

int main()
{
    int n, i, j, is_prime;

    //taking input from user
    printf("Enter n: ");
    scanf("%d", &n);

    printf("\n");//just for clear view

    //this loop will check if it is prime of not
    for(i = n; i >= 2; i--){//outer loop start
        for(j = 2, is_prime = 1; j <= i/2; j++){//inner loop start
            if(i%j == 0){
                is_prime = 0;//if divisible then it is not prime and break it
                break;
            }
        }//inner loop end
        if(is_prime == 1){
            printf("%d", i);//printing prime
            if(i > 2){
                printf(", ");//printing comma
            }
        }
    }//outer loop end

    printf("\n");//just for clear view

    return 0;
}
