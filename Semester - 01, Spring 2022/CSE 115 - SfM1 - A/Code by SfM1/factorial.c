/*
    This program computes the factorial of a number
    By definition 0! = 1 and factorial(n) = n * factorial(n-1) for n > 0
*/

int factorial(int n)
{
    if(n==0)
        return 1;
    else
        return n*factorial(n-1);
}

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("\n%d! = %d", a, factorial(a));
}
