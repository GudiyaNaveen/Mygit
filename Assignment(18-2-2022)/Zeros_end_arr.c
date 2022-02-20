#include <stdio.h>
#define N 100
int main()
{
    int a[N],n,i=0,j=0;
    printf("Enter no of elements in an array: ");
    scanf("%d",&n);
    printf("Enter elements in an array: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            a[j]=a[i];
            j++;
        }
    }
    while(j<n)
    {
        a[j++]=0;
    }
    printf("After move all zeros at end of an array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}

