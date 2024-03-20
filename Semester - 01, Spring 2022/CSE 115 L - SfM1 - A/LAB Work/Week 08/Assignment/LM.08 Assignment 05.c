/*
    Writing a C program that prints all even numbers between m and n (m,n are user inputs) except the ones which are divisible by 3.
    [Hint: Use continue statement within a loop] Sample input/output:
    Enter m: 99
    Enter n: 116
    All even numbers between 100 and 112 except those divisible by 3 are: 100, 104, 106, 110, 112, 116,
*/

#include <stdio.h>

int main()
{
    int m, n, i;

    //taking input from user
    printf("Enter m: ");
    scanf("%d", &m);
    printf("Enter n: ");
    scanf("%d", &n);

    //this loop will validate the input
    while(m > n || m < 0 || n < 0){
        printf("Error!! Try again.\n\n");
        printf("Enter m: ");
        scanf("%d", &m);
        printf("Enter n: ");
        scanf("%d", n);
    }

    printf("\n");//just for clear looks

    //this loop will print the seriese
    for(i = m; i <= n; i++){//loop start
        if(i%2 == 0){//this statement will check the number if it is divisible by 2 or not
            if(i%3 == 0){//this statement will check the number if it is divisible by 3 or not
            continue;//if divisible by 3 then it will continue the from the beginning of the loop line 34. and skip the rest part
            }
        printf("%d", i);//printing the number only

        //this condition will print the comma only. it will check the last number of the series.
        if((n%2 == 0 && n%3 != 0 && i != n) || ((n-1)%2 == 0 && (n-1)%3 != 0 && i < n-1) || ((n-2)%2 == 0 && (n-2)%3 != 0 && i < n-2) || ((n-3)%2 == 0 && (n-3)%3 != 0 && i < n-3)){
            printf(", ");//printing comma only
        }
        }
    }//loop end

    printf("\n");//just for clear looks

    return 0;
}
