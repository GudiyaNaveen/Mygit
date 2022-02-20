#include<stdio.h>
int main()
{
    int i,j,x,n;
    const int *ptr=&n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=*ptr;i>=1;i--)
    {
        for(x=1;x<=*ptr-i;x++)
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

