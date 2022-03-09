#include <stdio.h>
#define SIZE 5

int Add(int,int);
int Sub(int,int);
int Mul(int,int);
int Div(int,int);
int Mod(int,int);

int main()
{
    int (*fp[SIZE])(int,int)={Add,Sub,Mul,Div,Mod};
    int arr[SIZE];
    int x,y,i,n;
    printf("Enter a two numbers: ");
    scanf("%d%d",&x,&y);
    printf("\n");
    for(i=0;i<SIZE;i++)
    {
        arr[i]=fp[i](x,y);
        printf("%d\n",arr[i]);
    }
    return 0;
}

int Add(int a,int b)
{
    printf("Addition of two numbers: ");
    return a+b;
}

int Sub(int a,int b)
{
    printf("Subtraction of two numbers: ");
    return a-b;
}

int Mul(int a,int b)
{
    printf("Multiplication of two numbers: ");
    return a*b;
}

int Div(int a,int b)
{
    printf("Division of two numbers: ");
    return a/b;
}

int Mod(int a,int b)
{
    printf("Modulus of two numbers: ");
    return a%b;
}
