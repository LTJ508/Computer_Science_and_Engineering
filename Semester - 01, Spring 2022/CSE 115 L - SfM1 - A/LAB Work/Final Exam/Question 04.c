#include <stdio.h>
#include <string.h>

typedef struct {
    char Name[100];
    double Rating;
    char Location[100];
    int NumOfReviews;
} Restaurant;

void PRINT_INFO(Restaurant rest)
{
    printf("Name: %s\nRating: %0.1lf\nLocation: %s\nNumOfReviews: %d\n\n", rest.Name, rest.Rating, rest.Location, rest.NumOfReviews);
}

int main()
{
    int size, i, index;
    double max;

    printf("Enter total number of restaurant: ");
    scanf("%d", &size);
    fflush(stdin);

    Restaurant rest[size];

    for(i = 0; i < size; i++){
        printf("Name: ");
        gets(rest[i].Name);

        if(strcmp(rest[i].Name, "") == 0) break;

        printf("Rating: ");
        scanf("%lf", &rest[i].Rating);
        fflush(stdin);

        printf("Location: ");
        gets(rest[i].Location);

        printf("NumOfReviews: ");
        scanf("%d", &rest[i].NumOfReviews);
        fflush(stdin);

        printf("\n");
    }

    size = i;//REASIGNING SIZE AS USER HIT THE ENTER

    max = rest[0].Rating;

    for(i = 1; i < size; i ++){//FINDING HIGHEST RATING
        if(rest[i].Rating > max){
            max = rest[i].Rating;
        }
    }

    printf("\n\nInfo of the Restaurant with highest rating:\n\n");

    for(i = 0; i < size; i++){//RATING CAN BE SAME. THIS FUNCTION WILL PRINT ALL THE RESTAURANT WITH HIGESHT RATING
        if(rest[i].Rating == max){
            PRINT_INFO(rest[i]);
        }
    }

    return 0;
}
