#include <stdio.h>

int main()
{
    int number;

    printf("Input: ");
    scanf("%d", &number);

    if(number%2==0 && number%5==0){
        printf("\nOutput: Divisible by 2 and 5.\n");
    }
    else{
        printf("\nOutput: Not divisible by 2 and 5\n");
    }

    return 0;
}
