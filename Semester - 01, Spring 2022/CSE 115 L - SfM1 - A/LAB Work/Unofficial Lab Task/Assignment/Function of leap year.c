#include <stdio.h>

int isLeapYear(int y);

int main()
{
    int year, status;

    printf("Enter a year: ");
    scanf("%d", &year);

    status = isLeapYear(year);

    if(status == 1){
        printf("\n%d is a Leap year.\n", year);
    }
    else{
        printf("\n%d is not a Leap year.\n", year);
    }

    return 0;
}

int isLeapYear(int y)
{
    if(((y%4 == 0) && (y%100 !=0)) || (y%400==0)){
        return 1;
    }
    else{
        return 0;
    }

}
