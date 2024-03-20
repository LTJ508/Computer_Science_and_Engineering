/*

         0
        01
       010
      0101
     01010

*/

#include <stdio.h>

int main()
{
    int i, j, row;

    printf("Enter row: ");
    scanf("%d", &row);

    printf("\n\n");

    for(i = 1; i <= row; i++){
        for(j = i; j < row; j++){
            printf(" ");
        }

        for(j = 1; j <= i; j++){
            if(j%2 == 0){
                printf("1");
            }
            else{
                printf("0");
            }
        }

        printf("\n");
    }

    printf("\n\n");

    return 0;
}
