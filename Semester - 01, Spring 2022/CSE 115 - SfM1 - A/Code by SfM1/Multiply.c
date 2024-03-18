// Write a C-program to find multiply of two numbers use recursion

#include<stdio.h>

int multiply(int a,int b);
int main()
{
    int m,n;

    printf("Enter m :");
    scanf("%d",&m);
    printf("Enter n :");
    scanf("%d",&n);

    printf("Multiplication of %d x %d is =%d",m,n,multiply(m,n));
    return 0;
}

int multiply(int a,int b)
{
    if(b==1)
        return a;

    else
        return a+multiply(a,b-1);

}

