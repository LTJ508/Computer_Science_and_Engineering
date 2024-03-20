#include <stdio.h>

int main()
{
    int i, j, m, n;

    printf("Enter m: ");
    scanf("%d", &m);
    printf("Enter n: ");
    scanf("%d", &n);

    printf("\n");

    for(i = 1; i <= n; i++){
        for(j = n; j >= i; j--){
            printf(" ");
        }

        for(j = 1; j <= m; j++){
            if(i == 1 || i == n || j == 1 || j == m){
                printf("*");
            }
            else{
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}


