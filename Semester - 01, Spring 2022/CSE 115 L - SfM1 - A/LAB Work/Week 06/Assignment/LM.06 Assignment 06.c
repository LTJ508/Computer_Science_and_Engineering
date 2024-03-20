/*
    Writing a C program to compute the value of nPr = n*(n-1)*(n-2)*…*(n-r+1), read n and r from user
*/

#include <stdio.h>

int main()
{
    int i, n, r, nPr = 1;

    //taking input from user
    printf("For compute value of nPr\nNow enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of r(not greater than n): ");
    scanf("%d", &r);

    //this while loop will check the validity for r
    while(r > n || r < 0){
        printf("Error!! Please enter the value of r: ");
        scanf("%d", &r);
    }

    //this loop will calculate the value of nPr. here (n-r+1) is equal to (n-(r-1)).
    for(i = 0; i <= r-1; i++){
        nPr *= (n-i);
    }

    //now printing the value of nPr
    printf("\n%dP%d = %d\n", n, r, nPr);

    return 0;
}
