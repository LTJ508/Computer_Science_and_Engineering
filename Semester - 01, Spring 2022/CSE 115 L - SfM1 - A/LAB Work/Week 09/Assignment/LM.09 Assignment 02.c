#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("\n");

    for(i = 1; i <= n; i++){
        for(j = n; j > i; j--){
            printf(" ");
        }
        for(j = 1; j <= i; j++){
            if(i == 1 || i == n || j == 1 || j == i){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n\n");

    return 0;
}
