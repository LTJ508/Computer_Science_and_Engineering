/*1.	C Program to demonstrate the usage of assignment and increment operators:*/

#include <stdio.h>

int main()
{
    char a, b;
    printf("Enter a lowercase letter: ");
    scanf(" %c", &a);

    b = 'A' + a - 'a'; //recommended..
    printf("Uppercase of the given letter is: %c\n\n", b);

    a-=32; //not recommended, since it replace the original character
    printf("Uppercase of given letter is: %c", a);

    ++a; //not recommended, ... ...
    printf("\nUppercase of next letter is: %c\n\n", a);

    return 0;
}
