/*
    * * * * *
     * * * *
      * * *
       * *
        *

*/

#include <stdio.h>

int main()
{
    int i, j, row;

    printf("Enter row: ");
    scanf("%d", &row);

    printf("\n\n");

    for(i = 1; i <= row; i++){
        for(j = 1; j < i; j++){
            printf(" ");
        }

        for(j = i; j <= row; j++){
            printf("* ");
        }

        printf("\n");
    }

    printf("\n\n");

    return 0;
}
