#include<stdio.h>

int sub(int,int);

int main()
{
	int a,b,n;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	n=sub(a,b);
	printf("Subtraction of two numbers: %d\n",n);
	return 0;
}

int sub(int x,int y)
{
	return x-y;
}
