/*
    Writing a C program to enter month number and print number of days in month
*/



#include <stdio.h>

int main()
{
    int month;

    //taking input from user in a clear and good looking interface
    printf("Enter the month number(1-12): ");
    scanf("%d", &month);

    //checking if the month is February or not. I am not considering the leap year.
    if(month == 2){
        printf("\nDays in Month: 28\n");
    }

    //checking for 30 days month as it as low number and it takes less time to check
    else if(month == 4 || month == 6 || month == 9 || month == 11){
        printf("\nDays in Month: 30\n");
    }

    //i am using one more if for writing an error free code. we can use only else but if someone enter a number thats greater than 12 then it will show error
    //thats why using another else if
    else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
        printf("\nDays in Month: 31\n");
    }

    //if someone enter number greater than 12 then it will show an error message
    else{
        printf("\nError!! You enter a wrong number of month.\n");
    }

    return 0;
}
