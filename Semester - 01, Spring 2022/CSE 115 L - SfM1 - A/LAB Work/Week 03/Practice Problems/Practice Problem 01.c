/*C programs to demonstrate bitwise operators:*/

#include <stdio.h>

int main()
{
    int i = 3, num = 48;
    printf("Right shift by %d: %d\n", i, num>>i);
    printf("\n");
    printf("Left shift by %d: %d\n", i, num<<i);

    return 0;
}
