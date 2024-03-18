#include <stdio.h>
#include <math.h>

int main()
{
    int a, i, sum = 0;

    printf("Enter the value of a: ");
    scanf("%d", &a);

    for(i = 0; i < a; i++){
        if(i%2 == 0){
            sum = sum + (pow((a-i), 2));
        }
        else{
            sum = sum - (pow((a-i), 2));
        }
    }

    printf("\nSum of the series is: %d\n", sum);
}
