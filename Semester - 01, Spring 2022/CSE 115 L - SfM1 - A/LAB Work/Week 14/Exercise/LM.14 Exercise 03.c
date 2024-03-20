/*
    Create a struct called “Employee” with the following members:
        a) Name
        b) Date of Birth (D.O.B., in short)
        c) Starting Date
        d) Salary
    Create an array of 4 employee variables; then read user input to fill up this array. Then display
    the info of the employee who gets the highest salary.

    Sample input/output:

    Name: Bob Marley
    D.O.B: 1/4/1993
    Starting date: 12/6/2016
    Salary: 20000

    Name: Rob Harfey
    D.O.B: 2/11/1982
    Starting date: 16/12/2016
    Salary: 20000

    Name: katty Harley
    D.O.B: 12/4/1993
    Starting date: 2/6/2016
    Salary: 30000

    Name: Betty Simpson
    D.O.B: 3/11/1980
    Starting date: 25/11/2016
    Salary: 10000

    Info of employee with highest salary:
    Name: katty Harley
    D.O.B: 12/4/1993
    Starting date: 2/6/2016
    Salary: 30000

    Hint: You can use scanf("%d/%d/%d", &d, &m, &y); command to read dates in the above format.

    Bonus: Print the info of the employee who joined most recently (for the above inputs, the most recently
    joined employee is: Rob Harfey with starting date: 16/12/2016). You must create another struct for DOB
    and starting date (see nested structure). You can use the logic of comparing two dates in exercise 2 here.

*/

#include <stdio.h>

typedef struct {//declaring variable type
    char name[50];
    int day, month, year;
    int day_st, month_st, year_st;
    int salary;
} employee;//variable type name

void PRINT_INFO(employee person)//this function will print the info only
{
    printf("Name: %s\n", person.name);
    printf("Date of Birth(DD/MM/YYYY): %d/%d/%d\n", person.day, person.month, person.year);
    printf("Starting Date(DD/MM/YYYY): %d/%d/%d\n", person.day_st, person.month_st, person.year_st);
    printf("Salary: %d\n\n", person.salary);
}

void GREATER_SALARY(employee person[])//this function will find the highest salary and print all employee who have highest salary
{
    printf("Info of employee with highest salary:\n");

    int highest_salary = 0;

    for(int i  = 0; i < 4; i++){//finding highest salary
        if(person[i].salary > highest_salary){
            highest_salary = person[i].salary;
        }
    }

    for(int i = 0; i < 4; i++){//who match the highest salary printing it
        if(person[i].salary == highest_salary){
            PRINT_INFO(person[i]);
        }
    }
}

void RECENTLY_JOINED(employee person[])//this function will find the most recently joined employee
{
    printf("Info of employee who joined recently:\n");

    employee recent_person;
    int i;

    recent_person.year_st = 0;

    for(i = 0; i < 4; i++){//this loop will find the recent joined date
        if(person[i].year_st > recent_person.year_st){//if year is greater then it will be the most recent
            recent_person.year_st = person[i].year_st;
            recent_person.month_st = person[i].month_st;
            recent_person.day_st = person[i].day_st;
        }
        else if(person[i].year_st == recent_person.year_st){//if both year is same then check for month
            if(person[i].month_st > recent_person.month_st){//if month is greater then replace the month and day value
                recent_person.month_st = person[i].month_st;
                recent_person.day_st = person[i].day_st;
            }
            else if(person[i].month_st == recent_person.month_st){//if both month is equal then check for day
                if(person[i].day_st > recent_person.day_st){//if day is greater then it will be most recent and update it otherwise day will be the previous one
                    recent_person.day_st = person[i].day_st;
                }
            }
        }
    }

    for(i = 0; i < 4; i++){//this loop will print all the employee who joined in recently date
        if(person[i].day_st == recent_person.day_st && person[i].month_st == recent_person.month_st && person[i].year_st == recent_person.year_st){
            PRINT_INFO(person[i]);
        }
    }
}

int main()//main function
{
    employee person[4];//declaring array of employee type

    for(int i = 0; i < 4; i++){//taking input for each employee
        printf("For %d-th Person\nName: ", i+1);
        gets(person[i].name);
        printf("Date of Birth(DD/MM/YYY): ");
        scanf("%d/%d/%d", &person[i].day, &person[i].month, &person[i].year);
        printf("Starting Date(DD/MM/YYYY): ");
        scanf("%d/%d/%d", &person[i].day_st, &person[i].month_st, &person[i].year_st);
        printf("Salary: ");
        scanf("%d", &person[i].salary);

        fflush(stdin);//clearing buffer
        printf("\n");
    }

    GREATER_SALARY(person);//calling function
    RECENTLY_JOINED(person);//calling function

    return 0;
}
