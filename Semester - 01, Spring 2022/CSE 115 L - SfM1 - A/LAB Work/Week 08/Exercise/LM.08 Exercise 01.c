/*
    Writing a C program to find Greatest Common Divisor (GCD ) of two given integers.
    GCD of two integers is the highest number that totally divides those two integers.
    E.g. GCD of 15 and 25 is 5.
*/

#include <stdio.h>

int main()
{
    int num1, num2, GCD, i, low;

    //taking input from user
    printf("For calculating GCD of Two numbers,\nEnter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    //checking the low number. as GCD is the greatest common divisor we need to start checking from low number to down
    low = (num1 < num2) ? num1:num2;

    //this loop will check and find the GCD
    for(i = low; i >= 1; i--){
        if(num1%i == 0 && num2%i == 0){
            GCD = i;
            break;
        }
    }

    //printing the output
    printf("\nGCD of %d and %d is: %d\n", num1, num2, GCD);

    return 0;
}
