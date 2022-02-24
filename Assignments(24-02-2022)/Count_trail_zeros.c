/* Write a C program count the trailing zero in a binary number using Bitwise operator */

#include<stdio.h>
#define MY_SIZEOF(type) ((char *)(&type+1)-(char*)(&type))*8

int main()
{
    int n,count=0,i,x;
    printf("Enter a number :");
    scanf("%d",&n);
    x=MY_SIZEOF(n);
    for(i=x-1;i>=0;i--)
    {
         if(n&(1<<i))
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    printf("\n");
    while (n!=0) 
    {
        if (n&1==1) 
        {
            break;
        } 
        else 
        {
            count++;
            n>>=1;
        }
    }
   printf("Number of trailing zeros in a number= %d\n", count);
   return 0;
}
