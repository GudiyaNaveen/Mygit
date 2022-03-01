/* Write C program to implement a bubble sort */

#include<stdio.h>
#define N 10

int main()
{
    int a[N]={60,20,50,10,40,100,80,30,90,70};
    int (*arr)[N];
    int i,j,temp;
    arr=&a;
    printf("Before Bubble sorting the elements in an array:\n");
    for(i=0;i<N;i++)
    {
        printf("%d ",(*arr)[i]);
    }
    printf("\n");
    for(i=0;i<N;i++) // This Loop iterate upto 'N' Times
    {
        for(j=0;j<N-i-1;j++) // This loop iterate upto 'N-1-i' times
        {
            if((*arr)[j]>(*arr)[j+1]) // Here, if (*arr)[j]>(*arr)[j+1] is satisfies then it enter inside condition and swapping will happen.
            {
                temp=(*arr)[j];
                (*arr)[j]=(*arr)[j+1];
                (*arr)[j+1]=temp;
            }
        }
    }
    printf("After Bubble sorting the elements in an array:\n");
    for(i=0;i<N;i++)
    {
        printf("%d ",(*arr)[i]);
    }
    printf("\n");
    return 0;
}
