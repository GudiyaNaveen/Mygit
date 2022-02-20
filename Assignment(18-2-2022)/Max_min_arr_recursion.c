#include<stdio.h>
#define N 100

int Max_element(int [],int );
int Min_element(int [],int );

int main()
{
    int arr[N],n,i;
    printf("Enter no of elements in an array:");
    scanf("%d",&n);
    printf("Enter element in array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Maximum Element of the array is: %d\n",Max_element(arr,n));
    printf("Minimum Element of the array is: %d\n",Min_element(arr,n));
    return 0;
}

int Max_element(int a[],int x)
{
   static int i=0,max=0;
    if(i<x)
    {
        if(a[i]>=max)
            max=a[i];
            i++;
            Max_element(a,x);
    }
    return max;
}


int Min_element(int b[],int y)
{
    static int i=0,min=0;
    if(i<y)
    {
        if(b[i]<=min)
            min=b[i];
            i++;
            Min_element(b,y);
    }
    return min;
}
