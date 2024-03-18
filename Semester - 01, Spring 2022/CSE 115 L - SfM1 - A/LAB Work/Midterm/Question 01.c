#include <stdio.h>

int main()
{
    int number, count = 0, digit;

    printf("Enter Num: ");
    scanf("%d", &number);

    int num = number;

    while(num > 0){
        num = num / 10;
        count++;
    }

    if(count%2 == 0){
        printf("\nMiddle Digit: No\n");
    }
    else{
        for(int i = 1; i <= count/2+1; i++){
            digit = number%10;
            number = number / 10;
        }

        printf("\nMiddle Num: %d. ", digit);


        //checking perfect

        int sum = 0;

        for(int i = 1; i <= digit/2; i++){
            if(digit%i == 0){
                sum = sum + i;
            }
        }



        if(sum == digit && digit != 0){
            printf(" It is perfect number.\n");
        }
        else{
            printf("It is not a perfect Number.\n");
        }


    }

    return 0;
}
