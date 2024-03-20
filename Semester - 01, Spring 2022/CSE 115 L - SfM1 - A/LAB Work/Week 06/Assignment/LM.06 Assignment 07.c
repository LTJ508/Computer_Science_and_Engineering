/*
    Writing a C program to find power of any number using for loop.  Don’t use pow() function. Example:
    Enter base:    2
    Enter power:   5
    2 to the power  5 = 32
*/

#include <stdio.h>

int main()
{
    int i, base, power, ans = 1;

    //taking input from user
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter power: ");
    scanf("%d", &power);

    //this loop will calculate the value of power
    for(i = 0; i < power; i++){
        ans *= base;
    }

    //now printing the value of the power
    printf("\n%d to the power %d = %d\n", base, power, ans);

    return 0;
}
