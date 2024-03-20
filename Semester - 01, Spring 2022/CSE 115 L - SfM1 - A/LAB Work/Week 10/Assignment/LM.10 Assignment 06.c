/*

*********
 *******
  *****
   ***
    *

*/

#include <stdio.h>

int main()
{
    int n, i, j, k;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("\n\n");
    k = 2 * n - 1;
    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
            printf(" ");
        }
        for(j = 1; j <= k; j++){
            printf("*");
        }
        printf("\n");
        k = k - 2;
    }
}
