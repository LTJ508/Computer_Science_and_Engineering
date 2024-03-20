/*1.	Write a C program to check whether a year is a leap year or not, using switch case. */

#include <stdio.h>

int main()
{
    int year;

    printf("Enter year : ");
    scanf("%d", &year);


    switch(((year%4 == 0) && (year%100 !=0)) || (year%400==0))
    {
        case 1: printf("\nLEAP YEAR\n");
        break;

        case 0: printf("\nNot Leap Year\n");
        break;
    }

    return 0;
}

