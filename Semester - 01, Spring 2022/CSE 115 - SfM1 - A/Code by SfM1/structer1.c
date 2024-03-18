#include<stdio.h>
#include<string.h>

struct info
{
    char name[20];
    int age,id;
    float cgpa;
};




int main()
{
    struct info std[4];
    int i;
    for(i=0; i<4; i++)
    {
        printf("\nEnter student %d Information",i+1);
        printf("\nEnter Name :");
        fflush(stdin);
        gets(std[i].name);
        printf("Enter Age :");
        scanf("%d",&std[i].age);
        printf("Enter Id:");
        scanf("%d",&std[i].id);
        printf("Enter CGPA :");
        scanf("%f",&std[i].cgpa);

    }

    for(i=0;i<4;i++)
    {
        printf("\n\n\t\tInformation of %dth student \n",i+1);
        printf("Name :%s\n",std[i].name);
        printf("Age :%d\n",std[i].age);
        printf("Id :%d\n",std[i].id);
        printf("CGPA :%.2f\n",std[i].cgpa);
    }





}
