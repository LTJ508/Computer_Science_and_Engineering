/*4.	Compute quotient and remainder when you divide x by y (read x, y from user). Also, compute quotient and remainder when you divide y by x. Print all these four results*/

#include <stdio.h>

int main()
{
    int x, y, q_x, r_x, q_y, r_y;

    printf("Please enter the value of x: ");
    scanf("%d", &x);
    printf("Please enter the value of y: ");
    scanf("%d", &y);

    q_x = x / y;
    r_x = x % y;

    q_y = y / x;
    r_y = y % x;

    printf("x/y: %d\nremainder: %d\n\ny/x: %d\nRemainder: %d", q_x, r_x, q_y, r_y);

    return 0;

}
