#include <stdio.h>

int main()
{
    double idnm;
    char name[30];
    char university[50];

    //taking input from user
    printf("Please Enter Your Name: ");
    scanf("%s", &name);

    printf("Please Enter Your ID Number: ");
    scanf("%lf", &idnm);

    printf("Please Enter Your University Name: ");
    scanf("%s", &university);

    //now printing these information
    printf("\n\nName\t\t: %s\nID\t\t: %0.lf\nUniversity Name\t: %s\n\n", name, idnm, university);

    return 0;
}
