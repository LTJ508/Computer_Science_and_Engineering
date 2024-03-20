/*
    Create a struct called Student (see below) and read the records of two students using it. Then print
    the name and id of the student who has higher CGPA than the other.
    struct Student{
        char name[50];
        int id;
        float CGPA;
    };
*/

#include <stdio.h>

typedef struct {//declaring variable type
    char name[50];
    int id;
    double CGPA;
} student;//type name

void PRINT_INFO(student s)//this function will print the struct
{
    printf("\nName: %s\nID: %d\nCGPA: %0.2lf\n\n", s.name, s.id, s.CGPA);
}

int main()
{
    student s[2];//declaring student type array

    for(int i = 0; i < 2; i++){//this loop will take input for each student
        printf("For %d-th student\nEnter Student Name: ", i+1);
        gets(s[i].name);
        printf("Enter ID: ");
        scanf("%d", &s[i].id);
        printf("Enter CGPA: ");
        scanf("%lf", &s[i].CGPA);
        fflush(stdin);
        printf("\n");
    }

    printf("\nStudent with higher CGPA:\n");

    if(s[0].CGPA > s[1].CGPA){//comparing with two student
        PRINT_INFO(s[0]);//calling function for print
    }
    else{
        PRINT_INFO(s[1]);//calling function
    }

    return 0;
}
