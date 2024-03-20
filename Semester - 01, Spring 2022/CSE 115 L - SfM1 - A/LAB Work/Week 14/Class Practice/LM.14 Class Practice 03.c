/*
    Array of structs (using 10 entries):
*/

#include <stdio.h>

typedef struct {//declaring  variable type using struct
    char name[50];
    int roll;
    double marks;
} student;//type name

int main()
{
    student s[10];//declaring variable of student type
    int i;//for running loop

    printf("Enter Students Information: ");

    for(i = 0; i < 10; i++){//this loop will take input for each student
        s[i].roll = i+1;//assigning roll

        printf("For Roll Number %d:\nEnter Name: ", s[i].roll);
        scanf("%[^\n]", s[i].name);//taking input of string with space
        printf("Enter Marks: ");
        scanf("%lf", &s[i].marks);//taking input of marks
        fflush(stdin);//clearing scanf buffer
        printf("\n");//extra new line
    }

    printf("\n\nDisplaying information of Students:\n\n");

    for(i = 0; i < 10; i++){//this loop will print the student information
        printf("Information for Roll No.: %d\nName: %s\nMarks: %0.2lf\n\n", s[i].roll, s[i].name, s[i].marks);
    }

    return 0;
}
