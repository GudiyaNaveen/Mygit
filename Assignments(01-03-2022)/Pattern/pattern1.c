/*
    WAP to print the below pattern 
    *****
    _****
    __***
    ___**
    ____*

*/

#include<stdio.h>
int main()
{
    int i,j,x,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(x=1;x<=n-i;x++)
        {
            printf("_");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
