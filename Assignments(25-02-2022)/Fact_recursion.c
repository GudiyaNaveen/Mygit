/* Write C program to factorail of a number using Function Recursion. */

#include<stdio.h>

int factorial(int n)
{
    if(n==0)
        return 1;
    return (n*factorial(n-1));
}

int main()
{
    int x,n;
    printf("Enter a number: ");
    scanf("%d",&x);
    n=factorial(x);
    printf("factorial of %d is %d\n",x,n);
    return 0;
}
