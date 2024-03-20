/*:  Write a C program to find minimum among three numbers.*/

#include <stdio.h>

int main()
{
    int x, y, z;

    /*
    *Reads any three integer values from user
    */
    printf("Enter three distinct numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    if(x < y && x < z){
        printf("%d is minimum", x);
    }
    else if(y < z){
        printf("%d is minimum", y);
    }
    else{
        printf("%d is minimum", z);
    }

    return 0;
}

