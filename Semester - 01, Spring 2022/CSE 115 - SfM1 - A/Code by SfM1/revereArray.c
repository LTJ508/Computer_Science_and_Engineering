#include<stdio.h>

void printArray(int a[], int s)
{

    for(int i =0; i < s; i++)
        printf("%d ", a[i]);
    printf("\n");
}

void reversePrint(int a[], int s)
{

    for(int i = s-1; i>=0; i--)
        printf("%d ", a[i]);
}
int main()
{

    int arr[] = {1, 3, 2, 4 ,6, 1, 5};
    printArray(arr, 7);
    reversePrint(arr, 7);
}
