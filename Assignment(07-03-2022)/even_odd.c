/* Write a program to print even and odd using two threads in C */

#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

#define SIZE 20

int arr[SIZE];
void *Even()
{
	int i;
	for(i=0;i<=SIZE;i++)
	{
		if(i%2==0)
		{
			sleep(1);
			arr[i]=i;
			printf("%d\n",arr[i]);
		}
	}
}


void *Odd()
{
	int i;
	for(i=0;i<=SIZE;i++)
	{
		if(i%2==1)
		{
			sleep(1);
			arr[i]=i;
			printf("%d\n",arr[i]);
		}	
	}
}


int main()
{
	pthread_t newthread[2];
	pthread_create(&newthread[0],NULL,&Even,NULL);
	pthread_create(&newthread[1],NULL,&Odd,NULL);
	pthread_join(newthread[0],NULL);
	pthread_join(newthread[1],NULL);
	return 0;
}

