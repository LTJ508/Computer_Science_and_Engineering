/*
    Write a C program to print the first n palindrome numbers where n is an input.
*/

#include <stdio.h>

int main()
{
    int number, reverse_number, n, i, count = 1;

    //taking input from user
    printf("Enter n: ");
    scanf("%d", &n);

    printf("\n\n");//just for extra line

    //this loop will check every number is it palindrome or not
    for(i = 0; count <= n; i++){
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
            count++;
        }
    }

    printf("\n\n");//just for new line

    return 0;
}
