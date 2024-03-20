/*
    Structure variable declaration:
*/

#include <stdio.h>

struct person {//declaring struct without variable name
    char name[50];
    int cit_no;
    double salary;
};

/*
struct person {//declaring struct with variable name
    char name[50];
    int cit_no;
    double salary;
}p1, p2, p[20];//variable name
*/

int main()
{
    struct person p1, p2, p[20];//declaring variable name of struct tyoe
}
