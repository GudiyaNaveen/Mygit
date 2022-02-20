#include<stdio.h>
int main()
{
    int a[1000],b[1000],n,i;
    int *ptr1,*ptr2;
    ptr1=a;
    ptr2=b;
    printf("Enter no of elements in an array: ");
    scanf("%d",&n);
    printf("Enter elements in an array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr1+i));
    }
    printf("Elements in an array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(ptr1+i));
    }
    printf("\n");
    printf("Copy of one array to another array *ptr2<---ptr1: ");
    for(i=0;i<n;i++)
    {
        *(ptr2+i)=*(ptr1+i);
        printf("%d  ",*(ptr2+i));
    }
    printf("\n");
    return 0;
}

