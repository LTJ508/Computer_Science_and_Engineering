/*
    Write a C program to print all palindrome numbers between m and n (m,  n are inputs).
    For e.g. 121 is a palindrome since the reverse of 121 = 121;
    but 152 is not a palindrome.
*/

#include <stdio.h>

int main()
{
    int number, reverse_number, m, n, i;

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
        }
    }

    printf("\n\n");//just for new line

    return 0;
}
