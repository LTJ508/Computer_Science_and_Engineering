/*
    Writing a C program that take input of sides of a triangle and check whether triangle is valid or not
*/



#include <stdio.h>

int main()
{
    int a, b, c;

    //taking input from user in a clear and good looking interface
    printf("Enter the length of AB: ");
    scanf("%d", &a);
    printf("Enter the length of BC: ");
    scanf("%d", &b);
    printf("Enter the length of CA: ");
    scanf("%d", &c);

    //if sum of two side is greater than third side then the triangle is valid
    if((a+b) > c && (a+c) > b && (b+c) > a){
        printf("\nThe Triangle is Valid.\n");
    }
    else{
        printf("\nThe Triangle is invalid!!\n");
    }

    return 0;
}
