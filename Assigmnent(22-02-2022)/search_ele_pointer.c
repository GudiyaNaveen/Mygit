/* Write a c program to search an element in an array using pointers. 
   use:enum,const,function pointers.
*/

#include <stdio.h>
#define SIZE 100

enum search{f=1,s=0};
enum search y;
int Search_ele(int *,const int ,int );
int main()
{
    int a[SIZE],i,k,n,x;
    int const *ptr=&n;
    int (*fp)(int a[],int,int);
    printf("Enter size of an element in array: ");
    scanf("%d",&n);
    printf("Enter elements in an array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Search Entered element in an array: ");
    scanf("%d",&k);
    printf("Entered elements in an array: ");
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
    printf("\n");
    fp=Search_ele;
    x=fp(a,n,k);
    (f==x) ? printf("Element %d is found\n",k):printf("Element %d is not found\n",k);
    return 0;
}

int Search_ele(int *ptr,const int n,int k)
{
    
    int i=0,index=0,flag;
    for(i=0;i<n;i++)
    {
        if(*(ptr+i)==k)
        {
            index=i;
            flag=f;
            break;
        }
    }
    if(flag==1) 
        return f;
    else
        return s;
}
