/*2.	Farhan must pay a bill to a shopkeeper. The shopkeeper doesn’t have any change, so Farhan must have all the notes required to pay the bill. Write a C program that reads the bill and the number of each type of note (500, 100, 50, 20, 10, 5, 2, 1) from user and then output whether it is possible for Farhan to pay the bill or not. If it is possible, then also output the number of each notes required to pay the bill.
Tentative Input/Output (bold ones are user inputs):
Enter amount: 1175 
Enter number of notes: 
500: 1
100: 7 
50: 1
20: 0
10: 5
5: 1
2: 0
1: 0
Farhan can pay the bill by using the following counts of different notes:
500: 1
100: 6 
50: 1
20: 0
10: 2
5: 1
2: 0
1: 0
*/


#include <stdio.h>

int main()
{
    int bill, tk500, tk100, tk50, tk20, tk10, tk5, tk2, tk1, total, temp, temp2, temp3, ability;
    int five_hundread, one_hundread, fivety, twenty, ten, five, two, one, remainder;

    printf("Enter the bill amount: ");
    scanf("%d", &bill);

    printf("\nNow the number of each note you have:\nTK 500: ");
    scanf("%d", &tk500);

    printf("TK 100: ");
    scanf("%d", &tk100);

    printf("TK 50: ");
    scanf("%d", &tk50);

    printf("TK 20: ");
    scanf("%d", &tk20);

    printf("TK 10: ");
    scanf("%d", &tk10);

    printf("TK 5: ");
    scanf("%d", &tk5);

    printf("TK 2: ");
    scanf("%d", &tk2);

    printf("TK 1: ");
    scanf("%d", &tk1);

    total = 500*tk500 + 100*tk100 + 50*tk50 + 20*tk20 + 10*tk10 + 5*tk5 + 2*tk2 + 1*tk1;

    if(total < bill){
        printf("\nSorry!! Your balance is shorter than bill amount. You can't pay the bill.\n");
    }
    else{

        ability = 1;

        five_hundread = bill / 500;
        remainder = bill % 500;

        one_hundread = remainder / 100;
        remainder = remainder % 100;

        fivety = remainder / 50;
        remainder = remainder % 50;

        twenty = remainder / 20;
        remainder = remainder % 20;

        ten = remainder / 10;
        remainder = remainder % 10;

        five = remainder / 5;
        remainder = remainder % 5;

        two = remainder / 2;
        remainder = remainder % 2;

        one = remainder / 1;

        if(tk500 < five_hundread){
            temp = five_hundread - tk500;
            five_hundread = tk500;
            one_hundread = one_hundread + temp*5;
        }

        if(tk100 < one_hundread){
            temp = one_hundread - tk100;
            one_hundread = tk100;
            fivety = fivety + temp*2;
        }

        if(tk50 < fivety){
            temp = fivety - tk50;
            fivety = tk50;
            temp2 = temp / 2;
            temp3 = temp%2;
            twenty = twenty + temp2*5;
            twenty = twenty + temp3*2;
            ten = ten + temp3;
        }

        if(tk20 < twenty){
            temp = twenty - tk20;
            twenty = tk20;
            ten = ten + temp*2;
        }
        if(tk10 < ten){
            temp = ten - tk10;
            ten = tk10;
            five = five + temp*2;
        }
        if(tk5 < five){
            temp = five - tk5;
            five = tk5;
            temp2 = temp / 2;
            temp3 = temp%2;
            two = two + temp2*5;
            two = two + temp3*2;
            one = one + temp3;
        }
        if(tk2 < two){
            temp = two - tk2;
            two = tk2;
            one = one + temp*2;
        }
        if(tk1 < one){
            ability = 0;
        }

        switch(ability)
        {
            case 0: printf("\nSorry!! You can't pay the bill. You don't have enough notes.\n");
            break;

            case 1:
                printf("\n\nCongratulations. You can pay your bill.\n\nTotal number of notes\nTK 500: %d\nTK 100: %d\nTK 50: %d\nTK 20: %d\nTK 10: %d\nTK 5: %d\nTK 2: %d\nTK 1: %d\n", five_hundread, one_hundread, fivety, twenty, ten, five, two, one);
                break;
        }

    }

    return 0;
}
