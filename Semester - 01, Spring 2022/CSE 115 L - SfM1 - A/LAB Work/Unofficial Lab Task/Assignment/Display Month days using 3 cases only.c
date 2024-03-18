#include <stdio.h>

int main()
{
    int month;

    printf("Enter month number(1-12): ");
    scanf("%d", &month);

    while(month < 1 || month > 12){
        printf("Error!! Enter month number again(1-12): ");
        scanf("%d", &month);
    }

    switch(month)
    {
    case 2:
        printf("\n28 Days\n");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("\n30 Days\n");
        break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("\n31 Days\n");
        break;
    }

    return 0;
}
