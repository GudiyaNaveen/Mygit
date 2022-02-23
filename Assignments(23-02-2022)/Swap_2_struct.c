/* Swap the values of 2 struct elements , find area by passing struct to fn 
   use fn pointers , macro fn.
*/

#include<stdio.h>
#define a(l,w) l*w

int swap(struct_1,struct_2);
typedef struct
{
    unsigned int length;
    unsigned int width;
    unsigned int area;
}struct_1;

typedef struct
{
    unsigned int length;
    unsigned int width;
    unsigned int area;
}struct_2;

int main()
{
    int (*fp)(struct_1,struct_2);
    struct_1 s1;
    struct_2 s2;
    printf("Enter length and width: ");
    scanf("%d%d%d%d",&s1.length,&s1.width,&s2.length,&s2.width);
    s1.area=a(s1.length,s1.width);
    s2.area=a(s2.length,s2.width);
    printf("Before swap:\n");
    printf("s1: %d\ns2: %d\n",s1.area,s2.area);
    fp=swap;
    fp(s1,s2);
    return 0;
}

int swap(struct_1 s1,struct_2 s2)
{
    int temp;
    temp=s1.area;
    s1.area=s2.area;
    s2.area=temp;
    printf("After swap:\n");
    printf("s1: %d\ns2: %d\n",s1.area,s2.area);
    return 0;
}
