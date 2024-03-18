#include <stdio.h>

int main()
{
    double sum = 0.0, average, count = 0;
    int i, j;
    for(i = 1; i <= 200; i++){
        for(j=i; j>0; j=j/10){
            if(j%10 == 3){
                printf("%d, ", i);
                sum += i;
                count++;
                break;
            }
        }
    }

    average = sum / count;

    printf("\n\nAverage is: %0.2lf\n", average);

    return 0;
}

