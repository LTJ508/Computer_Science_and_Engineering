/*

    1
   234
  56789
 0123456
789012345

*/

#include <stdio.h>

int main()
{
    int n, i, j, digit = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("\n\n");

    for(i = 1; i <= n; i++){
        for(j = i; j <= n; j++){
            printf(" ");
        }
        for(j = 1; j <= i * 2 - 1; j++){
            printf("%d", digit);
            digit++;
            if(digit == 10){
                digit = 0;
            }
        }
        printf("\n");
    }

    printf("\n\n");

    return 0;
}
