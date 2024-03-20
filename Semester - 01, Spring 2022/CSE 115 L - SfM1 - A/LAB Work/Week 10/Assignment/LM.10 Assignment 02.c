/*

    A
   B B
  C C C
 D D D D
E E E E E


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
        for(j = 1; j <= i; j++){
            printf("%c ", i+64);
        }

        printf("\n");
    }

    printf("\n\n");

    return 0;
}
