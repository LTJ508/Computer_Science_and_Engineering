#include <stdio.h>

int main()
{
    char status;

    printf("How many Vaccine you get(0, 1, 2, B for Booster): ");
    scanf("%c", &status);

    switch(status)
    {
    case '0':
        printf("\nUnvaccinated. Not eligible\n");
        break;
    case '1':
        printf("\nComplete First Dose. Not eligible\n");
        break;
    case '2':
        printf("\nComplete Second Dose. Eligible\n");
        break;
    case 'B':
    case 'b':
        printf("\nBooster Dose. Eligible\n");
        break;
    default:
        printf("\nError!! You enter wrong status. Please run again.\n");
    }

    return 0;
}
