/*

      A
     ABC
    ABCDE
   ABCDEFG
  ABCDEFGHI

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

        for(j = 1; j <= 2*i-1; j++){
            printf("%c", j+64);
        }

        printf("\n");
    }

    printf("\n\n");

    return 0;
}


