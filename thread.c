#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
#include<string.h>
void *thread_function(void *mg);
int i,j,n;
void main()
{	char *a="10";
	void *result;
	pthread_t a_thread;
	pthread_create(&a_thread,NULL,thread_function,a);
	pthread_join(a_thread,&result);
	printf("Thread created \n");
	for(j=20;j<25;i++)
	{
		printf("%d \n",j++);
		sleep(1);
	}
	printf("thread returned %s\n",&result);
}
void *thread_function(void *mg)
{
	int sum=0;
	n = atoi(mg);
	for(i=0;i<n;i++)
	{
		printf("%d \n",i);
		sum=sum+i;
	}
printf("%d \n",sum);
pthread_exit("done");
}

