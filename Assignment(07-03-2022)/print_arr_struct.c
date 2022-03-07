/* write a program creating an array of 5 structs on heap assign n print data using fns passing pointers. */

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int data;    
}array;

void print_array_struct(array *,int );

int main()
{
    void (*fp)(array *,int );
    int n,i;
    printf("Enter a size of an array of structure: ");
    scanf("%d",&n);
    array *arr;
    arr=(array *)malloc(n*sizeof(array));
    printf("Enter %d elements in array of structure: \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&(arr+i)->data);
    }
    fp=&print_array_struct;
    fp(arr,n);
    return 0;
}


void print_array_struct(array *s,int n)
{
    int i;
    printf("Elements in a array of structure: \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",(s+i)->data);
    }
    printf("\n");
}
