#include <stdio.h>

double CalSum(int arr[])
{
    double sum = 0.0;
    for(int i = 0; arr[i] != '\0'; i++){
        sum = sum + arr[i];
    }

    return sum;
}

void PRINT_ARR(int arr[])
{
    for(int i  = 0; arr[i] != '\0'; i++){
        printf("%d, ", arr[i]);
    }
}

int main()
{
    int size, i, j = 0, k = 0;

    printf("Enter Size of Array: ");
    scanf("%d", &size);

    int arr[size];
    int even[size];
    int odd[size];

    printf("Input numbers of array: ");

    for(i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < size; i++){
        if(arr[i] % 2 == 0){
            even[j] = arr[i];
            j++;
        }
        else{
            odd[k] = arr[i];
            k++;
        }
    }

    even[j] = '\0';
    odd[k] = '\0';

    printf("Odd Numbers: ");
    PRINT_ARR(odd);
    printf("\nSum of odd numbers: %0.1lf\n", CalSum(odd));
    printf("Even Numbers: ");
    PRINT_ARR(even);
    printf("\nSum of the even numbers: %0.1lf\n", CalSum(even));

    return 0;
}
