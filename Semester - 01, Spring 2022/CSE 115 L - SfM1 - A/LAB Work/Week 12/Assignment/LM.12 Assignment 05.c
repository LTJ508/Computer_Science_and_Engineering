/*
    Write a C program using function that reads
    a floating point number n and an integer d
    and then prints the rounded value of n up to d decimal places.
    E.g. for n=5.678 and d = 2; it should print 5.68
*/

#include <stdio.h>

void ROUNDUP(double number, int d);//function prototype

int main()
{
    double number;
    int d;

    //taking input from user
    printf("Enter number: ");
    scanf("%lf", &number);
    printf("Enter decimal place: ");
    scanf("%d", &d);

    printf("\n");

    ROUNDUP(number, d);//calling function

    return 0;
}

void ROUNDUP(double number, int d)//main roundup function
{
    int number_int, fraction_int, i, j;
    double fraction_part;

    number_int = number;//separating integer part
    number = number - (int)number;//separating fraction part

    //this loop will convert the fraction to integer and keeping the range of required decimal place
    for(i=1, j = 0; i <= d; i++){
        number = number * 10;//this statement convert the fraction to integer like 0.21 = 2.1 = 21.0
        j = j*10+9;//i will check if the number is 9999.. or not
    }

    if((int)number == j){//if number is equal to 9999..
        number_int++;//integer part will be one up
        fraction_int = 0;//if roundup then integer of fraction will be 0
    }
    else{
        fraction_part = number - (int)number;//after converting required decimal place to integer now checking the next digit so i separate it
        //now fraction part is the next digit

        if(fraction_part >= 0.9){//if greater than 0.9 then main integer will be one up
            number_int++;
        }
        else if(fraction_part >= 0.5){//remember number is now the integer of fraction part
            number++;
        }

        fraction_int = number;//this is the fraction part
    }

    printf("%d.%d\n", number_int, fraction_int);//now printing separately
}
