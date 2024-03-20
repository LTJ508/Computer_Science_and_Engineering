/*
    Create a struct called BirthCertificate (see below) and read the info of two persons using it. Then
    print the name of the person who is older than the other. Also print his/her parents’ names.
    struct BirthCertificate {
        int day, month, year; //to represent birthdate
        char name[100], fatherName[100], motherName[100];
    }
*/

#include <stdio.h>

typedef struct {//declaring variable type
    int day, month, year;
    char name[100], father_name[100], mother_name[100];
} birth_certificate;//variable type name

void PRINT_INFO(birth_certificate person)//this function will print the information
{
    printf("Name: %s\nFather's Name: %s\nMother's Name: %s\nDate of Birth(DD-MM-YYY): %d-%d-%d\n\n", person.name, person.father_name, person.mother_name, person.day, person.month, person.year);
}

int main()
{
    birth_certificate person[2];//declaring array of birth certificate type

    for(int i = 0; i < 2; i++){//taking input from user
        printf("For %d-th person\nEnter Name: ", i+1);
        gets(person[i].name);
        printf("Enter Father's Name: ");
        gets(person[i].father_name);
        printf("Enter Mother's Name: ");
        gets(person[i].mother_name);
        printf("Enter date of Birth(DD MM YYYY): ");
        scanf("%d %d %d", &person[i].day, &person[i].month, &person[i].year);
        fflush(stdin);
        printf("\n");
    }

    printf("\nOlder Person:\n\n");

    if(person[0].year < person[1].year){
        PRINT_INFO(person[0]);
    }
    else if(person[0].year > person[1].year){
        PRINT_INFO(person[1]);
    }
    else{//if both year are same
        if(person[0].month < person[1].month){
            PRINT_INFO(person[0]);
        }
        else if(person[0].month > person[1].month){
            PRINT_INFO(person[1]);
        }
        else{//if both year and month are same
            if(person[0].day < person[1].day){
                PRINT_INFO(person[0]);
            }
            else if(person[0].day > person[1].day){
                PRINT_INFO(person[1]);
            }
            else{//both year, month and day are same
                printf("\nBoth are same age.\n");
                PRINT_INFO(person[0]);
                PRINT_INFO(person[1]);
            }
        }
    }

    return 0;
}
