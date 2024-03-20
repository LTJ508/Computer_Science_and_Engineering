/*C program to find maximum among three numbers:*/

#include <stdio.h>

int main()
{
    int x, y, z;

    /*
    *Reads any three integer values from user
    */
    printf("Enter three distinct numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    if(x > y && x > z){
        printf("%d is maximum", x);
    }
    else if(y > z){
        printf("%d is maximum", y);
    }
    else{
        printf("%d is maximum", z);
    }

    return 0;
}
