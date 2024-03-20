/*
    Writing a C program that take input of all angles of a triangle and check whether triangle is valid or not.
*/



#include <stdio.h>

int main()
{
    int a, b, c;

    //taking input from user in a clear and good looking interface
    printf("Enter the angle of BAC: ");
    scanf("%d", &a);
    printf("Enter the angle of ABC: ");
    scanf("%d", &b);
    printf("Enter the angle of ACB: ");
    scanf("%d", &c);

    //if sum the angles is equal to 180 degree then the triangle is valid
    if((a+b+c) == 180){
        printf("\nThe Triangle is Valid.\n");
    }
    else{
        printf("\nThe Triangle is Invalid!!\n");
    }

    return 0;
}
