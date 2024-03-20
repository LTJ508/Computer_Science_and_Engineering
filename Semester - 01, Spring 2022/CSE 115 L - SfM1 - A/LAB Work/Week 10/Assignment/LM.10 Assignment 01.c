/*

*****
 *  *
  * *
   **
    *

*/

#include <stdio.h>

int main()
{
    int n, i, j, k;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("\n\n");

    for(i = 1; i <= n; i++){
        for(j = 1; j < i; j++){
            printf(" ");
        }
        if(i == 1){
            for(k = 1; k <= n; k++){
                printf("*");
            }
        }
        else if(i == n){
            printf("*");
        }
        else{
            printf("*");
            for(k = 1; k <= n-2-j+1; k++){
                printf(" ");
            }
            printf("*");
        }

        printf("\n");
    }

    printf("\n\n");

    return 0;
}
