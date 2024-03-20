/*
    Writing a C program to compute the quadruple factorial of a given number n.
    q(n) = (2n!)/(n!)
*/

#include <stdio.h>

int main()
{
    int number, i, q_of_n = 1;

    //taking input from user
    printf("Enter a number: ");
    scanf("%d", &number);

    //(2n!)/(n!) is equal to (2n - n+1)!
    for(i = (2 * number); i > (2 * number - number); i--){//this loop will calculate the quadruple factorial of a number
        q_of_n = q_of_n * i;
    }

    //printing the result
    printf("\nq(%d) = %d\n", number, q_of_n);

    return 0;
}
