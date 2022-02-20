#include <stdio.h>
#define my_sizeof(type) ((char *)(&type+1)-(char*)(&type))*8
int main()
{
    signed int x;
    int i,n,c=0;
    scanf("%d",&x);
    n=my_sizeof(x);
    for(i=n-1;i>=0;i--)
    {
        if((1<<i)&x)
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
    printf("%d\n",n);
    printf("No of leading zeros: %d\n",c);
    return 0;
}
