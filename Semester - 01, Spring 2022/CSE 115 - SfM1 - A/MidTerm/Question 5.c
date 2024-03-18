/*
    MidTerm Exam || Question No.: 05
*/


#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("\n");

    for(i = n; i > 1; ){
        printf("%d ", i);

        if(i%2 == 0){
            i = i / 2;
        }
        else{
            i = 3 * i + 1;
        }
    }

    printf("1\n");

    return 0;
}
