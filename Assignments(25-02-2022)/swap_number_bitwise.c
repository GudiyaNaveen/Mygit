/* Write C program to swap two numbers using bitwise. */

#include<stdio.h>

void swap(int *,int *);
int main()
{
    int x,y;
    printf("Enter two elements: ");
    scanf("%d%d",&x,&y);
    printf("Before swapping the elements:\nx:%d\ny:%d\n",x,y);
    swap(&x,&y);
    printf("After swapping the elements:\nx:%d\ny:%d\n",x,y);
    return 0;
}

void swap(int *a,int *b)
{
    *a=*a^*b;
    *b=*a^*b;
    *a=*a^*b;
}
