/*
    Write a C program to compute and print the sum of palindrome numbers between m and n
*/


#include <stdio.h>

int main()
{
    int number, reverse_number, m, n, i, sum = 0;

    //taking input from user
    printf("Enter m: ");
    scanf("%d", &m);
    printf("Enter n: ");
    scanf("%d", &n);

    printf("\n\n");//just for extra line

    //this loop will check every number is it palindrome or not
    for(i = m; i <= n; i++){
        number = i;
        reverse_number = 0;

        //this loop will calculate the reverse number
        while(number > 0){
            reverse_number = (reverse_number * 10) + (number % 10);
            number = number / 10;
        }

        //if i is equal to reverse number then it will print as it is a palindrome number
        if(reverse_number == i){
            printf("%d ", i);
            sum = sum + i;
        }
    }

    printf("\n\nSum of these palindrome number is: %d\n", sum);//printing sum

    return 0;
}
