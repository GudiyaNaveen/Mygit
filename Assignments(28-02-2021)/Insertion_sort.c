/* Write C program Implement a Insertion sort. */

#include<stdio.h>
#define N 100

int main()
{
    int a[N],i,j,temp,n;
    printf("Enter no of elements in an array: ");
    scanf("%d",&n);
    printf("Enter elements in an array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Before sorting elements in an array: \n");
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
    printf("\n");
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && (a[j]>temp))
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    printf("Before sorting elements in an array:\n ");
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
    printf("\n");
    return 0;
}
