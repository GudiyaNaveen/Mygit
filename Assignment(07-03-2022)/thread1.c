/* Sample program using pthread */

#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

#define n 8
#define m 6

void *myturn(void *ptr)//Thread Handling Function
{
	unsigned int i;
	for(i=0;i<=n;i++)
	{
		sleep(1);
		printf("Thread1 is printing\n");
	}
	printf("Myturn message: %s\n",(char *)ptr);
	printf("myturn ID: %lu\n",pthread_self());
}

void *Yourturn(void *p)
{
	int i;
	for(i=0;i<=m;i++)
	{
		sleep(1);
		printf("hello world!\n");
	}
	printf("Yourturn message: %s\n",(char *)p);
	printf("Yourturn ID: %lu\n",pthread_self());
}

int main()
{
	char *msg1="Hai";
	char *msg2="Welcome";
	pthread_t newthread[2];
	pthread_create(&newthread[0],NULL,&myturn,(void *)msg1);
	pthread_create(&newthread[1],NULL,&Yourturn,(void *)msg2);
	/*
		1st argument is threadID-->(&newthread)
		2nd argument is for attributes passing as NULL
		3rd argument for thread handling function-->(&myturn)
		4th argument for passing an argumnets for thread handling function-->((void *)&newthread)
	*/
	pthread_join(newthread[0],NULL);
	pthread_join(newthread[1],NULL);
	//Yourturn();
	return 0;
}
