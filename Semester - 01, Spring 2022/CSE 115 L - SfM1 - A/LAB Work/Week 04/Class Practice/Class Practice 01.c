/*C program to find maximum between two numbers:*/

#include <stdio.h>

int main()
{
    int n1, n2;

    printf("Enter any two numbers: ");
    scanf("%d %d", &n1, &n2);

    //check if n1 > n2 or not and prints the maximum
    if(n1 > n2){
        printf("%d is maximum", n1);
    }
    else{
        printf("%d is maximum", n2);
    }

    return 0;
}
