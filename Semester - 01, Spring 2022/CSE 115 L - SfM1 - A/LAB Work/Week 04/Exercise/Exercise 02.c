/*
    Writing a C program that decides whether a person is eligible to work in a particular company or not.
    The company policy is: If the person’s age is between 25 and 45, s/he are eligible to work.
    Otherwise, your software should say “You are too young or too old”.
*/



#include <stdio.h>

int main()
{
    int age;

    //taking input from user in a clear and good looking interface
    printf("Enter your age: ");
    scanf("%d", &age);

    //checking eligibility
    if(age >=25 && age <= 45){
        printf("\nCongratulations. You are eligible to work.\n");
    }

    //checking why he/she is not eligible
    else if(age < 25){
        printf("\nSorry!! You are too young.\n");
    }
    else{
        printf("\nSorry!! You are too Old.\n");
    }

    return 0;
}
