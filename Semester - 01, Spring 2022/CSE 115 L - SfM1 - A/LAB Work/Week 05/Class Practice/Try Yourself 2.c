/*Write a C program to check whether an input alphabet is a vowel or a consonant using switch case (assume that the input is an English letter).*/

#include <stdio.h>

int main()
{
    char ch;

    printf("Please enter a alphabet: ");
    scanf("%c", &ch);

    switch(ch)
    {
        case 'a': printf("%c is vowel\n", ch);
        break;

        case 'e': printf("%c is vowel\n", ch);
        break;

        case 'i': printf("%c is vowel\n", ch);
        break;

        case 'o': printf("%c is vowel\n", ch);
        break;

        case 'u': printf("%c is vowel\n", ch);
        break;

        case 'A': printf("%c is vowel\n", ch);
        break;

        case 'E': printf("%c is vowel\n", ch);
        break;

        case 'I': printf("%c is vowel\n", ch);
        break;

        case 'O': printf("%c is vowel\n", ch);
        break;

        case 'U': printf("%c is vowel\n", ch);
        break;

        default: printf("%c is consonant\n", ch);
    }

    return 0;
}

