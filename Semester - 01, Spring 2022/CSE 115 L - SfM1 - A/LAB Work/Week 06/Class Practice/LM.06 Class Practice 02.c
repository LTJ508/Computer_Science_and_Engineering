#include <stdio.h>

int main()
{
    int i, n;
    printf("Print odd numbers till: ");
    scanf("%d", &n);     //Read the upper limit

    printf("All odd numbers from 1 to %d are: \n", n);
    for(i = 1;  i <= n;  i += 2)
    {
        printf("%d\n", i);
    }

    return 0;
}

