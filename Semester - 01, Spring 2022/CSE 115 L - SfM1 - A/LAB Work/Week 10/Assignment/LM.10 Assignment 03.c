/*

1
23
456
7890
12345

*/

#include <stdio.h>

int main()
{
    int i, j, row, n = 1;

    printf("Enter row: ");
    scanf("%d", &row);

    printf("\n\n");

    for(i = 1; i <= row; i++){
        for(j = 1; j <= i; j++){

            printf("%d", n);
            if(n == 9){
                n = 0;
            }
            else{
                n++;
            }
        }

        printf("\n");
    }

    printf("\n\n");

    return 0;
}
