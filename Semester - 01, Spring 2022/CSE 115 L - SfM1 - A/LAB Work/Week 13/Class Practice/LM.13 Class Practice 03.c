/*
    C Program to read two arrays from user, add them, and then output their sum
*/

#include <stdio.h>

int main()
{
    int i, n;

    //taking input for array size
    printf("Enter Number of Elements: ");
    scanf("%d", &n);

    int a[n], b[n], c[n];//declaring array

    printf("\n");

    //this loop will take input for 1st array
    for(i = 0; i < n; i++){
        printf("Enter 1st array %d-th element: ", i+1);
        scanf("%d", &a[i]);
    }

    printf("\n");

    //this loop will take input of 2nd array
    for(i = 0; i < n; i++){
        printf("Enter 2nd array %d-th element: ", i+1);
        scanf("%d", &b[i]);
    }

    printf("\n");

    //this loop add them keep in another array and print it at a time
    for(i = 0; i < n; i++){
        c[i] = a[i] + b[i];
        printf("%d + %d = %d\n", a[i], b[i], c[i]);
    }

    return 0;
}
