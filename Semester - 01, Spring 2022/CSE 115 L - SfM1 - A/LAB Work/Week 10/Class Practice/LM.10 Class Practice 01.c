/*
        *
       * *
      * * *
     * * * *
    * * * * *

*/


#include <stdio.h>

int main()
{
    int i, j, rows;

    printf("Enter no. of rows: ");
    scanf("%d",&rows);

    printf("\n\n");

    int space=rows-1;

    for(i=1; i<=rows; i++, space--){
        for(j=1; j<=space; j++){
            printf(" ");
        }
        for(j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }

    printf("\n\n");

    return 0;
}
