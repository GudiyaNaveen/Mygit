/*
    WAP to print the below pattern 
    99999
    _7777
    __555
    ___33
    ____1
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
        int k=(i*2-1);
        for(j=1;j<=i;j++)
        {
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}
