/*
     WAP to print the below pattern  
    ABCDE
    _BCDE
    __CDE
    ___DE
    ____E
*/

#include<stdio.h>
int main()
{
    int i,j,x,n;
    char ch='A';
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
            printf("%c",ch+j-1);
        }
        printf("\n");
       ch++;
    }
    return 0;
}
