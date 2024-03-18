#include<stdio.h>
struct student
{
   char name[50];
   float cgpa;
};

void printInformation(struct student s)
{
    printf("NAME OF THE STUDENT: %s\n", s.name);
    printf("CGPA: %f\n", s.cgpa);
}

void printInfoBetterStudent(struct student s1, struct student s2)
{
    if(s1.cgpa > s2.cgpa)
        printInformation(s1);
    else
        printInformation(s2);
}

int main()
{
    struct student s1, s2;
    s1.cgpa = 3.47;
    strcpy(s1.name, "Anwar");
    //printInformation(s1);

    s2.cgpa = 3.90;
    strcpy(s2.name, "Karim");
    //printInformation(s2);
    printInfoBetterStudent(s1, s2);
}
