#include <stdio.h>
#define SIZE 100
int main()
{
    int a[SIZE],i,n,k,index=0,flag=0;
    int *ptr;
    printf("Enter no of elements in array: ");
    scanf("%d",&n);
    printf("Enter elements in an array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    ptr=&a[0];
    printf("Entered elements in an array: ");
    for(i=0;i<n;i++)
    {
        printf("%d  ",*(ptr+i));
    }
    printf("\n");
    printf("Search Entered element in an array: ");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(*(ptr+i)==k)
        {
            index=i;
            flag=1;
            break;
        }
    }
    (flag==1) ? printf("Element %d is found at %d index positon\n",k,index) : printf("Element %d is not found\n",k);
    return 0;
}
