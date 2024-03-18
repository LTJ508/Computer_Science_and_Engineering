#include<stdio.h>

int multiply(int m, int n)
{
    /*
        This will compute  m x n recursively and return the product.
        Say m = 6 and n = 3
        6 x 3 = 6 + (6 x 2)
              = 6 + 6 + (6 x 1)
              = 6 + 6 + 6 = 18

        General Case: multiply(m, n) = m + multiply(m, n-1) , if n > 1
        Base Case : multiply(m, n) = m , if n = 1
    */
    if(n==1)
        return m;
    else
        return m+multiply(m, n-1);
}
int main()
{

    int a, b;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("\nEnter another number: ");
    scanf("%d", &b);

    printf("\n%d x %d = %d", a, b, multiply(a,b));

}
