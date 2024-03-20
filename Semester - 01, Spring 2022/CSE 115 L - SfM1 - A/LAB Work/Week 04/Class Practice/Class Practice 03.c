/*C program to check Leap Year (a year is a leap year if – (i) it is divisible by 4 but not divisible by 100 OR (ii) it is divisible by 400):*/

#include <stdio.h>

int main()
{
    int year;
    /* Read year from user */
    printf("Enter year : ");
    scanf("%d", &year);

    /* Check for leap year */
    if(((year%4 == 0) && (year%100 !=0)) || (year%400==0)){
        printf("LEAP YEAR");
    }
    else{
        printf("Not Leap Year");
    }

    return 0;
}
