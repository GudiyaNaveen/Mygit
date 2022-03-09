#include <stdio.h>
#define SIZE 10

void fun1(int,int);
void fun2(int,int);
void fun3(int,int);
void fun4(int,int);
void fun5(int,int);
void fun6(int,int);
void fun7(int,int);
void fun8(int,int);
void fun9(int,int);
void fun10(int,int);

int main()
{
    void (*fp[SIZE])(int,int)={fun1,fun2,fun3,fun4,fun5,fun6,fun7,fun8,fun9,fun10};
    int x,y,i;
    printf("Enter two numbers: ");
    scanf("%d%d",&x,&y);
    printf("\n");
    for(i=0;i<SIZE;i++)
    {
        fp[i](x,y);
    }
    return 0;
}

void fun1(int a,int b)
{
    printf("Address of fun1() parameters: \n%p\n%p\n",a,b);
}

void fun2(int a,int b)
{
    printf("Address of fun2() parameters: \n%p\n%p\n",a,b);
}

void fun3(int a,int b)
{
    printf("Address of fun3() parameters: \n%p\n%p\n",a,b);
}

void fun4(int a,int b)
{
    printf("Address of fun4() parameters: \n%p\n%p\n",a,b);
}

void fun5(int a,int b)
{
    printf("Address of fun5() parameters: \n%p\n%p\n",a,b);
}

void fun6(int a,int b)
{
    printf("Address of fun6() parameters: \n%p\n%p\n",a,b);
}

void fun7(int a,int b)
{
    printf("Address of fun7() parameters: \n%p\n%p\n",a,b);
}

void fun8(int a,int b)
{
    printf("Address of fun8() parameters: \n%p\n%p\n",a,b);
}

void fun9(int a,int b)
{
    printf("Address of fun9() parameters: \n%p\n%p\n",a,b);
}

void fun10(int a,int b)
{
    printf("Address of fun10() parameters: \n%p\n%p\n",a,b);
}