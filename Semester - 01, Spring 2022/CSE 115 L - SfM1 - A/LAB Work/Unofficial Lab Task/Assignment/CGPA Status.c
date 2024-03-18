#include <stdio.h>

int main()
{
    double cgpa;

    printf("Enter your CGPA: ");
    scanf("%lf", &cgpa);

    while(cgpa < 2.00 || cgpa > 4.00){
        printf("Error!! Enter CGPA Again: ");
        scanf("%lf", &cgpa);
    }

    if(cgpa>= 3.50 && cgpa <= 4.00){
        printf("\nStatus: Very Good\n");
    }

    else if(cgpa >= 3.00 && cgpa <= 3.49){
        printf("\nStatus: Good\n");
    }

    else if(cgpa >= 2.50 && cgpa <= 2.99){
        printf("\nStatus: Fair\n");
    }

    else if(cgpa >= 2.00 && cgpa <= 2.49){
        printf("\nStatus: Poor\n");
    }

    return 0;
}
