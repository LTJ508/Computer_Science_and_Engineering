/*Write a program that prompts the user to insert an integer value, a decimal number and his name and print the inserted value as output.*/

#include<stdio.h>


int main()
{
    int num;
    float deci;
    char name[20];

    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The number is: %d\n\n", num);

    printf("Enter a decimal number: ");
    scanf("%f", &deci);
    printf("The number is: %.2f\n\n", deci);

    printf("Enter your name: ");
    scanf("%s", &name);
    printf("Your name is: %s\n\n", name);

    return 0;
}
