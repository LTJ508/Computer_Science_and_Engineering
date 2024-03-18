#include <stdio.h>
#include <math.h>

int DEPARTURE_TIME(int arrivals_time, int speed, int distance);

int main()
{
    int arrivals_time, speed, distance, departure_time;

    printf("Enter arrivals time(24 hour- 8:30 pm = 2030): ");
    scanf("%d", &arrivals_time);
    printf("Enter speed in km/h: ");
    scanf("%d", &speed);
    printf("Enter distance in km: ");
    scanf("%d", &distance);

    departure_time = DEPARTURE_TIME(arrivals_time, speed, distance);

    if(departure_time >= 0){
        printf("\nYour Departure Time is(24 hour- 8:30 pm = 2030): %d\n", departure_time);
    }
    else{
        printf("\nYou can't go there in there in same day.\n");
    }

    return 0;
}

int DEPARTURE_TIME(int arrivals_time, int speed, int distance)
{
    double required_time = (double)distance / (double)speed;
    int required_hour = (int)required_time;
    int required_minutes = ceil((required_time - required_hour) * 60);

    int arrivals_hour = arrivals_time / 100;
    int arrivals_minutes = arrivals_time % 100;

    int departure_hour = arrivals_hour - required_hour;
    int departure_minutes;
    if(required_minutes > arrivals_minutes){
        departure_hour = departure_hour - 1;
        int temp = required_minutes - arrivals_minutes;
        departure_minutes = 60 - temp;
    }
    else{
        departure_minutes = arrivals_minutes - required_minutes;
    }

    int departure_time = departure_hour * 100 + departure_minutes;

    return departure_time;
}
