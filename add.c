#include<stdio.h>
int add(int,int);

int main()
{
	int x,y,z;
	printf("Enter a values: ");
	scanf("%d%d",&x,&y);
	z=add(x,y);
	printf("Addition of two numbers: %d\n",z);
	return 0;
}

int add(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
