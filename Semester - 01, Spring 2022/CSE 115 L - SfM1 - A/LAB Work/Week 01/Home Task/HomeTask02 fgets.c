#include <stdio.h>
#define MAX 50

int main()
{
    double idnm;
    char name[MAX];
    char university[MAX];

    //taking input from user
    printf("Please Enter Your Name: ");
    fgets(name, MAX, stdin);

    printf("Please Enter Your ID Number: ");
    scanf("%lf", &idnm);
    getchar();

    printf("Please Enter Your University Name: ");
    fgets(university, MAX, stdin);

    //now printing these information
    printf("\n\nName\t\t: %sID\t\t: %0.lf\nUniversity Name\t: %s", name, idnm, university);

    return 0;
}
