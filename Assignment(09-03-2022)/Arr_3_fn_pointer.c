#include<stdio.h>
#define SIZE 3

char *fun1();
char *fun2();
char *fun3();

int main()
{
	char (*x[SIZE])()={fun1,fun2,fun3};
	char arr[SIZE];
	int i;
	for(i=0;i<SIZE;i++)
	{
		arr[i]=x[i]();
		printf("%s\n",arr[i]);
	}
	printf("\n");
}

char *fun1()
{
	char str[6]={'I','n','d','i','a','\0'};
	printf("Charcters in fun1():\n");
	return str;
}

char *fun2()
{
	char str[6]={'S','u','r','y','a','\0'};
	printf("Charcters in fun2():\n");
	return str;
}

char *fun3()
{
	char str[6]={'T','i','g','e','r','\0'};
	printf("Characters in fun3(): \n");
	return str;
}
