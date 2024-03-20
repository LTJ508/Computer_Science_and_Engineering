/*
    Writing a C program that asks a shopper to enter amount (in kg) and total price of sugar he bought from different places.
    If the shopper mistakenly enters a negative number as amount/price,
    it prints an error message “Invalid input, enter a positive number” and prompts the shopper to give another input.
    When the shopper enters 0 as an amount then the program terminates and shows the shopper total amount,
    price and average price of sugar per kg.
    [Hint: Use continue statement within a loop] Sample input/output:


    Enter amount (in kg): 5
    Enter price: 350
    Enter amount (in kg): -3
    Invalid input, enter a positive number
    Enter amount (in kg): 5
    Enter price: -67
    Invalid input, enter a positive number
    Enter amount (in kg): 10
    Enter price: 650
    Enter amount (in kg): 0
    Total amount (in kg): 15, Total price: 1000, Average price per kg: 66.67
*/
#include <stdio.h>

int main()
{
    int amount, price, sum_amount = 0, sum_price = 0;
    double average_price;

    while(1){//always true loop like infinite loop.

        //taking input from user
        printf("Enter amount (in kg): ");
        scanf("%d", &amount);

        //checking the validity and exit command
        if(amount <= 0){
            if(amount == 0){
                break;//if 0 then it will be the exit command and it will break the loop
            }
            else{
                printf("Invalid input, enter a positive number\n");
                continue;//if user input any negative number then it will skip the rest part and start again the loop from line 32
            }
        }

        //if 1st input is right then it will take the next input from user
        printf("Enter price: ");
        scanf("%d", &price);

        //again checking validity
        if(price < 0){
            printf("Invalid input, enter a positive number\n");
            continue;//if user input any negative number then it will skip the rest part and start again from line 32
        }

        //if two input is correct then it will calculate the sum.
        sum_amount = sum_amount + amount;//sum of amount
        sum_price = sum_price + price;//sum of price
    }

    average_price = (double)sum_price / (double)sum_amount;//after exit the loop it will calculate the average

    printf("\nTotal amount (in kg): %d, Total price: %d, Average price per kg: %0.2lf\n", sum_amount, sum_price, average_price);//printing output

    return 0;
}
