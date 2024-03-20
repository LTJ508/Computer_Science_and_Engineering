/*4.	Write a C program to count total number of notes in given amount.
Tentative Input/Output (bold ones are user inputs):
Enter amount: 1176 
Total number of notes: 
500: 2
100: 1 
50: 1
20: 1
10: 0
5: 1
2: 0
1: 1
*/

#include <stdio.h>

int main()
{
    int amount, five_hundread, one_hundread, fivety, twenty, ten, five, two, one, remainder;

    printf("Enter the amount in Taka: ");
    scanf("%d", &amount);

    five_hundread = amount / 500;
    remainder = amount % 500;

    one_hundread = remainder / 100;
    remainder = remainder % 100;

    fivety = remainder / 50;
    remainder = remainder % 50;

    twenty = remainder / 20;
    remainder = remainder % 20;

    ten = remainder / 10;
    remainder = remainder % 10;

    five = remainder / 5;
    remainder = remainder % 5;

    two = remainder / 2;
    remainder = remainder % 2;

    one = remainder / 1;


    printf("\n\nTotal number of notes\n500: %d\n100: %d\n50: %d\n20: %d\n10: %d\n5: %d\n2: %d\n1: %d\n", five_hundread, one_hundread, fivety, twenty, ten, five, two, one);

    return 0;
}
