/* Write a C program to get and set nth bit of a number. */

#include <stdio.h>
#define SET_BIT(x) x|(0x1<<p)
#define MY_SIZEOF(type) ((char *)(&type+1)-(char*)(&type))*8

int main()
{
    int x,i,n,p,a;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("Enter postion to clear a bit: ");
    scanf("%d",&p);
    n=MY_SIZEOF(x);
    printf("before set the %d bit:\n",p);
    for(i=n-1;i>=0;i--)
    {
        if(x&(1<<i))
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    printf("\n");
    a=SET_BIT(x);
    printf("After set the %d bit:\n",p);
    for(i=n-1;i>=0;i--)
    {
        if(a&(1<<i))
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    printf("\n");
    printf("%d\n",a);
    return 0; 
}

