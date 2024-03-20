/*C programs to demonstrate bitwise operators:*/

#include <stdio.h>

int main()
{
    char c = 105;

    printf("%X", ~c);//1’s complement of c
    printf("\n%X", -c); //2’s complement of c

    return 0;
}
