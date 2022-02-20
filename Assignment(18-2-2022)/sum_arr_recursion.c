#include<stdio.h>
#define SIZE 100
int sum_arr(int [],int);

int main()
{
    int a[SIZE],n,i,x;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements in an array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    x=sum_arr(a,n);
    printf("Sum of an array: %d\n",x);
    return 0;
}

int sum_arr(int a[],int n)
{
   static int s=0;
   int i=0;
   if(n>0)
   {
       i=n-1;
       s=s+a[i];
       sum_arr(a,i);
   }
   return s;
}
