/*

    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *


*/

#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("\n\n");

    for(i = 1; i <= n; i++){
        for(j = i; j <= n; j++){
            printf(" ");
        }
        for(j = 1; j <= i * 2 - 1; j++){
            printf("*");
        }
        printf("\n");
    }
    for(i = n-1; i >= 1; i--){
        for(j = 1; j <= n-i+1; j++){
            printf(" ");
        }
        for(j = 1; j <= i * 2 - 1; j++){
            printf("*");
        }
        printf("\n");
    }

    printf("\n\n");

    return 0;
}
