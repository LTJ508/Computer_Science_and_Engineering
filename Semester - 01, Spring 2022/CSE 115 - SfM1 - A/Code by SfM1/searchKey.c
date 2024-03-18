/*
Write a program that searches for a given value (called a search key) in an array and prints the first and
last index in which that value appears.

Example: arr = [1, 3, 2, 4 ,5 ,3 ,4 ,3]
         Key = 3

Situation 1 : key value occurs once: e.g. Key = 3, arr = [1, 3, 4, 5, 2] , print 1, 1
Situation 2:  key value occurs multiple times e.g. arr = [1, 3, 2, 4 ,5 ,3 ,4 ,3] Key = 3, print 1, 7
Situation 3:  key does not occur in the array e.g. key = 3, arr = [1, 4, 5 ,7,6], print -1, -1


Also Write a function to print the frequency of a key value;
*/


#include<stdio.h>

void getFrequency(int arr[], int size, int key)
{

    int freq = 0;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == key)
            freq++;
    }
    printf("%d has occurred %d times in the array", key, freq);
    printf("\n");
}

void printIndex(int arr[], int size, int key)
{
    int first = -1, last =-1;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == key)
        {
            if(first == -1)
                first = i;
            else
                last = i;
        }
    }
    if(last == -1 && first > -1)
        last = first;
    for(int i = 0; i<size; i++)
        printf("%d ", arr[i]);
    printf("\n");
    printf("%d occurs first and last at indices [%d %d]", key, first, last);
    printf("\n");
}

int main()
{
    int a[] = {4, 3, 2, 1, 1, 6, 3, 1};
    printIndex(a, 8, 3);
    getFrequency(a, 8, 1);
}
