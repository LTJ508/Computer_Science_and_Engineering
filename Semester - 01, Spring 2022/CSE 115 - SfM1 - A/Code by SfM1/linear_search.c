#include<stdio.h>

void print(const int a[], int n);
int linear_search(const int a[], int target, int n);
int main()
{
    int t, search;
    int arr[] = {1, 3, 5, 7, 4, 8, 6};
    print(arr, 7);
    printf("Enter a value to search: ");
    scanf("%d", &t);
    search = linear_search(arr, t, 7);
    if(search == -1)
        printf("Element %d is not found ", t);
    else
        printf("Element %d is found in index %d ", t, search);

}

void print(const int a[], int n)
{
    for(int i = 0; i <n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

int linear_search(const int a[], int target, int n)
{
    int found = 0, i;
    for(i = 0; i <n; i++)
    {
        if(a[i]==target) // item found in index i
        {
            found = 1;
            break;
        }
    }
    if(found)
        return i;
    else
        return -1;

}
