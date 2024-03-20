/*
    C Program that reads two distances (in feet+inches) and prints their sum:
*/

#include <stdio.h>

typedef struct {//declaring struct as variable type
    int feet;
    int inch;
} distant;//type name

int main()
{
    distant d1, d2, sum;//declaring variable of distant type

    printf("1st Distant\nEnter Feet: ");
    scanf("%d", &d1.feet);//taking input
    printf("Enter Inch: ");
    scanf("%d", &d1.inch);//taking input

    printf("\n2nd Distant\nEnter Feet: ");
    scanf("%d", &d2.feet);//taking input
    printf("Enter Inch: ");
    scanf("%d", &d2.inch);//taking input

    sum.feet = d1.feet + d2.feet;//calculating
    sum.inch = d1.inch + d2.inch;//calculating

    sum.feet = sum.feet + (sum.inch / 12);//converting inch to feet
    sum.inch = sum.inch % 12;//recalculating inch

    printf("\nSum of Distant: %d\'-%d\"\n", sum.feet, sum.inch);//printing

    return 0;
}
