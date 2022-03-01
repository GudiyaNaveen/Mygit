/*
    WAP to print the below pattern 
    AAAAA
    _BBBB
    __CCC
    ___DD
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
            printf("%c",ch);
        }
        printf("\n");
       ch++;
    }
    return 0;
}
