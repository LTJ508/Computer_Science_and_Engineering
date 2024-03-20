/*C programs to demonstrate bitwise operators:*/

#include <stdio.h>

int main()
{
    int i = 0x3, num = 0x30;
    printf("Right shift by %x: %x\n", i, num>>i);
    printf("\n");
    printf("Left shift by %x: %x\n", i, num<<i);

    return 0;
}
