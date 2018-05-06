#include<pthread.h>
#include<stdio.h>
#include<semaphore.h>
void *m1();
void *m2();
int s1=1;
sem_t s;
int main()
{
	sem_init(&s,0,1);
	pthread_t thd1,thd2;
	pthread_create(&thd1,NULL,m1,NULL);
	pthread_create(&thd2,NULL,m2,NULL);
	pthread_join(thd1,NULL);
	pthread_join(thd2,NULL);
	printf("shared varible is :: %d",s);
}
void *m1()
{
	int a;
	int i;
	sem_wait(&s);
	a=s1;
	a++;
	sleep(2);
	for(int i=1;i<10;i++);
	{
	printf("%d\n ",i);
	i++;
	}
	s1=a;
	sem_post(&s);
}
void *m2()
{
	int b;
	int j;
	sem_wait(&s);
	b=s1;
	b--;
	sleep(2);
	for(int j=20;j<30;j++);
	{
	printf("%d\n ",j);
	}
	s1=b;
	sem_post(&s);
}
