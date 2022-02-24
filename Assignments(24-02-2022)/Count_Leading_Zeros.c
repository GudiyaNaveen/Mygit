/* Write a C program count leading zeros in a binary number using bitwise operator */

/*..........count leading zeros in binary number............*/
#include <stdio.h>
#define MY_SIZEOF(type) ((char *)(&type+1)-(char*)(&type))*8
int main()
{
    signed int x;
    int i,n,c=0;
    scanf("%d",&x);
    n=MY_SIZEOF(x);
    for(i=n-1;i>=0;i--)
    {
        if(x&(1<<i))
        {
            printf("1");
        }
        else
        {
            printf("0");
            c++;
        }
    }
    printf("\n");
    printf("No of leading zeros: %d\n",c);
    return 0;
}
