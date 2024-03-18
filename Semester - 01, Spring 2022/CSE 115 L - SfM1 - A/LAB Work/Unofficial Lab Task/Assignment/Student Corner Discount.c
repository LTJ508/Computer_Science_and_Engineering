#include <stdio.h>

int main()
{
    double bill, student_discount, discounted_bill, tax, final_bill;
    char student_or_not;

    printf("Enter your bill amount: ");
    scanf("%lf", &bill);
    getchar();

    while(bill < 0){
        printf("Error!! Bill amount can not be negative. Enter again: ");
        scanf("%lf", &bill);
        getchar();
    }

    printf("Are you student? Enter Y or N: ");
    scanf("%c", &student_or_not);
    getchar();

    while(student_or_not != 'Y' && student_or_not != 'y' && student_or_not != 'N' && student_or_not != 'n'){
        printf("Error!! Enter correct statement again: ");
        scanf("%c", &student_or_not);
        getchar();
    }

    printf("\n\nYour Bill Details:\nTotal Purchases\t\t: $%8.2lf\n", bill);


    if(student_or_not == 'Y' || student_or_not == 'y'){
        student_discount = bill * 0.2;
        discounted_bill = bill - student_discount;

        printf("Student's Discount(20%)\t: $%8.2lf\nDiscounted Total\t: $%8.2lf\n", student_discount, discounted_bill);

        tax = discounted_bill * 0.05;
        final_bill = discounted_bill + tax;
    }

    else{
        tax = bill * 0.05;
        final_bill = bill + tax;
    }

    printf("Sales Tax(5%)\t\t: $%8.2lf\nTotal\t\t\t: $%8.2lf\n\n", tax, final_bill);

    return 0;
}
