#include <stdio.h>

int factorial(int n);

int main()
{
    int n, result;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if(n < 0)
    {
        printf("Factorial of negative numbers is not defined.\n");
    }
    else
    {
        result = factorial(n);
        printf("Factorial of %d = %d\n", n, result);
    }
    return 0;
}

int factorial(int n)
{
    if(n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n-1);
    }
}
