#include <stdio.h>

int SUM(int a)
{
    int sum = 0;

    for(int i = 0; a > 0; i++){

        if(i % 2 == 0){
            sum = sum + (a*a);
            a--;
        }
        else{
            sum = sum - (a*a);
            a--;
        }
    }

    return sum;
}

int main()
{
    int a, sum;

    printf("Enter a: ");
    scanf("%d", &a);

    sum = SUM(a);

    printf("Sum is: %d\n", sum);
}
