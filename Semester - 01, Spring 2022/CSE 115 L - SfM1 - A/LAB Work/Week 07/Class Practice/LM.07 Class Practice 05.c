/*
    Write a C program that can be used to find whether a number is a prime number or not
*/

#include <stdio.h>

int main()
{
    int i, n, isPrime = 1;  //isPrime is used as a “flag/indicator”. Initially we assume
                            //that n is prime and we set isPrime=1 to indicate this. If we
                            //later find that n is not really a prime, then we will set isPrime=0
    printf("Enter any number to check if it is prime: ");
    scanf("%d", &n);
    for(i = 2; i <= n/2; i++){    //highest possible factor of n is: n/2; so continue as long as i <= n/2
         // If n has a factor other than 1 and itself then it is not prime
        if(n%i==0){ //if i is a factor of n (i.e., if n is divisible by i), where i
                  //varies from 2 to n/2, then n is not prime
            isPrime = 0; //here we set isPrime = 0 to indicate that n is not a prime
            break;//go to the first statement after this for loop (break out of loop)
        }
    }

    if(isPrime == 0){//If isPrime==0 then n is divisible by a value of i; so n is not prime
        printf("\n%d is not a prime number\n", n);
    }
    else{ // If isPrime==1 then n is NOT divisible by ANY value of i; so n is a prime no.
        printf("\n%d is a prime number\n", n);
    }

    return 0;
 }
