#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("\n");

    while(number > 0){
        printf("%d ", number%2);
        number = number / 2;
    }

    printf("\n");

    return 0;
}
