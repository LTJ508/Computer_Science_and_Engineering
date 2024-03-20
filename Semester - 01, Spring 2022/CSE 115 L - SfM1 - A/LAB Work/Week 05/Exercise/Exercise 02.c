/*2.	Find the maximum between two numbers using switch case.*/

#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter two numbers sequentially: ");
    scanf("%d%d", &num1, &num2);

    switch(num1 > num2)
    {
        case 1: printf("\nMaximum Number is: %d\n", num1);
        break;

        case 0: printf("\nMaximum Number is: %d\n", num2);
        break;
    }

    return 0;
}
