#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("\n");

    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
            printf("%c", j+64);
        }
        printf("\n");
    }

    for(i = n-1; i >= 1; i--){
        for(j = 1; j <= i; j++){
            printf("%c", j+64);
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}
