#include <stdio.h>

int IS_PALINDROME(int number);

int main()
{
    int m, n, status, sum = 0, i;

    printf("Enter m: ");
    scanf("%d", &m);
    printf("Enter n: ");
    scanf("%d", &n);

    for(i = m; i <= n; i++){
        status = IS_PALINDROME(i);
        if(status == 1){
            sum += i;
        }
    }

    printf("\nSum of Palindrome numbers from %d to %d is: %d\n", m, n, sum);

    return 0;
}

int IS_PALINDROME(int number)
{
    int reverse_number = 0;

    int temp = number;

    while(number > 0){
        reverse_number = (reverse_number * 10) + (number % 10);
        number /= 10;
    }

    if(reverse_number == temp){
        return 1;
    }
    else{
        return 0;
    }
}
