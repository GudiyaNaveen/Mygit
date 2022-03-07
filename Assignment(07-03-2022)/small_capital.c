/* Write a program print small and capital alphabet using two threads */

#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

#define SIZE 26

char ch='A';
void *capital_Alp()
{
	int i;
	printf("Capital Alphabet:\n");
	for(i=0;i<SIZE;i++)
	{
		sleep(1);
		printf("%c ",ch);
	}
}

void *small_Alp()
{
	int i;
	printf("Small Alphabets: \n");
	for(i=0;i<SIZE;i++)
	{
		sleep(1);
		printf("%c ",ch+32);
		ch++;
	}
	printf("\n");
}

int main()
{
	pthread_t newthread[2];
	pthread_create(&newthread[0],NULL,&capital_Alp,NULL);
	pthread_create(&newthread[1],NULL,&small_Alp,NULL);
	pthread_join(newthread[0],NULL);
	pthread_join(newthread[1],NULL);
	return 0;
}
