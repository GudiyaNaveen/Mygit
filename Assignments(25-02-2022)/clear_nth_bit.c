/* Write a C program to get and set nth bit of a number. */

#include <stdio.h>
#define CLEAR_BIT(x) x&(~(0x1<<p))
#define MY_SIZEOF(type) ((char *)(&type+1)-(char*)(&type))*8

int main()
{
    int x,i,n,p,a;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("Enter postion to clear a bit: ");
    scanf("%d",&p);
    n=MY_SIZEOF(x);
    printf("before clear the %d bit:\n",p);
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
    a=CLEAR_BIT(x);
    /*
        x&(~(0x1<<p)
                 0000 0001
               ~ 1111 1011 -->~(0x1<<2)  
        x=5-->   0000 0101
        p=2--> & 1111 1011  <--(~(0x1<<2) left shift by two times 
        
        a= 0000 0001
    */  
    printf("After clear the %d bit:\n",p);
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

