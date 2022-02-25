/* Write C program to print 10 to 1 in Reverse order using Finction Recursion. */

#include<stdio.h>
#define SIZE 10

void reverse(int );

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    reverse(x);
    return 0;
}

void reverse(int a)
{
    if(a==0)
    {
        return;
    }
    else
    {
        printf("%d ",a);
        reverse(a-1);
        printf("End of reverse function\n");
    }
}
