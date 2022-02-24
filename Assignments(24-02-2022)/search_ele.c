/* Write a C program search for an element in an array using bitwise operators */

#include<stdio.h>
#define SIZE 100
int main()
{
    int a[SIZE],i,n,element,flag=0;
    int *const ptr=&n;
    printf("Enter size of an array: ");
    scanf("%d",&n);
    printf("Enter elements in array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter a element to be searched in an array: ");
    scanf("%d",&element);
    for(i=0;i<n;i++)
    {
        if((a[i]^element)==0)
        {
            flag=1;
            break;
        }
    }
    (flag==1) ? printf("Element %d is found at %d index postion in an array\n",element,i) :  printf("Element %d is not found in an array\n",element);
    return 0;
}
