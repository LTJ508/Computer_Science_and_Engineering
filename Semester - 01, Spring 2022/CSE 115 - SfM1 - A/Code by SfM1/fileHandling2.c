#include<stdio.h>

int main()
{
    FILE *outp;

    outp = fopen("text.txt", "w");
    int low, high;
    printf("Enter a low number: ");
    scanf("%d", &low);
    printf("\nEnter a high number: ");
    scanf("%d", &high);
    for(int i = low; i<=high; i++)
        fprintf(outp, "%d ", i);

    fclose(outp);


}

